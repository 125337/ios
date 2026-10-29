@interface WCFinderBoxMgr : MMUserService <WCFinderXLabSwitchUpdateExt, MMLimitedModeExt, MMServiceProtocol>
{
    NSNumber * _enableFinderBoxValue; // +0x8
    FinderBoxConfig * _boxConfig; // +0x10
    NSNumber * _useFinderCGIValue; // +0x18
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (BOOL)enableFinderBox;
- (BOOL)_computeEnableFinderBox;
- (BOOL)enableFinderBoxMainSessionExpose;
- (BOOL)useFinderCGI;
- (BOOL)hideOftenReadBar;
- (BOOL)keepOnlyOneMsg;
- (BOOL)skipHistoryLineInUnreadCount;
- (BOOL)disableClientNewMsgReddot;
- (BOOL)suppressMassMsgReddotWhenFinderReddot;
- (void)updateBoxConfig:(id)arg1;
- (void)updateDisableFinderBox:(BOOL)arg1 shouldExitForUpdatedSettings:(BOOL)arg2;
- (id)_processBoxConfig:(id)arg1;
- (id)getBoxConfig;
- (void)onFinderXLabSwitchUpdate;
- (void)onLimitedModeChanged;
- (void)_disableFinderBoxForLimitedModeIfNeeded:(BOOL)arg1;
- (void)_refreshEnableFinderBoxValue;
- (void)notifyEnableFinderBoxChanged;
- (id)enableFinderBoxValue;
- (void)setEnableFinderBoxValue:(id)arg1;
- (id)boxConfig;
- (void)setBoxConfig:(id)arg1;
- (id)useFinderCGIValue;
- (void)setUseFinderCGIValue:(id)arg1;
- (void).cxx_destruct;
@end
