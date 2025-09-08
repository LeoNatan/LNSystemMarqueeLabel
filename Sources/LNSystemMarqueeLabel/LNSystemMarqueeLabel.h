//
//  LNSystemMarqueeLabel.h
//  LNSystemMarqueeLabel
//
//  Created by Léo Natan on 7/9/25.
//  Copyright © 2025 Léo Natan. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LNSystemMarqueeLabel : UILabel

@property (nonatomic, getter=isMarqueeScrollEnabled) BOOL marqueeScrollEnabled;
@property (nonatomic, getter=isRunning) BOOL running;

@property (nonatomic, copy) NSArray<LNSystemMarqueeLabel*>* synchronizedLabels;

- (void)reset;

@end

NS_ASSUME_NONNULL_END
