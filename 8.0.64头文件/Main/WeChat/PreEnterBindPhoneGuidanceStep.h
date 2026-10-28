@interface PreEnterBindPhoneGuidanceStep : PreEnterBaseStep <WCAccountPhoneBindGuidanceViewControllerDelegate, WCAccountBindPhoneControlLogicDelegate>
{
    BOOL _isForceShow; // +0x18
    BOOL _needSyncEscape; // +0x19
    WCAccountPhoneBindGuidanceData * _guidancedData; // +0x20
    WCAccountBindPhoneControlLogic * _bindPhoneLogic; // +0x28
}
- (id)initWithMsg:(id)arg1;
- (void)startStep;
- (void)showBindPhoneGuidanceView:(id)arg1;
- (void)realFinishStep;
- (void)bindPhoneReturn;
- (void)bindPhoneEnterWithIsFromGuidanceHelp:(BOOL)arg1;
- (void)onWCAccountBindPhoneControlLogicStop:(id)arg1;
- (void)onWCAccountBindPhoneControlLogicCheckOK:(id)arg1;
- (BOOL)isForceShow;
- (void)setIsForceShow:(BOOL)arg1;
- (BOOL)needSyncEscape;
- (void)setNeedSyncEscape:(BOOL)arg1;
- (id)guidancedData;
- (void)setGuidancedData:(id)arg1;
- (id)bindPhoneLogic;
- (void)setBindPhoneLogic:(id)arg1;
- (void).cxx_destruct;
@end
