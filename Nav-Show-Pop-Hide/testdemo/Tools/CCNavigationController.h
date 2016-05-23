//
//  CCNavigationController.h
//  CCSlideNavigationTransition
//
//  Created by eson on 14-6-25.
//  Copyright (c) 2014年 eson. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CCNavigationController : UINavigationController

@property (nonatomic, assign) CGFloat previousSlideViewInitailOriginX;

// 允许侧滑手势返回 -> Default YES
@property (nonatomic, assign, getter = isSlidingPopEnable) BOOL slidingPopEnable;

// 使用系统默认转场动画 -> Default NO
@property (nonatomic, assign, getter = isUseSystemAnimatedTransitioning) BOOL useSystemAnimatedTransitioning;

@property (nonatomic, assign) BOOL edgePopGestureOnly;

+ (void)setCacheSnapshotImageInMemory:(BOOL)cacheSnapshotImageInMemory;

@end
