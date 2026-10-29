@interface FaceHuiyanSharedInfo : NSObject
{
    BOOL _needFrontPage; // +0x8
    BOOL _isRSA; // +0x9
    BOOL _sessionSm4Enabled; // +0xa
    unsigned int _scene; // +0xc
    int _resultErrCode; // +0x10
    unsigned int _sessionAppUuid; // +0x14
    NSString * _packageName; // +0x18
    NSString * _packageSign; // +0x20
    NSString * _faceVerifyTitle; // +0x28
    NSString * _faceOtherVerifyTitle; // +0x30
    NSString * _faceOtherVerifyTitleFront; // +0x38
    NSString * _bioId; // +0x40
    NSString * _appId; // +0x48
    NSString * _userTicket; // +0x50
    NSString * _verifyInfo; // +0x58
    NSString * _serialId; // +0x60
    FaceRecogReporter * _reporter; // +0x68
    NSString * _businessTip; // +0x70
    NSString * _customViewsJson; // +0x78
    LiteAppDynamicModuleCallback * _customViewCallback; // +0x80
    LiteAppDynamicModuleCallback * _authDataCallback; // +0x88
    NSString * _resultType; // +0x90
    NSString * _resultErrMsg; // +0x98
    NSString * _resultToken; // +0xa0
    NSString * _resultSerialId; // +0xa8
    NSString * _resultBioId; // +0xb0
    NSString * _resultClickOtherVerifyBtn; // +0xb8
    NSString * _resultClickOtherVerifyBtnFront; // +0xc0
}
+ (id)sharedInstance;
- (void)clear;
- (void)clearResult;
- (id)toDictionary;
- (id)ensureReporter21131;
- (void)flushReporter21131WithCode:(int)arg1 errMsg:(id)arg2;
- (id)packageName;
- (void)setPackageName:(id)arg1;
- (id)packageSign;
- (void)setPackageSign:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)faceVerifyTitle;
- (void)setFaceVerifyTitle:(id)arg1;
- (id)faceOtherVerifyTitle;
- (void)setFaceOtherVerifyTitle:(id)arg1;
- (id)faceOtherVerifyTitleFront;
- (void)setFaceOtherVerifyTitleFront:(id)arg1;
- (BOOL)needFrontPage;
- (void)setNeedFrontPage:(BOOL)arg1;
- (id)bioId;
- (void)setBioId:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)userTicket;
- (void)setUserTicket:(id)arg1;
- (id)verifyInfo;
- (void)setVerifyInfo:(id)arg1;
- (BOOL)isRSA;
- (void)setIsRSA:(BOOL)arg1;
- (id)serialId;
- (void)setSerialId:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)businessTip;
- (void)setBusinessTip:(id)arg1;
- (id)customViewsJson;
- (void)setCustomViewsJson:(id)arg1;
- (id)customViewCallback;
- (void)setCustomViewCallback:(id)arg1;
- (id)authDataCallback;
- (void)setAuthDataCallback:(id)arg1;
- (id)resultType;
- (void)setResultType:(id)arg1;
- (int)resultErrCode;
- (void)setResultErrCode:(int)arg1;
- (id)resultErrMsg;
- (void)setResultErrMsg:(id)arg1;
- (id)resultToken;
- (void)setResultToken:(id)arg1;
- (id)resultSerialId;
- (void)setResultSerialId:(id)arg1;
- (id)resultBioId;
- (void)setResultBioId:(id)arg1;
- (id)resultClickOtherVerifyBtn;
- (void)setResultClickOtherVerifyBtn:(id)arg1;
- (id)resultClickOtherVerifyBtnFront;
- (void)setResultClickOtherVerifyBtnFront:(id)arg1;
- (BOOL)sessionSm4Enabled;
- (void)setSessionSm4Enabled:(BOOL)arg1;
- (unsigned int)sessionAppUuid;
- (void)setSessionAppUuid:(unsigned int)arg1;
- (void).cxx_destruct;
@end
