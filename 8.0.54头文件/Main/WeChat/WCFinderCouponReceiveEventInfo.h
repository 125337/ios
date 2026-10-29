@interface WCFinderCouponReceiveEventInfo : NSObject
{
    BOOL _hasResponseWhenFail; // +0x8
    unsigned int _couponStatus; // +0xc
    unsigned int _clickButtonAction; // +0x10
    unsigned int _clickButtonStyle; // +0x14
    long long _event; // +0x18
    long long _scene; // +0x20
    NSString * _stockID; // +0x28
    NSString * _buttonWording; // +0x30
    FinderShopCouponInfo_AcquireInfo * _acquireInfo; // +0x38
}
+ (id)infoWith:(id)arg1 event:(long long)arg2;
- (long long)event;
- (void)setEvent:(long long)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)stockID;
- (void)setStockID:(id)arg1;
- (BOOL)hasResponseWhenFail;
- (void)setHasResponseWhenFail:(BOOL)arg1;
- (unsigned int)couponStatus;
- (void)setCouponStatus:(unsigned int)arg1;
- (unsigned int)clickButtonAction;
- (void)setClickButtonAction:(unsigned int)arg1;
- (id)buttonWording;
- (void)setButtonWording:(id)arg1;
- (id)acquireInfo;
- (void)setAcquireInfo:(id)arg1;
- (unsigned int)clickButtonStyle;
- (void)setClickButtonStyle:(unsigned int)arg1;
- (void).cxx_destruct;
@end

