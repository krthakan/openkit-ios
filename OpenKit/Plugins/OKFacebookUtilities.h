//
//  OKFacebookUtilities.h
//  OKClient
//
//  Created by Suneet Shah on 1/3/13.
//  Copyright (c) 2013 OpenKit. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OKAuth.h"


@interface OKFacebookPlugin : OKAuthProvider

// CUSTOM API
- (void)sendFacebookRequest;
+ (void)sendFacebookRequest;

@end