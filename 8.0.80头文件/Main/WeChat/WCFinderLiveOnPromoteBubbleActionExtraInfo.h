@interface WCFinderLiveOnPromoteBubbleActionExtraInfo : NSObject <WCFinderLiveOnPromoteBubbleActionExtraInfoProvider>
{
    BOOL _isFromDetailNotice; // +0x8
    unsigned int _entranceType; // +0xc
    unsigned int _liveType; // +0x10
    NSString * _extra; // +0x18
    NSString * _idOfCouponBindToNotice; // +0x20
    NSDictionary * _otherActionResults; // +0x28
}
+ (id)extra:(id)arg1;
- (id)onPromoteBubbleActionExtraInfo;
- (id)extra;
- (void)setExtra:(id)arg1;
- (BOOL)isFromDetailNotice;
- (void)setIsFromDetailNotice:(BOOL)arg1;
- (id)idOfCouponBindToNotice;
- (void)setIdOfCouponBindToNotice:(id)arg1;
- (unsigned int)entranceType;
- (void)setEntranceType:(unsigned int)arg1;
- (id)otherActionResults;
- (void)setOtherActionResults:(id)arg1;
- (unsigned int)liveType;
- (void)setLiveType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
