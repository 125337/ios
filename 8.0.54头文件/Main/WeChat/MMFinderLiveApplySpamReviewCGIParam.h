@interface MMFinderLiveApplySpamReviewCGIParam : NSObject
{
    unsigned int _scene; // +0x8
    NSString * _anchorFinderUsername; // +0x10
    unsigned long long _objectId; // +0x18
    unsigned long long _liveId; // +0x20
    NSString * _alertId; // +0x28
}
- (id)anchorFinderUsername;
- (void)setAnchorFinderUsername:(id)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)alertId;
- (void)setAlertId:(id)arg1;
- (void).cxx_destruct;
@end

