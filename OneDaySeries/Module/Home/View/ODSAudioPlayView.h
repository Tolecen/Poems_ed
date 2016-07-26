//
//  ODSAudioPlayView.h
//  OneDaySeries
//
//  Created by LiuXiaoyu on 16/6/29.
//  Copyright © 2016年 cn.com.uzero. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DOUAudioStreamer.h"
#import "DOUAudioVisualizer.h"
#import "DOUAudioFileProvider.h"
#import "ODSTrack.h"

@interface ODSAudioPlayView : UIView

@property (nonatomic, strong) ODSTrack *track;

@property (nonatomic, strong) DOUAudioStreamer *streamer;
@property (nonatomic, strong) DOUAudioVisualizer *audioVisualizer;


@end
