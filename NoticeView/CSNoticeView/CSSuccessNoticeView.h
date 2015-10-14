//
//  CSSuccessNoticeView.h
//  NoticeView
//
//  Created by Chris Brandsma on 10/14/15.
//  Copyright © 2015 Tito Ciuro. All rights reserved.
//

#import "WBNoticeView.h"

@interface CSSuccessNoticeView : WBNoticeView

/**
 Creates and returns an success notice in the given view with the specified title and message.
 
 @param view The view to display the notice in.
 @param title The title of the notice.
 @param message The message of the notice.
 @return The newly created error notice object.
 */
+ (CSSuccessNoticeView *)successNoticeInView:(UIView *)view title:(NSString *)title message:(NSString *)message;


@end
