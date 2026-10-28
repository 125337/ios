@interface TPPlayerContext : NSObject
{
    BOOL _prepared; // +0x8
    BOOL _firstFrameRendered; // +0x9
    long long _textureId; // +0x10
    long long _videoWidth; // +0x18
    long long _videHeight; // +0x20
    long long _videoDuration; // +0x28
}
+ (id)makeWithTextureId:(long long)arg1 prepared:(BOOL)arg2 firstFrameRendered:(BOOL)arg3 videoWidth:(long long)arg4 videHeight:(long long)arg5 videoDuration:(long long)arg6;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)textureId;
- (void)setTextureId:(long long)arg1;
- (BOOL)prepared;
- (void)setPrepared:(BOOL)arg1;
- (BOOL)firstFrameRendered;
- (void)setFirstFrameRendered:(BOOL)arg1;
- (long long)videoWidth;
- (void)setVideoWidth:(long long)arg1;
- (long long)videHeight;
- (void)setVideHeight:(long long)arg1;
- (long long)videoDuration;
- (void)setVideoDuration:(long long)arg1;
@end
