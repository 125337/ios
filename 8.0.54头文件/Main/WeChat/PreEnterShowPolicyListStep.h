@interface PreEnterShowPolicyListStep : PreEnterBaseStep
{
    PreEnterShowPolicyListConfig * _configObj; // +0x18
    NSString * _userName; // +0x20
    WCPolicyListControlLogic * _policyListLogic; // +0x28
}
- (id)initWithMsg:(id)arg1;
- (id)configWithContent:(id)arg1;
- (id)policylist;
- (void)startStep;
- (void)finishStep;
- (id)configObj;
- (void)setConfigObj:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)policyListLogic;
- (void)setPolicyListLogic:(id)arg1;
- (void).cxx_destruct;
@end

