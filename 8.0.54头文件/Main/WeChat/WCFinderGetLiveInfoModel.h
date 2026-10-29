@interface WCFinderGetLiveInfoModel : NSObject
{
    int _anchorDisplayElementFlag; // +0x8
    unsigned int _autoPlayControlFlag; // +0xc
    FinderJumpInfo * _liveLoyaltyCardJump; // +0x10
    unsigned long long _objectId; // +0x18
    NSString * _objectNonceId; // +0x20
    NSString * _sessionBuffer; // +0x28
    FinderGetLiveInfoResp_LivePreviewJoinliveControlInfo * _previewJoinliveControlInfo; // +0x30
    unsigned long long _displayElementFlag; // +0x38
    FinderNotifyMoreLiveInfo * _notifyMoreLiveConfig; // +0x40
    FinderGetLiveInfoResp_LiveNotificationDynamicDisplayInfo * _notificationDynamicDisplayInfo; // +0x48
}
- (id)liveLoyaltyCardJump;
- (void)setLiveLoyaltyCardJump:(id)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (id)objectNonceId;
- (void)setObjectNonceId:(id)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (id)previewJoinliveControlInfo;
- (void)setPreviewJoinliveControlInfo:(id)arg1;
- (unsigned long long)displayElementFlag;
- (void)setDisplayElementFlag:(unsigned long long)arg1;
- (int)anchorDisplayElementFlag;
- (void)setAnchorDisplayElementFlag:(int)arg1;
- (unsigned int)autoPlayControlFlag;
- (void)setAutoPlayControlFlag:(unsigned int)arg1;
- (id)notifyMoreLiveConfig;
- (void)setNotifyMoreLiveConfig:(id)arg1;
- (id)notificationDynamicDisplayInfo;
- (void)setNotificationDynamicDisplayInfo:(id)arg1;
- (void).cxx_destruct;
@end

