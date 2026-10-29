@interface FaceRecogPayViewController : FaceRecogBaseViewController <MMUseCaseCallback>
{
    BOOL _canRetry; // +0x70
    NSString * _errorMsg; // +0x78
    NSString * _otherVerifyTitle; // +0x80
}
- (void)viewDidLoad;
- (void)procedureDidFinish;
- (void)procedureDidFailed:(id)arg1 errorTips:(id)arg2 canRetry:(BOOL)arg3;
- (void)startFaceCheckResultKindaUI:(id)arg1;
- (void)call:(id)arg1;
- (void)closeFaceCheckUseCaseCross;
- (id)errorMsg;
- (void)setErrorMsg:(id)arg1;
- (BOOL)canRetry;
- (void)setCanRetry:(BOOL)arg1;
- (id)otherVerifyTitle;
- (void)setOtherVerifyTitle:(id)arg1;
- (void).cxx_destruct;
@end
