//
//  NSObject+CCAssociative.h
//  CCSlideNavigationTransition
//
//  Created by eson on 14-6-25.
//  Copyright (c) 2014年 eson. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (CCAssociative)

/**
 *  Runtime 关联属性
 */
- (id)associativeObjectForKey:(NSString *)key;
- (void)removeAssociatedObjectForKey:(NSString *)key;
- (void)setAssociativeObject:(id)object forKey:(NSString *)key;

@end
