@interface WCFinderMemberShipIntroduceListData : NSObject
{
    BOOL _autoRenewSwitch; // +0x8
    unsigned long long _otherVideoNum; // +0x10
    unsigned long long _otherLiveNum; // +0x18
    unsigned long long _videoShortNum; // +0x20
    unsigned long long _liveShortNum; // +0x28
    unsigned long long _memberPrice; // +0x30
    unsigned long long _autoMemberPrice; // +0x38
    NSString * _wecoinProductId; // +0x40
    NSData * _lastBuffer; // +0x48
}
- (unsigned long long)otherVideoNum;
- (void)setOtherVideoNum:(unsigned long long)arg1;
- (unsigned long long)otherLiveNum;
- (void)setOtherLiveNum:(unsigned long long)arg1;
- (unsigned long long)videoShortNum;
- (void)setVideoShortNum:(unsigned long long)arg1;
- (unsigned long long)liveShortNum;
- (void)setLiveShortNum:(unsigned long long)arg1;
- (unsigned long long)memberPrice;
- (void)setMemberPrice:(unsigned long long)arg1;
- (unsigned long long)autoMemberPrice;
- (void)setAutoMemberPrice:(unsigned long long)arg1;
- (id)wecoinProductId;
- (void)setWecoinProductId:(id)arg1;
- (BOOL)autoRenewSwitch;
- (void)setAutoRenewSwitch:(BOOL)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (void).cxx_destruct;
@end

