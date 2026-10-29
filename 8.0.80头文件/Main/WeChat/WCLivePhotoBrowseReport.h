@interface WCLivePhotoBrowseReport : NSObject
{
    long long _livePhotoExpFrom; // +0x8
    NSString * _imageId; // +0x10
    NSString * _snsSessionId; // +0x18
    NSString * _snsObjectType; // +0x20
    NSString * _snsFeedId; // +0x28
    NSString * _snsPublishSessionId; // +0x30
    NSString * _livePhotoSid; // +0x38
    long long _livePlayTimingType; // +0x40
    long long _liveDurationMs; // +0x48
}
+ (id)generateLivePhotoSessionId;
+ (void)reportLivePhotoCloseData:(id)arg1;
- (void)reportLivePhotoPlayData;
- (void)reportLivePhotoExposeData;
- (long long)livePhotoExpFrom;
- (void)setLivePhotoExpFrom:(long long)arg1;
- (id)imageId;
- (void)setImageId:(id)arg1;
- (id)snsSessionId;
- (void)setSnsSessionId:(id)arg1;
- (id)snsObjectType;
- (void)setSnsObjectType:(id)arg1;
- (id)snsFeedId;
- (void)setSnsFeedId:(id)arg1;
- (id)snsPublishSessionId;
- (void)setSnsPublishSessionId:(id)arg1;
- (id)livePhotoSid;
- (void)setLivePhotoSid:(id)arg1;
- (long long)livePlayTimingType;
- (void)setLivePlayTimingType:(long long)arg1;
- (long long)liveDurationMs;
- (void)setLiveDurationMs:(long long)arg1;
- (void).cxx_destruct;
@end
