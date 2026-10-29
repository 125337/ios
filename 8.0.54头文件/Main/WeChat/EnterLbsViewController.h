@interface EnterLbsViewController : MMUIViewController <FriendAsistSessionExt>
{
    UIButton * m_btnLbs; // +0x68
    MMSayHelloButton * m_btnSayHello; // +0x70
    UILabel * m_labNoHello; // +0x78
}
- (void)initData;
- (void)initView;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)shouldInteractivePop;
- (void)OnOpenSayHello;
- (void)OnOpenLbs;
- (void)UpdateView;
- (void)onFriendAssistUnreadCountChanged;
- (void).cxx_destruct;
@end

