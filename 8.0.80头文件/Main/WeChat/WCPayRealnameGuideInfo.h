@interface WCPayRealnameGuideInfo : NSObject
{
    BOOL _isShowProtocol; // +0x8
    unsigned int _guideFlag; // +0xc
    int _realnameScene; // +0x10
    NSString * _guideWording; // +0x18
    NSString * _leftButtonWording; // +0x20
    NSString * _rightButtonWording; // +0x28
    NSString * _uploadCreditUrl; // +0x30
    NSString * _title; // +0x38
    NSString * _subTitle; // +0x40
    NSArray * _uploadReasons; // +0x48
    NSString * _doneButtonTitle; // +0x50
    NSString * _uploadCreditUrlNew; // +0x58
    NSString * _leftProtocolWording; // +0x60
    NSString * _rightProtocolWording; // +0x68
    NSString * _protocolUrl; // +0x70
    WCPayECardRealNameInfo * _ecard_info; // +0x78
    NSString * _complianceUploadImageHalfPage; // +0x80
}
+ (id)genFromUnion:(id)arg1;
- (unsigned int)guideFlag;
- (void)setGuideFlag:(unsigned int)arg1;
- (id)guideWording;
- (void)setGuideWording:(id)arg1;
- (id)leftButtonWording;
- (void)setLeftButtonWording:(id)arg1;
- (id)rightButtonWording;
- (void)setRightButtonWording:(id)arg1;
- (id)uploadCreditUrl;
- (void)setUploadCreditUrl:(id)arg1;
- (int)realnameScene;
- (void)setRealnameScene:(int)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (id)uploadReasons;
- (void)setUploadReasons:(id)arg1;
- (id)doneButtonTitle;
- (void)setDoneButtonTitle:(id)arg1;
- (id)uploadCreditUrlNew;
- (void)setUploadCreditUrlNew:(id)arg1;
- (BOOL)isShowProtocol;
- (void)setIsShowProtocol:(BOOL)arg1;
- (id)leftProtocolWording;
- (void)setLeftProtocolWording:(id)arg1;
- (id)rightProtocolWording;
- (void)setRightProtocolWording:(id)arg1;
- (id)protocolUrl;
- (void)setProtocolUrl:(id)arg1;
- (id)ecard_info;
- (void)setEcard_info:(id)arg1;
- (id)complianceUploadImageHalfPage;
- (void)setComplianceUploadImageHalfPage:(id)arg1;
- (void).cxx_destruct;
@end
