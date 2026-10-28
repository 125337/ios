@interface WCFinderHistorySettingsHelper : NSObject
{
    FinderNewUserPrepareResponse * _userPrepare; // +0x8
    MMUIViewController * _hostVC; // +0x10
}
- (id)initWithUserPrepare:(id)arg1 hostVC:(id)arg2;
- (id)makeHistorySwitch;
- (void)onClickSwitchFeedHistory:(id)arg1;
- (void)updateLocalHistoryFlag:(BOOL)arg1;
- (id)makeCleanHistorySwitch;
- (void)onCleanHistory;
- (id)userPrepare;
- (void)setUserPrepare:(id)arg1;
- (id)hostVC;
- (void)setHostVC:(id)arg1;
- (void).cxx_destruct;
@end
