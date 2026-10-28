@interface ContactInfoViewController : MMUIViewController <ForwardMessageLogicDelegate, WCStoryFacadeExt, SendVerifyMsgViewControllerDelegate, WeixinContactInfoAssistDelegate, WAUINavigationControllerDelegate, TextStateMgrExt, TextStateProfileDragAnimateHelperDelegate, WCStatusViewDelegate, MMPageSheetAdapterDelegate, ContactInfoAssistDelegate, IContactMgrExt, VerifyPhoneDelegate, MMSayHelloViewControllerDelegate, ICertInfoMgrExt, WCFacadeExt, IStrangerContactMgrExt, IUpdateProfileMgrExt, IHDHeadImageViewExt>
{
    unsigned int m_uiVerify; // +0x70
    CContact * m_contact; // +0x78
    CContact * m_chatContact; // +0x80
    id <contactInfoDelegate> m_delegate; // +0x88
    id <ContactInfoViewControllerDelegate> m_InfoDelegate; // +0x90
    CBaseContactInfoAssist * m_oContactInfoAssist; // +0x98
    CContactVerifyLogic * m_contactVerifyLogic; // +0xa0
    NSString * m_nsLocation; // +0xa8
    BOOL m_bPopToRootWhenDelete; // +0xb0
    unsigned int m_uiFromScene; // +0xb4
    unsigned long long m_wcOperateMode; // +0xb8
    Class m_popToViewControllerClassWhenDelete; // +0xc0
    unsigned long long m_searchScene; // +0xc8
    id m_userData; // +0xd0
    double m_CurrentWidth; // +0xd8
    ForwardMessageLogicController * m_forwardLogic; // +0xe0
    unsigned int _startTime; // +0xe8
    SendVerifyMsgLogicController * m_sendVerifylogicVC; // +0xf0
    BOOL _m_bForbidPopWhenDeleteContact; // +0xf8
    BOOL _statusBarForceLightMode; // +0xf9
    BOOL _isFullScreenShowStory; // +0xfa
    BOOL _hasStoryData; // +0xfb
    BOOL _canShowStoryView; // +0xfc
    BOOL _isShowingStoryPreview; // +0xfd
    BOOL _shouldReportExposeCurrentStatusCardOnAppear; // +0xfe
    unsigned int _searchOpenIMContactScene; // +0x100
    unsigned int _searchFromIndex; // +0x104
    unsigned int _favId; // +0x108
    unsigned long long m_uiAddFriendStatScene; // +0x110
    unsigned long long _m_qrCodeAddFriendScene; // +0x118
    NSMutableDictionary * _verifyUserInfoList; // +0x120
    NSString * _m_nsAddContactRemind; // +0x128
    NSData * _m_spamContext; // +0x130
    NSString * _openIMContactUrl; // +0x138
    NSString * _searchId; // +0x140
    NSString * _searchKeyword; // +0x148
    NSString * _searchExtraParamsString; // +0x150
    CMessageWrap * _sourceMsg; // +0x158
    NSString * _reportInfo; // +0x160
    BrandProfileEnterInfo * _bpeInfo; // +0x168
    NSString * _verifyContent; // +0x170
    NSString * _searchClickId; // +0x178
    NSDictionary * _extraSourceInfo; // +0x180
    MMPageSheetAdapter * _pageSheetAdapter; // +0x188
    WCMomentsJumpData * _snsJumpData; // +0x190
    UIButton * _preiviewMaskView; // +0x198
    MMUIButton * _contactFrontView; // +0x1a0
    WCStoryDragAnimationUtil * _storyAnimationUtil; // +0x1a8
    TextStateProfileDragAnimateHelper * _textStateAnimateHelper; // +0x1b0
    MMUIView * _frontTableViewBackGroundView; // +0x1b8
    UITableView * _frontTableView; // +0x1c0
    double _lastMovement; // +0x1c8
    double _previewPositionY; // +0x1d0
    TextStateProfileCardContentView * _textStateContentView; // +0x1d8
    MMTimer * _textStateRefTimer; // +0x1e0
    unsigned long long _enterTime; // +0x1e8
    TextStatePrivacyMgr * _shareScopeMgr; // +0x1f0
}
- (unsigned int)GetFromScene;
- (id)init;
- (id)initWithTitle:(id)arg1;
- (BOOL)useBlackStatusbar;
- (BOOL)showNavigationBarSepLine;
- (long long)preferredStatusBarStyle;
- (BOOL)shouldModifyNavBarHidden;
- (void)setM_contact:(id)arg1;
- (BOOL)isInMyContactList;
- (void)initSystemPluginData:(long long)arg1;
- (void)reloadData;
- (void)resetLeftBarButtonItem;
- (id)getUserData;
- (void)reloadView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)tagForActivePage;
- (id)tagForCurrentPage;
- (void)reloadContactAssist;
- (void)updateContactFromServer;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setupTextStateView;
- (void)setupNoStoryView;
- (void)wrapFrontView;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)panGestureRecognize:(id)arg1;
- (void)processFrontViewGestureInNoStoryState:(id)arg1;
- (void)showFrontViewInNoStoryState;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewDidBePresented:(BOOL)arg1;
- (id)getContactInfoAssist;
- (void)viewDidPopOrDismiss:(BOOL)arg1;
- (void)checkNeedForcedUpdateForMemberDetail;
- (BOOL)shouldRestrictContentViewSize;
- (void)onFriendRequestSend;
- (void)contactVerifyOk:(id)arg1;
- (void)doReset:(id)arg1;
- (void)jumpToContentViewController:(id)arg1;
- (void)jumpToContentViewController:(id)arg1 completion:(id /* block */)arg2;
- (void)onNewMessage:(id)arg1;
- (void)onNewMessage:(id)arg1 requestInfo:(id)arg2;
- (void)onNewMessageWithPushOnTop:(id)arg1;
- (void)startLoadingWithText:(id)arg1;
- (void)stopLoadingWithOKText:(id)arg1;
- (void)stopLoadingWithFailText:(id)arg1;
- (id)getViewController;
- (id)getPageSheetAdapter;
- (void)onTableViewReload;
- (void)storyDataItemsChanged;
- (void)onShareMyFriend;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (BOOL)onFilterSendReceiver:(id)arg1;
- (void)onTalk:(id)arg1;
- (void)onPopViewController:(BOOL)arg1;
- (void)onRemoveContact;
- (void)jumpToPreviousPage;
- (id)getContactVerifyLogic;
- (id)getSearchId;
- (id)getSearchClickId;
- (unsigned long long)getContactAddFriendStatScene;
- (void)onWCGroupModMemberReturn:(BOOL)arg1 group:(id)arg2;
- (void)onWCGroupAddMemberReturn:(BOOL)arg1 group:(id)arg2;
- (void)onWCGroupRemoveMemberReturn:(BOOL)arg1 group:(id)arg2;
- (void)dealloc;
- (void)onProfileChange;
- (void)copyContactField:(id)arg1 toContact:(id)arg2;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (BOOL)handleStrongContactUpdateToMMContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onVerifyOKWithContact:(id)arg1;
- (void)delAllMsg;
- (void)onDeleteContact:(id)arg1;
- (void)bindPhoneReturn;
- (void)onSayHello;
- (void)onSendVerifyMsg;
- (void)onAddToContact;
- (void)onVerifyOK;
- (void)statBanner;
- (void)onSayHelloViewSendSayHello:(id)arg1;
- (void)onExpose;
- (void)onHDHeadImageWillAppear;
- (void)onHDHeadImageWillDisappear;
- (BOOL)isSeachActive;
- (BOOL)shouldInteractivePop;
- (void)reportEnter;
- (id)navigationBarBackgroundColor;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)onBackButtonClicked:(id)arg1;
- (void)layoutStoryViewWithStoryDataItem:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)contactSendRequestOk:(id)arg1;
- (void)addHeadViewElementToTextStateAnimateHelper:(id)arg1;
- (void)onTextStateDetailContentViewGenerated:(id)arg1 fittingHeight:(double)arg2;
- (void)onTextStateJumpSource;
- (void)onTextStateRefCurrent;
- (id)getProfileIntroduceView;
- (BOOL)shouldShowTextStateStyle;
- (void)setupTextStateDragAnimateHelper;
- (void)updateTextStateExpandHeight;
- (void)onFollowTextState;
- (void)showRefTextStateActionSheet;
- (void)textStateJumpTopicSquareWithReporter:(id)arg1;
- (void)onTextStateJumpTopicSquare;
- (void)onTextStateExpand;
- (void)onTextStateJumpRedEnvelope;
- (id)associateViewController;
- (void)onTapLikeListButtonForTextState:(id)arg1;
- (void)onTapCommentListButtonForCardView:(id)arg1;
- (void)onTapAtTextStateDetailButtonWithHandler:(id)arg1;
- (void)onTapAtTextStateHeadButton;
- (void)onTapAtIconButton;
- (void)onTapAtRedEnvelopeButton;
- (void)onTextStateUpdateForUserName:(id)arg1;
- (void)onTextStateDataLoaded;
- (void)onTextStateDataUpdated;
- (void)setPageSheetAdapter:(id)arg1;
- (void)showHalfScreenFromViewController:(id)arg1 animated:(BOOL)arg2;
- (double)getTableViewTopInset;
- (void)registerYReportSdk;
- (BOOL)navigationController:(id)arg1 shouldUsePresentWhenPushViewController:(id)arg2 animated:(BOOL)arg3 scene:(unsigned long long)arg4;
- (id)shareScopeMgr;
- (void)onWCStatusViewShowGroup:(id)arg1 view:(id)arg2;
- (void)pageSheetWillBePresentFrom:(id)arg1 inContainer:(id)arg2;
- (id)m_contact;
- (id)m_chatContact;
- (void)setM_chatContact:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_InfoDelegate;
- (void)setM_InfoDelegate:(id)arg1;
- (unsigned int)m_uiVerify;
- (void)setM_uiVerify:(unsigned int)arg1;
- (id)m_nsLocation;
- (void)setM_nsLocation:(id)arg1;
- (BOOL)m_bPopToRootWhenDelete;
- (void)setM_bPopToRootWhenDelete:(BOOL)arg1;
- (unsigned int)m_uiFromScene;
- (void)setM_uiFromScene:(unsigned int)arg1;
- (Class)m_popToViewControllerClassWhenDelete;
- (void)setM_popToViewControllerClassWhenDelete:(Class)arg1;
- (unsigned long long)m_searchScene;
- (void)setM_searchScene:(unsigned long long)arg1;
- (id)m_userData;
- (void)setM_userData:(id)arg1;
- (unsigned long long)m_uiAddFriendStatScene;
- (void)setM_uiAddFriendStatScene:(unsigned long long)arg1;
- (BOOL)m_bForbidPopWhenDeleteContact;
- (void)setM_bForbidPopWhenDeleteContact:(BOOL)arg1;
- (unsigned long long)m_qrCodeAddFriendScene;
- (void)setM_qrCodeAddFriendScene:(unsigned long long)arg1;
- (id)verifyUserInfoList;
- (void)setVerifyUserInfoList:(id)arg1;
- (id)m_nsAddContactRemind;
- (void)setM_nsAddContactRemind:(id)arg1;
- (id)m_spamContext;
- (void)setM_spamContext:(id)arg1;
- (id)openIMContactUrl;
- (void)setOpenIMContactUrl:(id)arg1;
- (unsigned int)searchOpenIMContactScene;
- (void)setSearchOpenIMContactScene:(unsigned int)arg1;
- (id)searchId;
- (void)setSearchId:(id)arg1;
- (id)searchKeyword;
- (void)setSearchKeyword:(id)arg1;
- (unsigned int)searchFromIndex;
- (void)setSearchFromIndex:(unsigned int)arg1;
- (id)searchExtraParamsString;
- (void)setSearchExtraParamsString:(id)arg1;
- (id)sourceMsg;
- (void)setSourceMsg:(id)arg1;
- (id)reportInfo;
- (void)setReportInfo:(id)arg1;
- (unsigned int)favId;
- (void)setFavId:(unsigned int)arg1;
- (id)bpeInfo;
- (void)setBpeInfo:(id)arg1;
- (id)verifyContent;
- (void)setVerifyContent:(id)arg1;
- (id)searchClickId;
- (void)setSearchClickId:(id)arg1;
- (id)extraSourceInfo;
- (void)setExtraSourceInfo:(id)arg1;
- (id)pageSheetAdapter;
- (BOOL)statusBarForceLightMode;
- (void)setStatusBarForceLightMode:(BOOL)arg1;
- (id)snsJumpData;
- (void)setSnsJumpData:(id)arg1;
- (id)preiviewMaskView;
- (void)setPreiviewMaskView:(id)arg1;
- (id)contactFrontView;
- (void)setContactFrontView:(id)arg1;
- (id)storyAnimationUtil;
- (void)setStoryAnimationUtil:(id)arg1;
- (id)textStateAnimateHelper;
- (void)setTextStateAnimateHelper:(id)arg1;
- (BOOL)isFullScreenShowStory;
- (void)setIsFullScreenShowStory:(BOOL)arg1;
- (BOOL)hasStoryData;
- (void)setHasStoryData:(BOOL)arg1;
- (BOOL)canShowStoryView;
- (void)setCanShowStoryView:(BOOL)arg1;
- (id)frontTableViewBackGroundView;
- (void)setFrontTableViewBackGroundView:(id)arg1;
- (id)frontTableView;
- (void)setFrontTableView:(id)arg1;
- (double)lastMovement;
- (void)setLastMovement:(double)arg1;
- (double)previewPositionY;
- (void)setPreviewPositionY:(double)arg1;
- (BOOL)isShowingStoryPreview;
- (void)setIsShowingStoryPreview:(BOOL)arg1;
- (id)textStateContentView;
- (void)setTextStateContentView:(id)arg1;
- (id)textStateRefTimer;
- (void)setTextStateRefTimer:(id)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (BOOL)shouldReportExposeCurrentStatusCardOnAppear;
- (void)setShouldReportExposeCurrentStatusCardOnAppear:(BOOL)arg1;
- (void)setShareScopeMgr:(id)arg1;
- (void).cxx_destruct;
@end
