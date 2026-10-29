@interface FlutterTPPlayFeedbackInfo : NSObject
{
    long long _playCount; // +0x8
    long long _loopCount; // +0x10
    long long _totalPlaybackTimeMS; // +0x18
    long long _playbackTimeMS; // +0x20
    long long _totalBufferTimeMS; // +0x28
    long long _playerErrorCode; // +0x30
    NSString * _playerErrorDesc; // +0x38
    long long _durationMS; // +0x40
    long long _presentationHeight; // +0x48
    long long _presentationWidth; // +0x50
    long long _size; // +0x58
    long long _bitrate; // +0x60
    NSString * _vcodec; // +0x68
    long long _bufferredCount; // +0x70
    long long _actualPlayingTimeMS; // +0x78
    long long _getMaxPlayPosition; // +0x80
    long long _firstLoadingTimeMS; // +0x88
}
+ (id)makeWithPlayCount:(long long)arg1 loopCount:(long long)arg2 totalPlaybackTimeMS:(long long)arg3 playbackTimeMS:(long long)arg4 totalBufferTimeMS:(long long)arg5 playerErrorCode:(long long)arg6 playerErrorDesc:(id)arg7 durationMS:(long long)arg8 presentationHeight:(long long)arg9 presentationWidth:(long long)arg10 size:(long long)arg11 bitrate:(long long)arg12 vcodec:(id)arg13 bufferredCount:(long long)arg14 actualPlayingTimeMS:(long long)arg15 getMaxPlayPosition:(long long)arg16 firstLoadingTimeMS:(long long)arg17;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)playCount;
- (void)setPlayCount:(long long)arg1;
- (long long)loopCount;
- (void)setLoopCount:(long long)arg1;
- (long long)totalPlaybackTimeMS;
- (void)setTotalPlaybackTimeMS:(long long)arg1;
- (long long)playbackTimeMS;
- (void)setPlaybackTimeMS:(long long)arg1;
- (long long)totalBufferTimeMS;
- (void)setTotalBufferTimeMS:(long long)arg1;
- (long long)playerErrorCode;
- (void)setPlayerErrorCode:(long long)arg1;
- (id)playerErrorDesc;
- (void)setPlayerErrorDesc:(id)arg1;
- (long long)durationMS;
- (void)setDurationMS:(long long)arg1;
- (long long)presentationHeight;
- (void)setPresentationHeight:(long long)arg1;
- (long long)presentationWidth;
- (void)setPresentationWidth:(long long)arg1;
- (long long)size;
- (void)setSize:(long long)arg1;
- (long long)bitrate;
- (void)setBitrate:(long long)arg1;
- (id)vcodec;
- (void)setVcodec:(id)arg1;
- (long long)bufferredCount;
- (void)setBufferredCount:(long long)arg1;
- (long long)actualPlayingTimeMS;
- (void)setActualPlayingTimeMS:(long long)arg1;
- (long long)getMaxPlayPosition;
- (void)setGetMaxPlayPosition:(long long)arg1;
- (long long)firstLoadingTimeMS;
- (void)setFirstLoadingTimeMS:(long long)arg1;
- (void).cxx_destruct;
@end

