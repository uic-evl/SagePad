//
//  DBDirectory.h
//  SagePad
//
//  Created by Matthew Cobb on 2/14/12.
//  Copyright 2012 UIC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DBFileType.h"

@interface DBDirectory : DBFileType

@property (nonatomic, retain) DBDirectory *parent;
@property (nonatomic, retain) NSMutableArray *children;
@property (nonatomic, retain) NSMutableArray *files;

- (id)initWithName:(NSString *)name andParent:(DBDirectory *)parent;

@end
