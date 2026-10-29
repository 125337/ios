@interface FaceRecog3rdVerifyConfirmLogic : MMObject <PBMessageObserverDelegate>
{
    BOOL _bDefaultConfirm; // +0x8
    unsigned int _sourceType; // +0xc
    unsigned int _checkAliveType; // +0x10
    float _lightThreshold; // +0x14
    id <FaceRecog3rdVerifyConfirmLogicDelegate> _delegate; // +0x18
    NSMutableArray * _confirmInfos; // +0x20
    NSDictionary * _prompts; // +0x28
    NSString * _bizNickName; // +0x30
    NSString * _headerPromptWording; // +0x38
    NSString * _feedbackUrl; // +0x40
    NSString * _feedbackUrlForConfirmView; // +0x48
    NSString * _businessTip; // +0x50
    UIColor * _businessTipColor; // +0x58
    NSString * _businessHeadUrl; // +0x60
    double _faceFrameRatio; // +0x68
    NSString * _verifyResult; // +0x70
    NSString * _overseaDesc; // +0x78
    NSString * _overseaAgreement; // +0x80
}
- (void)resetLogicState;
- (BOOL)startGetConfirmInfo:(id)arg1 verifyInfo:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetConfirmInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)sourceType;
- (void)setSourceType:(unsigned int)arg1;
- (id)confirmInfos;
- (void)setConfirmInfos:(id)arg1;
- (id)prompts;
- (void)setPrompts:(id)arg1;
- (id)bizNickName;
- (void)setBizNickName:(id)arg1;
- (id)headerPromptWording;
- (void)setHeaderPromptWording:(id)arg1;
- (id)feedbackUrl;
- (void)setFeedbackUrl:(id)arg1;
- (id)feedbackUrlForConfirmView;
- (void)setFeedbackUrlForConfirmView:(id)arg1;
- (id)businessTip;
- (void)setBusinessTip:(id)arg1;
- (id)businessTipColor;
- (void)setBusinessTipColor:(id)arg1;
- (id)businessHeadUrl;
- (void)setBusinessHeadUrl:(id)arg1;
- (unsigned int)checkAliveType;
- (void)setCheckAliveType:(unsigned int)arg1;
- (BOOL)bDefaultConfirm;
- (void)setBDefaultConfirm:(BOOL)arg1;
- (float)lightThreshold;
- (void)setLightThreshold:(float)arg1;
- (double)faceFrameRatio;
- (void)setFaceFrameRatio:(double)arg1;
- (id)verifyResult;
- (void)setVerifyResult:(id)arg1;
- (id)overseaDesc;
- (void)setOverseaDesc:(id)arg1;
- (id)overseaAgreement;
- (void)setOverseaAgreement:(id)arg1;
- (void).cxx_destruct;
@end

