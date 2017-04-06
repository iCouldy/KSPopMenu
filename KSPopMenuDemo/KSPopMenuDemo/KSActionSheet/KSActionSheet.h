//
//  KSActionSheet.h
//  KSPopMenuDemo
//
//  Created by Mr.kong on 2017/4/6.
//  Copyright © 2017年 Mr.kong. All rights reserved.
//

#import <UIKit/UIKit.h>

@class KSAction;
typedef void(^KSActionSheetResult)(NSUInteger idx,KSAction* action);

@interface KSActionSheet : UIView

+ (void)actions:(NSArray<KSAction*>*)actions;

@end


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

@interface KSAction : NSObject

- (instancetype)initWithTitle:(NSString*)title
                    attribute:(NSDictionary*)attribute
                       action:(void(^)())action NS_DESIGNATED_INITIALIZER;

@end