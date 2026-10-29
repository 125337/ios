@interface WCRedEnvelopesRedEnvelopesDetailViewController : WCRedEnvelopesBaseViewController <WebAddContactDelegate, EmoticonBoardViewDelegate, BaseEmoticonViewDelegate, EmoticonCustomAddLogicControllerDelegate, WCActionSheetDelegate, SharePreConfirmViewDelegate, SharePreConfirmSheetViewDelegate, WCActionSheetDelegate, WCRedEnvelopesStoryViewControllerDelegate, WCPlayerConfigDelegate, EmoticonSearchViewControllerDelegate, WCPlayerDownloaderExt, WCPlayerConfigDelegate, UITableViewDelegate, UITableViewDataSource, WCRedEnvelopesCommentInputToolViewDelegate>
{
    id <WCRedEnvelopesRedEnvelopesDetailViewControllerDelegate> m_delegate; // +0x88
    BOOL m_loadingMoreOrderList; // +0x90
    MMTableView * m_tableView; // +0x98
    BOOL m_bDidBack; // +0xa0
    WCUITextField * m_oWishingTextField; // +0xa8
    UIView * m_oHeaderView; // +0xb0
    WCRedEnvelopesCommentInputToolView * oWCRedEnvelopesCommentInputToolView; // +0xb8
    UIView * oMsgAnimationView; // +0xc0
    UIView * oMoneyAnimationView; // +0xc8
    UIView * oTableAnimationView; // +0xd0
    UIView * oTopHeaderView; // +0xd8
    UIView * oNavigationBarView; // +0xe0
    UIImageView * commentImageView; // +0xe8
    UIButton * commentButton; // +0xf0
    AVAudioPlayer * luckyPlayer; // +0xf8
    AVAudioPlayer * whistlePlayer; // +0x100
    UIButton * tailBtn; // +0x108
    UIView * oBottomView; // +0x110
    BOOL hasChangeBackgroundY; // +0x118
    UIView * headImageView; // +0x120
    BOOL m_bEnterpriseRedEnvelopes; // +0x128
    BOOL _isPreviewMode; // +0x129
    BOOL _isAnimationMode; // +0x12a
    BOOL _isPanBegin; // +0x12b
    BOOL _bIsEmoticonBoardViewShow; // +0x12c
    BOOL _hasShowGuideAnimate; // +0x12d
    BOOL _isDisappearFromStory; // +0x12e
    BOOL _isRefreshInAnimation; // +0x12f
    BOOL _m_isStoryShowing; // +0x130
    BOOL _bHasReportExposeBtnShow; // +0x131
    int enWCRedEnvelopesRedEnvelopesDetailViewControllerScene; // +0x134
    unsigned int m_uiStatFromScene; // +0x138
    unsigned int _enterTimeStamp; // +0x13c
    unsigned int _exitTimeStamp; // +0x140
    UIView * _m_globalStoryTitleView; // +0x148
    UIImageView * _globalStoryCoverView; // +0x150
    UIView * _jumpInfoView; // +0x158
    UIView * _m_globalSwipeUpView; // +0x160
    UIButton * _m_showStoryBigBtn; // +0x168
    ContactUpdateHelper * _m_helperForSenderNickName; // +0x170
    ContactUpdateHelper * _m_helperForSenderNickNameAnimation; // +0x178
    UIView * _m_pinImageViewAnimation; // +0x180
    UIView * _m_pinImageView; // +0x188
    MMEmoticonView * _emoticonView; // +0x190
    UIButton * _thxEmoticonBtn; // +0x198
    UIButton * _thxEmoticonTipsBtn; // +0x1a0
    MMEmoticonView * _thxEmoticonView; // +0x1a8
    RichTextView * _thxEmoticonTextView; // +0x1b0
    UIView * _thxEmoticonBkgView; // +0x1b8
    UIButton * _sendThxEmoticonBtn; // +0x1c0
    CEmoticonWrap * _thxEmoticonWrap; // +0x1c8
    NSString * _thxEmoticonText; // +0x1d0
    UIImageView * _changeIconImgView; // +0x1d8
    UIImageView * _loadingImgView; // +0x1e0
    MMUILabel * _loadingLabel; // +0x1e8
    EmoticonBoardView * _emoticonBoardView; // +0x1f0
    EmoticonCustomAddLogicController * _emoticonCustomAddLogic; // +0x1f8
    double _maskViewBottom; // +0x200
    UIView * _emoticonBoardViewTopMaskView; // +0x208
    SharePreConfirmView * _sharePreConfirmView; // +0x210
    SharePreConfirmSheetView * _sharePreConfirmSheetView; // +0x218
    CMessageWrap * _thxEmoticonMsgWrap; // +0x220
    UIButton * _bottomTailBtn; // +0x228
    UIImageView * _topCoverImgView; // +0x230
    UIButton * _detailLinkBtn; // +0x238
    UILabel * _nickNameLabel; // +0x240
    UILabel * _descLabel; // +0x248
    UIView * _fightingIcon; // +0x250
    UIView * _senderEmoticonView; // +0x258
    UILabel * _moneyLabel; // +0x260
    UILabel * _feeTypeLabel; // +0x268
    UIButton * _jumpBalanceBtn; // +0x270
    UIImageView * _topSkinBottomImageView; // +0x278
    UIImageView * _m_headerRedSkinMaskCurveView; // +0x280
    UIImageView * _m_globalRedSkinMaskCurveView; // +0x288
    WCRedEnvelopesStoryViewController * _m_redSkinStoryVC; // +0x290
    WCRedEnvelopesStoryDargUtil * _m_storyDragAnimationUtil; // +0x298
    double _currentTableViewOffSetY; // +0x2a0
    UIImageView * _storyMaskLoadingView; // +0x2a8
    UIImageView * _m_globalStoryGuideHandImageView; // +0x2b0
    UILabel * _m_globalStoryGuideLabel; // +0x2b8
    UIButton * _exposeBtn; // +0x2c0
    UIView * _emoticonBoardMask; // +0x2c8
    UIView * _emoticonBoardBackground; // +0x2d0
    UILabel * _finderDesignHBWarningLabel; // +0x2d8
    WCActionSheet * _m_actionSheet; // +0x2e0
}
- (id)init;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)showSmallShareButton;
- (void)initNavigationBar;
- (void)onClickSplitRedSkinEntryBtn:(id)arg1;
- (id)splitRedPakcetRightBarButtonCustomView;
- (void)onTouchCancelSplitRedSkinEntryBtn:(id)arg1;
- (void)onTouchDownSplitRedSkinEntryBtn:(id)arg1;
- (id)navigationBarBackgroundColor;
- (BOOL)shouldInteractivePop;
- (void)OnLeftBarButtonDone;
- (void)OnLeftBarButtonDoneLogic;
- (void)reportWhenDetailViewControllerBePop;
- (void)OnRealnameVerfitySuccess:(id)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)loadMoreOrderList;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (void)showNavigationBar;
- (void)autoPlayStoryIfNeed;
- (void)statExpourseOperation;
- (id)getBottomView;
- (id)getNoMoreBottomView;
- (id)getTailButton;
- (id)getExposeButton;
- (BOOL)hasRedSkin;
- (BOOL)hasStoryInfo;
- (void)initTableView;
- (void)bfs:(id)arg1;
- (id)createPlayerConfig;
- (BOOL)isCanShowBufferingView;
- (id)getSameCoverTailView;
- (id)getActionJumpView;
- (id)getAnimationView:(id)arg1;
- (id)GetNavigationBarViewHeader:(id)arg1;
- (id)getHeaderImageViewWithImgSize:(double)arg1;
- (id)GetViewHeader:(id)arg1;
- (id)cropImage:(id)arg1 toRect:(CGRect)arg2;
- (id)creatImageWithMaskImage:(id)arg1 andBackimage:(id)arg2;
- (id)generateMaskImage:(id)arg1;
- (BOOL)isNotchScreen;
- (void)onClickDetailJumpInfoBtn:(id)arg1;
- (id)GetHeaderView:(id)arg1;
- (void)reportChangeLinkClick:(unsigned int)arg1 Url:(id)arg2;
- (void)onForeignAmountDescInfoBtnClick:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (id)getTabview;
- (void)showStoryInfoGuideAnimation;
- (void)commentRedEnvelopes;
- (void)gotoBalanceDetail;
- (void)gotoUrl;
- (void)handleRedEnvelopesOperation:(id)arg1;
- (void)handleTailOperation;
- (void)handleExposeBtnClick;
- (void)watchMyRedEnvelopesList;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)makeCell:(id)arg1 cell:(id)arg2 row:(unsigned long long)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)SendTextMessageToolView:(id)arg1;
- (void)OnToolViewDissmiss;
- (void)startOpenAnimation;
- (void)animationForLabel;
- (void)setLeftCloseBarButton;
- (void)showLuckyAnimationWithLuckyData:(id)arg1 needWhistle:(BOOL)arg2 withWhistleData:(id)arg3;
- (id)generateEmitterLayer:(BOOL)arg1 withColors:(id)arg2;
- (void)setEnWCRedEnvelopesRedEnvelopesDetailViewControllerScene:(int)arg1;
- (void)OnWebAddContact:(int)arg1 Msg:(id)arg2 CallBack:(id)arg3;
- (void)OnWebAddContactReturn;
- (id)currentViewController;
- (id)addBorderViewBottomAtView:(id)arg1;
- (id)emoticonView;
- (BOOL)hasEmoticon;
- (id)thxEmoticonView;
- (id)thxEmoticonTextView;
- (id)thxEmoticonBkgView;
- (id)sendThxEmoticonBtn;
- (id)thxEmoticonBtn;
- (id)changeIconImgView;
- (id)lastThxEmoticonMd5;
- (unsigned int)lastThxEmoticonType;
- (id)lastThxEmoticonText;
- (void)saveSendThxEmoticonWrap;
- (void)sendThxEmoticonBtnClick;
- (void)showSharePreConfirmView;
- (void)OnSharePreConfirmViewSend:(id)arg1;
- (void)dismissDetailViewController;
- (void)OnSharePreConfirmViewCancel:(id)arg1;
- (void)OnSharePreConfirmSheetViewSend:(id)arg1;
- (void)OnSharePreConfirmSheetViewCancel:(id)arg1;
- (BOOL)enableAnswerBySelfie;
- (void)selectThxEmoticonTopBtnClick;
- (void)selectThxEmoticonBtnClick;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleThxEmoticonTap;
- (BOOL)isDetailFromMessageScene;
- (void)emotionViewClick;
- (void)emoticonViewLongPress:(id)arg1;
- (void)saveEmoticon;
- (void)forwardEmoticon;
- (id)getLastSelectEmoticonPid;
- (void)saveLastSelectEmoticonPid:(id)arg1;
- (id)emoticonBoardView;
- (id)emoticonBoardViewTopMaskView;
- (void)handleEmoticonBoardViewMaskViewTap;
- (id)emoticonCustomAddLogic;
- (void)setEmoticonBoardHidden:(BOOL)arg1;
- (void)makeSelfieEmoitcon;
- (void)handleGetEmoticonWrap;
- (void)deleteSelctedEmoticon;
- (id)tryGettingEmojiInfoByMd5:(id)arg1 completionIfDownloaded:(id /* block */)arg2;
- (void)onSendButtonClicked;
- (BOOL)handleAddCameraEmoji;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (void)didSelectorEmoticon:(id)arg1;
- (id)GetCurrentViewController;
- (void)onEmoticonBoardHeightChanged;
- (void)onEmoticonSearchIconClicked;
- (void)onSearchEmoticonViewControllerSendEmoticon:(id)arg1;
- (void)onTakePhotoCancelled;
- (void)onAddEmoticonFinishedWithWrap:(id)arg1 isSucceeded:(BOOL)arg2;
- (void)panFronViewGestureRecognize:(id)arg1;
- (void)onWCRedEnvelopesStoryViewControllerClickCloseBtn;
- (void)onDragDownImageClick:(id)arg1;
- (void)onDragDownImageSwipe:(id)arg1;
- (void)reportMakeSameCoverBtnExpose;
- (void)onTableViewSwipeUp:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)resetAllStatus;
- (void)onWCRedEnvelopesStoryViewControlleClickWxAppInfo:(id)arg1;
- (void)onWCRedEnvelopesStoryViewControlleClickJumpAction:(id)arg1 sameReceiveLink:(id)arg2;
- (void)panGestureRecognize:(id)arg1;
- (void)onWCRedEnvelopesStoryViewControlleMaskViewDownloadOK;
- (void)onWCRedEnvelopesStoryViewControlleMaskViewDownloadFail;
- (BOOL)isNeedShowStoryGuideAnimation;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidEndScroll:(CGPoint *)arg1;
- (id)getHeaderNickNameAttributedStringWithSuffix:(id)arg1;
- (id)getRecordNickNameAttributedStringWithSuffix:(id)arg1 suffix:(id)arg2;
- (BOOL)isFinderDesignHB;
- (void)rightBarButtonPress;
- (void)onClickJumpInfo:(id)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)userDidTakeScreenshot:(id)arg1;
- (int)enWCRedEnvelopesRedEnvelopesDetailViewControllerScene;
- (BOOL)m_bEnterpriseRedEnvelopes;
- (void)setM_bEnterpriseRedEnvelopes:(BOOL)arg1;
- (unsigned int)m_uiStatFromScene;
- (void)setM_uiStatFromScene:(unsigned int)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (BOOL)isPreviewMode;
- (void)setIsPreviewMode:(BOOL)arg1;
- (BOOL)isAnimationMode;
- (void)setIsAnimationMode:(BOOL)arg1;
- (BOOL)isPanBegin;
- (void)setIsPanBegin:(BOOL)arg1;
- (id)m_globalStoryTitleView;
- (void)setM_globalStoryTitleView:(id)arg1;
- (id)globalStoryCoverView;
- (void)setGlobalStoryCoverView:(id)arg1;
- (id)jumpInfoView;
- (void)setJumpInfoView:(id)arg1;
- (id)m_globalSwipeUpView;
- (void)setM_globalSwipeUpView:(id)arg1;
- (id)m_showStoryBigBtn;
- (void)setM_showStoryBigBtn:(id)arg1;
- (id)m_helperForSenderNickName;
- (void)setM_helperForSenderNickName:(id)arg1;
- (id)m_helperForSenderNickNameAnimation;
- (void)setM_helperForSenderNickNameAnimation:(id)arg1;
- (id)m_pinImageViewAnimation;
- (void)setM_pinImageViewAnimation:(id)arg1;
- (id)m_pinImageView;
- (void)setM_pinImageView:(id)arg1;
- (void)setEmoticonView:(id)arg1;
- (void)setThxEmoticonBtn:(id)arg1;
- (id)thxEmoticonTipsBtn;
- (void)setThxEmoticonTipsBtn:(id)arg1;
- (void)setThxEmoticonView:(id)arg1;
- (void)setThxEmoticonTextView:(id)arg1;
- (void)setThxEmoticonBkgView:(id)arg1;
- (void)setSendThxEmoticonBtn:(id)arg1;
- (id)thxEmoticonWrap;
- (void)setThxEmoticonWrap:(id)arg1;
- (id)thxEmoticonText;
- (void)setThxEmoticonText:(id)arg1;
- (void)setChangeIconImgView:(id)arg1;
- (id)loadingImgView;
- (void)setLoadingImgView:(id)arg1;
- (id)loadingLabel;
- (void)setLoadingLabel:(id)arg1;
- (BOOL)bIsEmoticonBoardViewShow;
- (void)setBIsEmoticonBoardViewShow:(BOOL)arg1;
- (void)setEmoticonBoardView:(id)arg1;
- (void)setEmoticonCustomAddLogic:(id)arg1;
- (double)maskViewBottom;
- (void)setMaskViewBottom:(double)arg1;
- (void)setEmoticonBoardViewTopMaskView:(id)arg1;
- (id)sharePreConfirmView;
- (void)setSharePreConfirmView:(id)arg1;
- (id)sharePreConfirmSheetView;
- (void)setSharePreConfirmSheetView:(id)arg1;
- (id)thxEmoticonMsgWrap;
- (void)setThxEmoticonMsgWrap:(id)arg1;
- (id)bottomTailBtn;
- (void)setBottomTailBtn:(id)arg1;
- (id)topCoverImgView;
- (void)setTopCoverImgView:(id)arg1;
- (id)detailLinkBtn;
- (void)setDetailLinkBtn:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)fightingIcon;
- (void)setFightingIcon:(id)arg1;
- (id)senderEmoticonView;
- (void)setSenderEmoticonView:(id)arg1;
- (id)moneyLabel;
- (void)setMoneyLabel:(id)arg1;
- (id)feeTypeLabel;
- (void)setFeeTypeLabel:(id)arg1;
- (id)jumpBalanceBtn;
- (void)setJumpBalanceBtn:(id)arg1;
- (id)topSkinBottomImageView;
- (void)setTopSkinBottomImageView:(id)arg1;
- (id)m_headerRedSkinMaskCurveView;
- (void)setM_headerRedSkinMaskCurveView:(id)arg1;
- (id)m_globalRedSkinMaskCurveView;
- (void)setM_globalRedSkinMaskCurveView:(id)arg1;
- (id)m_redSkinStoryVC;
- (void)setM_redSkinStoryVC:(id)arg1;
- (id)m_storyDragAnimationUtil;
- (void)setM_storyDragAnimationUtil:(id)arg1;
- (double)currentTableViewOffSetY;
- (void)setCurrentTableViewOffSetY:(double)arg1;
- (BOOL)hasShowGuideAnimate;
- (void)setHasShowGuideAnimate:(BOOL)arg1;
- (BOOL)isDisappearFromStory;
- (void)setIsDisappearFromStory:(BOOL)arg1;
- (BOOL)isRefreshInAnimation;
- (void)setIsRefreshInAnimation:(BOOL)arg1;
- (id)storyMaskLoadingView;
- (void)setStoryMaskLoadingView:(id)arg1;
- (id)m_globalStoryGuideHandImageView;
- (void)setM_globalStoryGuideHandImageView:(id)arg1;
- (id)m_globalStoryGuideLabel;
- (void)setM_globalStoryGuideLabel:(id)arg1;
- (BOOL)m_isStoryShowing;
- (void)setM_isStoryShowing:(BOOL)arg1;
- (unsigned int)enterTimeStamp;
- (void)setEnterTimeStamp:(unsigned int)arg1;
- (unsigned int)exitTimeStamp;
- (void)setExitTimeStamp:(unsigned int)arg1;
- (id)exposeBtn;
- (void)setExposeBtn:(id)arg1;
- (BOOL)bHasReportExposeBtnShow;
- (void)setBHasReportExposeBtnShow:(BOOL)arg1;
- (id)emoticonBoardMask;
- (void)setEmoticonBoardMask:(id)arg1;
- (id)emoticonBoardBackground;
- (void)setEmoticonBoardBackground:(id)arg1;
- (id)finderDesignHBWarningLabel;
- (void)setFinderDesignHBWarningLabel:(id)arg1;
- (id)m_actionSheet;
- (void)setM_actionSheet:(id)arg1;
- (void).cxx_destruct;
@end

