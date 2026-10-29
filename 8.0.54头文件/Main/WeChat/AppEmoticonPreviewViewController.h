@interface AppEmoticonPreviewViewController : MMUIViewController <WCActionSheetDelegate, MMImgageBrowseViewDelegate, IAPPEmoticonDownloadExt, EmoticonCustomAddLogicControllerDelegate, IMsgRevokeExt>
{
    MMImageBrowseView * m_imageView; // +0x68
    UIButton * m_srcBtn; // +0x70
    NSString * username; // +0x78
    CMessageWrap * msgWrap; // +0x80
    id singleTapOnNav; // +0x88
    WCActionSheet * m_actionSheet; // +0x90
    UIView * _bkgView; // +0x98
    EmoticonCustomAddLogicController * _addEmoticonLogic; // +0xa0
    MMUIActivityIndicatorView * _smallLoadingView; // +0xa8
}
- (id)init;
- (void)dealloc;
- (void)launch:(id)arg1;
- (void)onSwipeRightNavigationButton:(id)arg1;
- (void)onReturn;
- (void)onOperate:(id)arg1;
- (void)addBackgroundView;
- (void)viewDidLoad;
- (void)addSmallLoadingView;
- (void)removeSmallLoadingView;
- (void)viewDidTransitionToNewSize;
- (unsigned long long)supportedInterfaceOrientations;
- (void)initDownloadedView;
- (void)updateEmoticonView;
- (void)initFromSourceButton;
- (id)addEmoticonLogic;
- (void)onSaveEmoticon:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showStatusBar;
- (void)onSingleTapOnNavigationBar:(id)arg1;
- (void)addNvGestureRecognizer;
- (void)removeNvGestureRecognizer;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillBeInteractivePoped;
- (void)setFullScreen:(BOOL)arg1;
- (void)onSingleTapImageBrowseView;
- (void)onImageBrowseViewDidZoom;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)onAppEmoticonDownloadFinished:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (id)singleTapOnNav;
- (void)setSingleTapOnNav:(id)arg1;
- (id)m_actionSheet;
- (void)setM_actionSheet:(id)arg1;
- (id)_bkgView;
- (void)set_bkgView:(id)arg1;
- (void)setAddEmoticonLogic:(id)arg1;
- (id)smallLoadingView;
- (void)setSmallLoadingView:(id)arg1;
- (void).cxx_destruct;
@end

