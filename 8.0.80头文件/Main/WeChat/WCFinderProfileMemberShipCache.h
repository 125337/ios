@interface WCFinderProfileMemberShipCache : NSObject <PBCoding>
{
    BOOL _autoRenewSwitch; // +0x8
    NSArray * _videoTids; // +0x10
    long long _price; // +0x18
    long long _videoNum; // +0x20
    NSString * _ticket; // +0x28
    NSString * _wecoinProductId; // +0x30
    long long _autoPrice; // +0x38
}
+ (void)PBArrayAdd_videoTids;
+ (void)PBArrayAdd_price;
+ (void)PBArrayAdd_videoNum;
+ (void)PBArrayAdd_ticket;
+ (void)PBArrayAdd_wecoinProductId;
+ (void)PBArrayAdd_autoPrice;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)videoTids;
- (void)setVideoTids:(id)arg1;
- (long long)price;
- (void)setPrice:(long long)arg1;
- (long long)videoNum;
- (void)setVideoNum:(long long)arg1;
- (id)ticket;
- (void)setTicket:(id)arg1;
- (id)wecoinProductId;
- (void)setWecoinProductId:(id)arg1;
- (long long)autoPrice;
- (void)setAutoPrice:(long long)arg1;
- (BOOL)autoRenewSwitch;
- (void)setAutoRenewSwitch:(BOOL)arg1;
- (void).cxx_destruct;
@end
