//
//  SVWebViewController.h
//
//  Created by Sam Vermette on 08.11.10.
//  Copyright 2010 Sam Vermette. All rights reserved.
//
//  https://github.com/samvermette/SVWebViewController

#import <MessageUI/MessageUI.h>

#import "SVModalWebViewController.h"

@interface SVWebViewController : UIViewController

- (id)initWithAddress:(NSString*)urlString;
- (id)initWithURL:(NSURL*)URL;

@property (nonatomic, strong) UIWebView *mainWebView;
@property (nonatomic, readwrite) SVWebViewControllerAvailableActions availableActions;
@property (nonatomic, assign) BOOL disableCopyTintColor;
@property (nonatomic, assign) BOOL shouldUsePageTitle; // default YES. Title is taken from the HTML title.
@property (nonatomic, assign) BOOL shouldEnableScrolling; // default YES.

@end
