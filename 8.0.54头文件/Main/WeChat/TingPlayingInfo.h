@interface TingPlayingInfo : NSObject <TingBizPlayerDelegate>
{
    TingItem * _tingItem; // +0x8
    TingBizPlayer * _bizPlayer; // +0x10
    id <TingPlayingInfoDelegate> _delegate; // +0x18
    TingAudioTraceLog * _traceLog; // +0x20
}
- (id)initWithTingItem:(id)arg1;
- (id)description;
- (id)traceLog;
- (void)setBizPlayer:(id)arg1;
- (double)playedTime;
- (void)clearTraceLog;
- (BOOL)hasMinimizedWindow;
- (void)tingBizPlayer:(id)arg1 updateCurrentTime:(double)arg2 displayTime:(double)arg3 duration:(double)arg4;
- (void)tingBizPlayer:(id)arg1 statusChanged:(int)arg2;
- (void)tingBizPlayer:(id)arg1 onEvent:(int)arg2 error:(id)arg3;
- (void)tingBizPlayer:(id)arg1 onInfoEvent:(int)arg2 error:(id)arg3;
- (void)tingBizPlayer:(id)arg1 playRateChanged:(float)arg2;
- (void)tingBizPlayer:(id)arg1 onDisplayElementAvailable:(id)arg2;
- (void)tingBizPlayer:(id)arg1 onDisplayFrameBufferOut:(id)arg2;
- (void)tingBizPlayerOnDisplayViewMTKViewCreated:(id)arg1;
- (id)tingItem;
- (void)setTingItem:(id)arg1;
- (id)bizPlayer;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setTraceLog:(id)arg1;
- (void).cxx_destruct;
@end

