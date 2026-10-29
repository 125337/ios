@interface WCPayOverseaGetFacingReceiveQRCodeResponse : NSObject <PBCoding>
{
    unsigned int _uiIsSetAmount; // +0x8
    int _alertType; // +0xc
    int _currencyType; // +0x10
    NSString * _nsQRCodeUrl; // +0x18
    NSString * _nsRealname; // +0x20
    NSString * _alertTitle; // +0x28
    NSString * _leftButtonText; // +0x30
    NSString * _rightButtonText; // +0x38
    NSString * _rightButtonUrl; // +0x40
    NSString * _bottomText; // +0x48
    NSString * _bottomUrl; // +0x50
    NSString * _currencyUint; // +0x58
    NSString * _notice; // +0x60
    NSString * _noticeUrl; // +0x68
}
+ (void)PBArrayAdd_nsQRCodeUrl;
+ (void)PBArrayAdd_currencyType;
+ (void)PBArrayAdd_currencyUint;
+ (void)initialize;
+ (id)GenFromDictionary:(id)arg1;
- (id)getPBPropertyTable;
- (id)nsQRCodeUrl;
- (void)setNsQRCodeUrl:(id)arg1;
- (unsigned int)uiIsSetAmount;
- (void)setUiIsSetAmount:(unsigned int)arg1;
- (id)nsRealname;
- (void)setNsRealname:(id)arg1;
- (int)alertType;
- (void)setAlertType:(int)arg1;
- (id)alertTitle;
- (void)setAlertTitle:(id)arg1;
- (id)leftButtonText;
- (void)setLeftButtonText:(id)arg1;
- (id)rightButtonText;
- (void)setRightButtonText:(id)arg1;
- (id)rightButtonUrl;
- (void)setRightButtonUrl:(id)arg1;
- (id)bottomText;
- (void)setBottomText:(id)arg1;
- (id)bottomUrl;
- (void)setBottomUrl:(id)arg1;
- (int)currencyType;
- (void)setCurrencyType:(int)arg1;
- (id)currencyUint;
- (void)setCurrencyUint:(id)arg1;
- (id)notice;
- (void)setNotice:(id)arg1;
- (id)noticeUrl;
- (void)setNoticeUrl:(id)arg1;
- (void).cxx_destruct;
@end

