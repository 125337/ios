@interface WCFinderPhotoTrackingData : NSObject
{
    BOOL _firstExpose; // +0x8
    BOOL _isExposing; // +0x9
    NSString * _trackingKey; // +0x10
    WCFinderFeedContentVM * _contentVM; // +0x18
    WCFinderMediaInfo * _mediaInfo; // +0x20
    double _photoReadyTime; // +0x28
    double _exposeStartTime; // +0x30
    long long _useType; // +0x38
}
- (id)initWithMediaInfo:(id)arg1 contentVM:(id)arg2 useType:(long long)arg3;
- (id)trackingKey;
- (void)setTrackingKey:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)mediaInfo;
- (void)setMediaInfo:(id)arg1;
- (double)photoReadyTime;
- (void)setPhotoReadyTime:(double)arg1;
- (double)exposeStartTime;
- (void)setExposeStartTime:(double)arg1;
- (BOOL)firstExpose;
- (void)setFirstExpose:(BOOL)arg1;
- (BOOL)isExposing;
- (void)setIsExposing:(BOOL)arg1;
- (long long)useType;
- (void)setUseType:(long long)arg1;
- (void).cxx_destruct;
@end
