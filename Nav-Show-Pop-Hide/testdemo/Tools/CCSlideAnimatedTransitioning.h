//
//  CCSlideAnimatedTransitioning.h
//  CCSlideNavigationTransition
//
//  Created by eson on 14-6-25.
//  Copyright (c) 2014年 eson. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/**
 *  侧滑返回动画转场
 */
@interface CCSlideAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic, assign, getter = isReverse) BOOL reverse;
@property (nonatomic, assign) CGFloat transitioningInitailOriginX;

- (instancetype)initWithReverse:(BOOL)reverse;
+ (instancetype)transitioningWithReverse:(BOOL)reverse;

@end
