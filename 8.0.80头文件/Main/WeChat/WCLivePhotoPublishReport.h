@interface WCLivePhotoPublishReport : NSObject
{
    long long _liveClickScene; // +0x8
    long long _liveDurationMs; // +0x10
    long long _liveAbnormalType; // +0x18
    NSString * _picMd5; // +0x20
}
- (void)reportLivePhotoAbnormalEvent;
- (void)reportLivePhotoSelectEvent;
- (id)snsPublishSessionid;
- (long long)liveClickScene;
- (void)setLiveClickScene:(long long)arg1;
- (long long)liveDurationMs;
- (void)setLiveDurationMs:(long long)arg1;
- (long long)liveAbnormalType;
- (void)setLiveAbnormalType:(long long)arg1;
- (id)picMd5;
- (void)setPicMd5:(id)arg1;
- (void).cxx_destruct;
@end
