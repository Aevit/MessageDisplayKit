//
//  XHAudioPlayerManager.h
//  MessageDisplayKit
//
//  Created by Aevitx on 14-1-22.
//  Copyright (c) 2014年 Aevitx. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVAudioPlayer.h>

@protocol XHAudioPlayerManagerDelegate <NSObject>

@optional
- (void)didAudioPlayerBeginPlay:(AVAudioPlayer*)audioPlayer;
- (void)didAudioPlayerStopPlay:(AVAudioPlayer*)audioPlayer;
- (void)didAudioPlayerPausePlay:(AVAudioPlayer*)audioPlayer;

@end

@interface XHAudioPlayerManager : NSObject <AVAudioPlayerDelegate>

@property (nonatomic, strong) AVAudioPlayer *player;

@property (nonatomic, copy) NSString *playingFileName;

@property (nonatomic, assign) id <XHAudioPlayerManagerDelegate> delegate;

@property (nonatomic, strong) NSIndexPath *playingIndexPathInFeedList;//给动态列表用

+ (id)shareInstance;

- (AVAudioPlayer*)player;

- (void)managerAudioWithFileName:(NSString*)amrName toPlay:(BOOL)toPlay;
//- (void)playAudioWithFileName:(NSString*)amrName;//播放
//- (void)pausePlayingAudio;//暂停
- (void)stopAudio;//停止
- (BOOL)isPlaying;

@end


