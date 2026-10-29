@interface WXGamePushSettingViewController : MMUIViewController <WXGameGetUserSwitchCGIDelegate, WXGameSetUserSwitchCGIDelegate>
{
    MMTableViewInfo * m_tableViewInfo; // +0x68
    WXGameGetUserSwitchCGI * _getUserSwitchCGI; // +0x70
    WXGameSetUserSwitchCGI * _setUserSwitchCGI; // +0x78
    SwitchBlockList * _userSwitchBlockList; // +0x80
    UILabel * _errorLabel; // +0x88
}
- (void)dealloc;
- (void)viewDidLoad;
- (void)initTable;
- (void)showError;
- (void)getUserSwitchInfo;
- (void)handleSetSwitched:(id)arg1 cellInfo:(id)arg2;
- (void)getUserSwitchCGI:(id)arg1 didGetResponse:(id)arg2;
- (void)getUserSwitchCGI:(id)arg1 didFailWithError:(id)arg2;
- (void)setUserSwitchCGI:(id)arg1 didGetResponse:(id)arg2;
- (void)setUserSwitchCGI:(id)arg1 didFailWithError:(id)arg2;
- (double)labelHeight:(id)arg1 maxWidth:(double)arg2 font:(id)arg3;
- (id)getUserSwitchCGI;
- (void)setGetUserSwitchCGI:(id)arg1;
- (id)setUserSwitchCGI;
- (void)setSetUserSwitchCGI:(id)arg1;
- (id)userSwitchBlockList;
- (void)setUserSwitchBlockList:(id)arg1;
- (id)errorLabel;
- (void)setErrorLabel:(id)arg1;
- (void).cxx_destruct;
@end

