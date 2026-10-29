@interface ThumbnailRequest : NSObject
{
    NSString * _videoPath; // +0x8
    long long _timeMs; // +0x10
    long long _maxHeight; // +0x18
    long long _totalDurationMs; // +0x20
}
+ (id)makeWithVideoPath:(id)arg1 timeMs:(long long)arg2 maxHeight:(long long)arg3 totalDurationMs:(long long)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)videoPath;
- (void)setVideoPath:(id)arg1;
- (long long)timeMs;
- (void)setTimeMs:(long long)arg1;
- (long long)maxHeight;
- (void)setMaxHeight:(long long)arg1;
- (long long)totalDurationMs;
- (void)setTotalDurationMs:(long long)arg1;
- (void).cxx_destruct;
@end
