@interface WCFinderPlayBufferingInfo : NSObject
{
    BOOL _isFirstFrameLoading; // +0x8
    unsigned long long _startLoadingTimestamp; // +0x10
    unsigned long long _endLoadingTimestamp; // +0x18
    unsigned long long _playbackTime; // +0x20
    unsigned long long _bufferingType; // +0x28
}
- (unsigned long long)startLoadingTimestamp;
- (void)setStartLoadingTimestamp:(unsigned long long)arg1;
- (unsigned long long)endLoadingTimestamp;
- (void)setEndLoadingTimestamp:(unsigned long long)arg1;
- (unsigned long long)playbackTime;
- (void)setPlaybackTime:(unsigned long long)arg1;
- (BOOL)isFirstFrameLoading;
- (void)setIsFirstFrameLoading:(BOOL)arg1;
- (unsigned long long)bufferingType;
- (void)setBufferingType:(unsigned long long)arg1;
@end
