@interface WCFinderRedPacketVideoEditRequestParams : NSObject
{
    BOOL _isPendantView; // +0x8
    NSURL * _videoUrl; // +0x10
    long long _minSeconds; // +0x18
    long long _maxSeconds; // +0x20
}
- (id)init;
- (id)videoUrl;
- (void)setVideoUrl:(id)arg1;
- (BOOL)isPendantView;
- (void)setIsPendantView:(BOOL)arg1;
- (long long)minSeconds;
- (void)setMinSeconds:(long long)arg1;
- (long long)maxSeconds;
- (void)setMaxSeconds:(long long)arg1;
- (void).cxx_destruct;
@end
