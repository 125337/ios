@interface PreEnterShowCreatePasskeyEntryStep : PreEnterBaseStep <PasskeyCreateDelegate>
{
    BOOL _isValid; // +0x18
    PreEnterShowCreatePasskeyEntryConfig * _config; // +0x20
    PasskeyCreateLogic * _passkeyLogic; // +0x28
    NSString * _reportSessionId; // +0x30
}
- (id)initWithMsg:(id)arg1;
- (id)configWithContent:(id)arg1;
- (BOOL)isValid;
- (void)startStep;
- (void)reportPageClickButtonType:(int)arg1;
- (void)setIsValid:(BOOL)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)passkeyLogic;
- (void)setPasskeyLogic:(id)arg1;
- (id)reportSessionId;
- (void)setReportSessionId:(id)arg1;
- (void).cxx_destruct;
@end
