//
//  KiwaBookExternalModuleConnector.m
//  KiwaBookExternalModuleConnector
//
//  Created by Oleg Chernyshenko on 17/12/15.
//  Copyright © 2015 Kiwa. All rights reserved.
//

#import "KiwaBookExternalModuleConnector.h"

NSString *kStartEmbeddedGameNotification = @"kStartEmbeddedGameNotification";
NSString *kCloseEmbeddedGameNotification = @"kCloseEmbeddedGameNotification";

@implementation KiwaBookExternalModuleConnector

+ (id <KiwaBookEmbedding>)moduleWithNamePrefix:(NSString *)name {
    NSString *controllerName = [NSString stringWithFormat:@"%@EmbeddingController", name];
    id<KiwaBookEmbedding> object  = [[NSClassFromString(controllerName) alloc] init];
    
    return object;
}


@end
