//
//  JCFrame.h
//  JCFrameLayout
//
//  Created by abc on 17/3/27.
//  Copyright © 2017年 jackcat. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JCFrameLayoutConst.h"
#import "JCFrameUtilities.h"

@class JCFrame;

@protocol JCFrameDelegate <NSObject>

- (JCFrame*)jcFrame:(JCFrame*)jcFrame createFrameWithframeType:(JCFrameType)frameType;

@end

@interface JCFrame : NSObject

@property (nonatomic,weak) id<JCFrameDelegate> delegate;

/**
 *  布局类型
 **/
@property (nonatomic,assign,readonly) JCFrameType frameType;
/**
 *  当前属性的值
 **/
@property (nonatomic,strong,readonly) id value;

/**
 *  布局的对象UIView
 **/
@property (nonatomic,weak,readonly) UIView *view;

- (instancetype)initWithView:(UIView*)view frameType:(JCFrameType)frameType;


- (JCFrame*)left;
- (JCFrame*)right;
- (JCFrame*)top;
- (JCFrame*)bottom;
- (JCFrame*)width;
- (JCFrame*)height;
- (JCFrame*)centerX;
- (JCFrame*)centerY;
- (JCFrame*)center;
- (JCFrame*)size;

#define jc_equalTo(...)                 equalTo(JCBoxValue((__VA_ARGS__)))

- (JCFrame*(^)(id))jc_equalTo;
- (JCFrame*(^)(id))equalTo;

@end
