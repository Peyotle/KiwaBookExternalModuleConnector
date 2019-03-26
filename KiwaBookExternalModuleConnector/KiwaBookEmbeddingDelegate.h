//
//  KiwaBookEmbeddingDelegate.h
//  KiwaBookExternalModuleConnector
//
//  Created by Oleg Chernyshenko on 9/06/17.
//  Copyright © 2017 Kiwa. All rights reserved.
//

#ifndef KiwaBookEmbeddingDelegate_h
#define KiwaBookEmbeddingDelegate_h

@protocol KiwaBookEmbeddingDelegate <NSObject>

//- (void)closeGame;

@end

@protocol KiwaBookEmbedding <NSObject>
//- (void)startGame;
//- (void)stopGame;
@property (nonatomic, weak) id <KiwaBookEmbeddingDelegate> delegate;
@property (nonatomic, strong) UIViewController *controller;

@optional
- (void)startGame;
- (void)stopGame;

@end

#endif /* KiwaBookEmbeddingDelegate_h */
