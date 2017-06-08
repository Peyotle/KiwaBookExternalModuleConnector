//
//  KiwaBookEmbedding.h
//  KiwaBookExternalModuleConnector
//
//  Created by Oleg Chernyshenko on 9/06/17.
//  Copyright © 2017 Kiwa. All rights reserved.
//

#ifndef KiwaBookEmbedding_h
#define KiwaBookEmbedding_h

#import "KiwaBookEmbeddingDelegate.h"

@protocol KiwaBookEmbedding <NSObject>
//- (void)startGame;
//- (void)stopGame;
@property (nonatomic, weak) id <KiwaBookEmbeddingDelegate> delegate;
@property (nonatomic, strong) UIViewController *controller;

@end

#endif /* KiwaBookEmbedding_h */
