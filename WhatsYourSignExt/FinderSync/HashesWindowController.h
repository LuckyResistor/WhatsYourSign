//
//  HashesWindowController.h
//  WhatsYourSignExt
//
//  Created by Patrick Wardle on 12/21/17.
//  Copyright (c) 2017 Objective-See. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface HashesWindowController : NSWindowController

//signing info
@property(nonatomic, retain)NSDictionary* signingInfo;

//entitlements
@property (unsafe_unretained) IBOutlet NSTextView *hashes;

@end
