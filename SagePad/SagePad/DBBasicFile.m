//
//  DBBasicFile.m
//  SagePad
//
//  Created by Matthew Cobb on 2/20/12.
//  Copyright 2012 UIC. All rights reserved.
//

#import "DBBasicFile.h"

@implementation DBBasicFile

- (id)initWithMetadata:(DBMetadata *)metadata andParent:(DBFileType *)parent {
    self = [super initWithMetadata:metadata andParent:parent];
    if(self) {
    
    }
    return self;
}

- (void)download {
    [dropboxManager downloadFile:self.metadata.path];
}

- (void)handleFileLoaded:(NSString *)localPath {
    NSLog(@"DBBasicFile: got %@, delegate: %@", localPath, self.delegate);
    [self.delegate handleFileLoaded:localPath];
}

- (void)handleFileLoadFailure:(NSError *)error {
    [self.delegate handleFileLoadFailure:error];
}

@end
