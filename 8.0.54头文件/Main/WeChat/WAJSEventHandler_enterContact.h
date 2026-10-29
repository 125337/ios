@interface WAJSEventHandler_enterContact : WAJSEventHandler_BaseEvent <PBMessageObserverDelegate>
{
    NSString * _sessionFrom; // +0x8
    WASessionContentSendMsgInfo * _sendMsgInfo; // +0x10
    WAContactGetter * _contactGetter; // +0x18
    unsigned int _customDebugMode; // +0x20
    unsigned int _customWeappVersion; // +0x24
    NSString * _customAppid; // +0x28
    NSString * _customUsername; // +0x30
    NSString * _customBusinessUsername; // +0x38
    NSString * _customHeadImgUrl; // +0x40
    NSString * _customTitle; // +0x48
    NSString * _customSubTitle; // +0x50
    unsigned long long _customNewScene; // +0x58
    NSString * _customFromAppid; // +0x60
}
- (void)dealloc;
- (void)handleJSEvent:(id)arg1;
- (id)targetAppid;
- (id)targetUsername;
- (unsigned int)targetDebugMode;
- (unsigned int)targetWeappVersion;
- (id)targetFromAppid;
- (id)getImageDataWithImageUrl:(id)arg1;
- (void)enterSession:(id)arg1;
- (void)requestWithBusinessID:(id)arg1 sessionFrom:(id)arg2 sendMsgInfo:(id)arg3;
- (void)onGetSubBusinessInfoResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)customAppid;
- (void)setCustomAppid:(id)arg1;
- (id)customUsername;
- (void)setCustomUsername:(id)arg1;
- (id)customBusinessUsername;
- (void)setCustomBusinessUsername:(id)arg1;
- (id)customHeadImgUrl;
- (void)setCustomHeadImgUrl:(id)arg1;
- (id)customTitle;
- (void)setCustomTitle:(id)arg1;
- (id)customSubTitle;
- (void)setCustomSubTitle:(id)arg1;
- (unsigned long long)customNewScene;
- (void)setCustomNewScene:(unsigned long long)arg1;
- (unsigned int)customDebugMode;
- (void)setCustomDebugMode:(unsigned int)arg1;
- (unsigned int)customWeappVersion;
- (void)setCustomWeappVersion:(unsigned int)arg1;
- (id)customFromAppid;
- (void)setCustomFromAppid:(id)arg1;
- (void).cxx_destruct;
@end

