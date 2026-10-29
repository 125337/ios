@interface MMFinderLivePaymentConfirmPanelModel : NSObject
{
    unsigned int _wecoinPrice; // +0x8
    unsigned int _liveStartTime; // +0xc
    WCFinderContact * _contact; // +0x10
    NSString * _nickname; // +0x18
    WCFinderAuthInfo * _authInfo; // +0x20
    NSString * _topic; // +0x28
}
+ (id)modelWithDataItem:(id)arg1 wecoinPrice:(unsigned int)arg2;
- (unsigned int)wecoinPrice;
- (void)setWecoinPrice:(unsigned int)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)authInfo;
- (void)setAuthInfo:(id)arg1;
- (id)topic;
- (void)setTopic:(id)arg1;
- (unsigned int)liveStartTime;
- (void)setLiveStartTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
