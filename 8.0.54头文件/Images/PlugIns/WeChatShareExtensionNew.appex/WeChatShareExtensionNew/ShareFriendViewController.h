@interface ShareFriendViewController : UIViewController <MSESessionListContentViewDelegate>
{
    MSEShareMainViewLogicController * _mainLogicController; // +0x8
    MSESessionListContentView * _sessionListContentView; // +0x10
}
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)onSessionListViewBack;
- (void)onJumpWechat;
- (void)onSessionListViewConfirmSend:(id)arg1;
- (id)getMSETransmitData;
- (void)onSessionSelected;
- (id)mainLogicController;
- (void)setMainLogicController:(id)arg1;
- (id)sessionListContentView;
- (void)setSessionListContentView:(id)arg1;
- (void).cxx_destruct;
@end

