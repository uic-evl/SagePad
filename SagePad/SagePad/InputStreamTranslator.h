//
//  InputStreamTranslator.h
//  SagePad
//
//  Created by Matthew Cobb on 11/19/11.
//  Copyright 2011 UIC. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol InputStreamTranslator <NSStreamDelegate>

@required
- (void)translateConnectionConfirmation;

@end