//
//  SwipeFrame.h
//  CoffeRoast_Project
//
//  Created by Bai-Kai-Ren on 2013/11/28.
//  Copyright (c) 2013年 Bai-Kai-Ren. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SwipeFrame : NSObject

+(SwipeFrame*) getSwipeFrame:(CGRect) frame;

@property(nonatomic) CGRect frame;
@property(nonatomic) BOOL  isUse;

@end
