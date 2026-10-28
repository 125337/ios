@interface MMFinderLiveReplayMessagePage : NSObject
{
    unsigned int _timeOffset; // +0x8
    unsigned int _timespan; // +0xc
    NSString * _liveDesc; // +0x10
    NSMutableArray * _frames; // +0x18
    MMFinderLiveReplayMessagePage * _nextLessRecentlyUsedPage; // +0x20
    MMFinderLiveReplayMessagePage * _nextMoreRecentlyUsedPage; // +0x28
}
- (id)initWithTimeOffset:(unsigned int)arg1 messageResponse:(id)arg2 liveTaskId:(id)arg3 initialLiveMicInfo:(id)arg4 initialLiveRoomImages:(id)arg5;
- (id)frameAtTimeOffset:(unsigned int)arg1 combinePreviousFramesInPage:(BOOL)arg2;
- (void)populateFramesWithTimeOffset:(unsigned int)arg1 timespan:(unsigned int)arg2 frameItems:(id)arg3 liveTaskId:(id)arg4 initialLiveMicInfo:(id)arg5 initialLiveRoomImages:(id)arg6;
- (unsigned int)timeOffset;
- (void)setTimeOffset:(unsigned int)arg1;
- (unsigned int)timespan;
- (void)setTimespan:(unsigned int)arg1;
- (id)liveDesc;
- (void)setLiveDesc:(id)arg1;
- (id)frames;
- (void)setFrames:(id)arg1;
- (id)nextLessRecentlyUsedPage;
- (void)setNextLessRecentlyUsedPage:(id)arg1;
- (id)nextMoreRecentlyUsedPage;
- (void)setNextMoreRecentlyUsedPage:(id)arg1;
- (void).cxx_destruct;
@end
