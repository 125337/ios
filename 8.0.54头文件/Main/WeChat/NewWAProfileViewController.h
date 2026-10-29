@interface NewWAProfileViewController : ZZFLEXTableViewController <WAProfileHeaderViewDelegate, ForwardMessageLogicDelegate, WAUINavigationControllerDelegate>
{
    ForwardMessageLogicController * _forwardLogic; // +0x68
    WAProfileHeaderView * _headerView; // +0x70
    NSMutableArray * _sectionHeaderList; // +0x78
    WAProfileFooterView * _footerView; // +0x80
    BOOL _needShowBottomFeedBack; // +0x88
    BOOL _isEnterStatReported; // +0x89
    unsigned int _fromAppVersion; // +0x8c
    unsigned long long _enterScene; // +0x90
    NSString * _sceneNote; // +0x98
    unsigned long long _exposeFrom; // +0xa0
    NSString * _pagePath; // +0xa8
    unsigned long long _fromDebugMode; // +0xb0
    NSDictionary * _exposeExtraInfo; // +0xb8
    unsigned long long _preScene; // +0xc0
    NSString * _preSceneNote; // +0xc8
    id <WAProfileViewControllerDelegate> _delegate; // +0xd0
    NSString * _hostAppid; // +0xd8
    NSString * _snapshotLocalId; // +0xe0
    WAProfileLogicController * _logicController; // +0xe8
    NSString * _userName; // +0xf0
    WAContact * _contact; // +0xf8
}
- (id)initWithUsername:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (void)viewDidTransitionToNewSize;
- (void)reloadData;
- (void)initTableView;
- (void)initHeaderViewIfNeed:(id)arg1;
- (void)reloadFooterView:(id)arg1;
- (void)updateHeaderViewWithEvaluateInfo;
- (void)initCustomNavItems;
- (void)onSelectFeedBackButtonWithReportAction:(unsigned long long)arg1;
- (void)onSelectRelatedBrandCell;
- (void)onSelectRelatedWeAppCell;
- (void)openBrandContact:(id)arg1;
- (void)onSelectedMoreInfoCell;
- (void)showEasyBuyPageSheet;
- (void)onBackButtonClicked;
- (void)onClickNavRightButton;
- (id)getItemData;
- (void)showTipsViewController:(id)arg1;
- (void)originalJump:(unsigned long long)arg1 JumpURL:(id)arg2;
- (void)onTagViewClicked:(id)arg1 tagType:(long long)arg2;
- (void)onTeenagerProtectLinkClicked:(unsigned long long)arg1;
- (void)onEnterButtonClicked:(id)arg1;
- (void)onServiceButtonClicked:(id)arg1;
- (void)onShareButtonClicked:(id)arg1;
- (void)onStarButtonClick;
- (void)onUnStarButtonClick;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageException:(id)arg1;
- (void)enterProfileStatReport:(unsigned int)arg1;
- (void)leaveProfileStatReport;
- (void)shareStatReport:(id)arg1 Result:(unsigned long long)arg2;
- (void)profileCommonReport:(unsigned long long)arg1 Result:(unsigned long long)arg2 configAction:(id /* block */)arg3;
- (void)profileCommonReport:(unsigned long long)arg1 Result:(unsigned long long)arg2;
- (void)profileCommonReport:(unsigned long long)arg1;
- (BOOL)navigationController:(id)arg1 shouldUsePresentWhenPushViewController:(id)arg2 animated:(BOOL)arg3 scene:(unsigned long long)arg4;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (id)sceneNote;
- (void)setSceneNote:(id)arg1;
- (unsigned long long)exposeFrom;
- (void)setExposeFrom:(unsigned long long)arg1;
- (id)pagePath;
- (void)setPagePath:(id)arg1;
- (unsigned long long)fromDebugMode;
- (void)setFromDebugMode:(unsigned long long)arg1;
- (unsigned int)fromAppVersion;
- (void)setFromAppVersion:(unsigned int)arg1;
- (id)exposeExtraInfo;
- (void)setExposeExtraInfo:(id)arg1;
- (unsigned long long)preScene;
- (void)setPreScene:(unsigned long long)arg1;
- (id)preSceneNote;
- (void)setPreSceneNote:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)needShowBottomFeedBack;
- (void)setNeedShowBottomFeedBack:(BOOL)arg1;
- (id)hostAppid;
- (void)setHostAppid:(id)arg1;
- (id)snapshotLocalId;
- (void)setSnapshotLocalId:(id)arg1;
- (id)logicController;
- (void)setLogicController:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (BOOL)isEnterStatReported;
- (void)setIsEnterStatReported:(BOOL)arg1;
- (void).cxx_destruct;
@end

