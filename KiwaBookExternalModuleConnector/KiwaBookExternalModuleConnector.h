//
//  KiwaBookExternalModuleConnector.h
//  KiwaBookExternalModuleConnector
//
//  Created by Oleg Chernyshenko on 17/12/15.
//  Copyright © 2015 Kiwa. All rights reserved.
//

//#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

extern NSString *kStartEmbeddedGameNotification;
extern NSString *kCloseEmbeddedGameNotification;

@protocol KiwaBookEmbeddingDelegate <NSObject>

//- (void)closeGame;

@end
//
@protocol KiwaBookEmbedding <NSObject>
//- (void)startGame;
//- (void)stopGame;
@property (nonatomic, weak) id <KiwaBookEmbeddingDelegate> delegate;
@property (nonatomic, strong) UIViewController *controller;

@end


@interface KiwaBookExternalModuleConnector : NSObject

//+ (void)openGame:(int)gameIndex;
+ (id <KiwaBookEmbedding>)moduleWithNamePrefix:(NSString *)name;
//@property (nonatomic, weak) id <KiwaBookEmbeddingDelegate> delegate;
//@property (nonatomic, strong) UIViewController *controller;

@end
