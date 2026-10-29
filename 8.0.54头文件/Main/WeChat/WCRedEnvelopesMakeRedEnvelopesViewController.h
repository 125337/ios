@interface WCRedEnvelopesMakeRedEnvelopesViewController : WCRedEnvelopesBaseViewController <WCPayWebImageViewDelegate, WCPayNoticeBannerDelegate, UITableViewDelegate, WCActionSheetDelegate, UITextFieldDelegate, EmoticonBoardViewDelegate, BaseEmoticonViewDelegate, EmoticonCustomAddLogicControllerDelegate, WCRedEnvelopesSpringFestivalActivtyEntryViewDelegate, WCPayDecimalKeyboardViewDelegate, PAGViewListener, EmoticonSearchViewControllerDelegate, WCPayWebPagViewDelegate, UITextViewDelegate, ILinkEventExt, MMTableViewInfoDelegate>
{
    id <WCRedEnvelopesMakeRedEnvelopesViewControllerDelegate> m_delegate; // +0x88
    int m_enMakeRedEnvelopesScene; // +0x90
    WCUITextField * m_oSelectCountTextField; // +0x98
    unsigned int m_uiSelectCount; // +0xa0
    UILabel * moneyLabel; // +0xa8
    UILabel * nsDefaultWishingLabel; // +0xb0
    WCUITextField * m_oMoneyTextField; // +0xb8
    MMTextView * m_textView; // +0xc0
    UIButton * normalRedEnvelopesButton; // +0xc8
    WCBaseKeyboardToolBar * m_keyboardBar; // +0xd0
    BOOL m_bDidBack; // +0xd8
    BOOL m_bCanHandleScrollViewDidChangedEvent; // +0xd9
    BOOL m_bNomalMoney; // +0xda
    RichTextView * richTextView; // +0xe0
    UIView * m_oErrorView; // +0xe8
    UILabel * m_oErrorLabel; // +0xf0
    BOOL m_bError; // +0xf8
    BOOL m_bWaitFiveMintes; // +0xf9
    UIView * oCountSelectView; // +0x100
    UIView * oSimpleMoneyView; // +0x108
    UIView * oRedEnvelopeSkinSelectView; // +0x110
    WCRedEnvelopesSpringFestivalActivtyEntryView * oSpringFestivalActivityView; // +0x118
    long long m_inputErrorType; // +0x120
    NSString * m_foreignHongbaoName; // +0x128
    MMBadgeView * selectSkinBadgeView; // +0x130
    BOOL _m_leftBarButtonClose; // +0x138
    BOOL _bIsEmoticonBoardViewShow; // +0x139
    BOOL _hasUseDefaultMode; // +0x13a
    BOOL _hasManaulChangeDefaultMode; // +0x13b
    BOOL _m_isRedEnvelopesButtonEnabled; // +0x13c
    BOOL _exclusiveBottomTipsHasShown; // +0x13d
    BOOL _isReddotExposureHasCount; // +0x13e
    unsigned int _groupMemCount; // +0x140
    WCPayNoticeItemView * _banner; // +0x148
    WCRedEnvelopesMakeRedEnvelopesViewLayout * _m_layout; // +0x150
    UILabel * _m_unitLabel; // +0x158
    MMUIButton * _addEmoticonBtn; // +0x160
    MMEmoticonView * _emoticonView; // +0x168
    EmoticonBoardView * _emoticonBoardView; // +0x170
    EmoticonCustomAddLogicController * _emoticonCustomAddLogic; // +0x178
    CEmoticonWrap * _emoticonWrap; // +0x180
    long long _currentMode; // +0x188
    UIView * _exclusiveHbSelectView; // +0x190
    SequenceAnimationObject * _animationObject; // +0x198
    WCPayDecimalKeyboardView * _moneyKeyboard; // +0x1a0
    WCPayDecimalKeyboardView * _selectCountKeyboard; // +0x1a8
    UILabel * _moneyTextFiledLeftLabel; // +0x1b0
    WCPayWebImageView * _corpLogo; // +0x1b8
    WCPayWebPagView * _corpPagView; // +0x1c0
    WCRedEnvelopesSelectSkinRedDotInfo * _selectSkinPlazaNewRedDotInfo; // +0x1c8
    UIView * _redDotInfoView; // +0x1d0
    UILabel * _redDotWordingLabel; // +0x1d8
    WCPayWebImageView * _redDotIconView; // +0x1e0
}
- (void)initNavigationBar;
- (void)updateNavigationBackgroundWithFlag:(unsigned int)arg1;
- (void)onViewHBHistory;
- (void)OnLeftBarButtonDone;
- (void)OnRightBarButtonClick;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)OnViewHongBaoFaq;
- (void)back;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (long long)setupCurrentMode;
- (void)initData;
- (void)reloadContentView;
- (double)setupCountSelectContentViewWithHeaderView:(id)arg1 nextViewY:(double)arg2;
- (double)setupMoneyInputContentViewWithHeaderView:(id)arg1 nextViewY:(double)arg2;
- (id)selectSkinPlazaNewRedDotInfo;
- (void)saveSelectSkinEntryRedDotInfo;
- (BOOL)shouldShowSelectSkinEntryPlazaNewRedDot;
- (BOOL)shouldShowNewSelectSkinEntryRedDot;
- (unsigned int)reportRedDotType;
- (id)reportRedDotText;
- (id)reportSkinId;
- (double)setupChooseSkinCellWithHeaderView:(id)arg1 nextViewY:(double)arg2;
- (void)onLoadWCPayWebPagOK:(id)arg1;
- (void)onAnimationEnd:(id)arg1;
- (id)keyboardHostViewController;
- (void)keyboardViewConfirmBtnClick:(id)arg1;
- (double)setupExclusiveSelectContentViewWithHeaderView:(id)arg1 nextViewY:(double)arg2;
- (BOOL)shouldShowForeignHongBaoName;
- (void)updateBizAuthTitleWithFlag:(unsigned int)arg1;
- (id)getShortChatRoomDisplayName:(id)arg1;
- (void)onSelectSkinCellClick;
- (void)refreshViewWithData:(id)arg1;
- (void)initErrorView;
- (id)animationObject;
- (void)showErrorView:(id)arg1 ErrorType:(long long)arg2;
- (void)hideErrorView;
- (void)hideErrorViewWithAnimation;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)reportExposure;
- (unsigned int)getCurrentReportHBMode;
- (unsigned int)getCurrentReportTargetType;
- (void)reportClickLuckyWord;
- (void)reportClickAddEmotionIcon;
- (void)reportClickRedEnvelopesSkin;
- (void)reportClickSendHb;
- (void)reportClickHbMode;
- (void)reportHbModeSelectMode:(id)arg1;
- (void)reportHbModeSelectRandomLuckyMode;
- (void)reportHbModeSelectNormalMode;
- (void)reportHbModeSelectExclusiveMode;
- (void)reportClickHbRecordPage;
- (void)viewDidLoad;
- (unsigned int)keyboardReportRedEnvMode;
- (void)checkNextButtonStatus;
- (id)checkDataError;
- (void)adjustMoneyLabel;
- (void)OnMakeWCRedEnvelopesButtonClick;
- (void)setDelegate:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidEndOnExit:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidChanged:(id)arg1;
- (void)resetToCanHandleScrollViewChangedEnvent;
- (BOOL)textViewShouldBeginEditing:(id)arg1;
- (BOOL)textViewShouldEndEditing:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)SetLeftBarButtonClose;
- (void)SetErrorTips;
- (void)setM_enMakeRedEnvelopesScene:(int)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)OnClickTailActivity;
- (void)setButtonWaitFiveMin;
- (void)refreshButtonFiveMintes;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (void)handleTap:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)hidekeyboard;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (unsigned int)totalNum;
- (long long)perGroupMaxValue;
- (long long)perPersonMaxValue;
- (long long)perMinValue;
- (long long)totalAmount;
- (BOOL)enableMakeSelfie;
- (id)getLastSelectEmoticonPid;
- (void)saveLastSelectEmoticonPid:(id)arg1;
- (void)onAddEmoticonBtnClick;
- (void)tapEmoticonView:(id)arg1;
- (void)handleEmoticonDelete;
- (void)handleGetEmoticonWrap;
- (id)emoticonView;
- (id)emoticonBoardView;
- (id)emoticonCustomAddLogic;
- (void)setEmoticonBoardHidden:(BOOL)arg1;
- (void)makeSelfieEmoitcon;
- (void)onSendButtonClicked;
- (BOOL)handleAddCameraEmoji;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (id)GetCurrentViewController;
- (BOOL)boardViewShouldReloadForReuse;
- (void)onEmoticonBoardHeightChanged;
- (void)onEmoticonSearchIconClicked;
- (void)onSearchEmoticonViewControllerSendEmoticon:(id)arg1;
- (void)onTakePhotoCancelled;
- (void)onAddEmoticonFinishedWithWrap:(id)arg1 isSucceeded:(BOOL)arg2;
- (BOOL)isOnlySignleRedEnvelopsScene;
- (BOOL)isMultiRedEnvelopesScene;
- (BOOL)shouldRevertCellOrder;
- (BOOL)isNormalLuckyMoneyMode;
- (BOOL)isRandomLuckyMoneyMode;
- (BOOL)isExclusiveHbMode;
- (id)getCurrentMoneyModeTitle;
- (id)setupModeChangeButton;
- (void)modeChangeButtonClick;
- (void)refreshModeWithButtonTitle:(id)arg1;
- (void)reportModeChange;
- (id)setupExclusiveHbSelectViewWithFrame:(CGRect)arg1;
- (void)selectMemberViewClick;
- (void)onClickSpringFestivalActivtyEntryView:(id)arg1;
- (BOOL)useBlackStatusbar;
- (id)resizeImage:(id)arg1 toFill:(id)arg2;
- (BOOL)isUsingNewSkin;
- (void)onLoadWCPayWebImageOK:(id)arg1;
- (void)onLoadWCPayWebImageFail:(id)arg1;
- (int)m_enMakeRedEnvelopesScene;
- (id)banner;
- (void)setBanner:(id)arg1;
- (id)m_layout;
- (void)setM_layout:(id)arg1;
- (id)m_unitLabel;
- (void)setM_unitLabel:(id)arg1;
- (BOOL)m_leftBarButtonClose;
- (void)setM_leftBarButtonClose:(BOOL)arg1;
- (id)addEmoticonBtn;
- (void)setAddEmoticonBtn:(id)arg1;
- (void)setEmoticonView:(id)arg1;
- (void)setEmoticonBoardView:(id)arg1;
- (void)setEmoticonCustomAddLogic:(id)arg1;
- (id)emoticonWrap;
- (void)setEmoticonWrap:(id)arg1;
- (BOOL)bIsEmoticonBoardViewShow;
- (void)setBIsEmoticonBoardViewShow:(BOOL)arg1;
- (long long)currentMode;
- (void)setCurrentMode:(long long)arg1;
- (id)exclusiveHbSelectView;
- (void)setExclusiveHbSelectView:(id)arg1;
- (BOOL)hasUseDefaultMode;
- (void)setHasUseDefaultMode:(BOOL)arg1;
- (BOOL)hasManaulChangeDefaultMode;
- (void)setHasManaulChangeDefaultMode:(BOOL)arg1;
- (void)setAnimationObject:(id)arg1;
- (BOOL)m_isRedEnvelopesButtonEnabled;
- (void)setM_isRedEnvelopesButtonEnabled:(BOOL)arg1;
- (id)moneyKeyboard;
- (void)setMoneyKeyboard:(id)arg1;
- (id)selectCountKeyboard;
- (void)setSelectCountKeyboard:(id)arg1;
- (id)moneyTextFiledLeftLabel;
- (void)setMoneyTextFiledLeftLabel:(id)arg1;
- (unsigned int)groupMemCount;
- (void)setGroupMemCount:(unsigned int)arg1;
- (id)corpLogo;
- (void)setCorpLogo:(id)arg1;
- (BOOL)exclusiveBottomTipsHasShown;
- (void)setExclusiveBottomTipsHasShown:(BOOL)arg1;
- (id)corpPagView;
- (void)setCorpPagView:(id)arg1;
- (void)setSelectSkinPlazaNewRedDotInfo:(id)arg1;
- (id)redDotInfoView;
- (void)setRedDotInfoView:(id)arg1;
- (id)redDotWordingLabel;
- (void)setRedDotWordingLabel:(id)arg1;
- (id)redDotIconView;
- (void)setRedDotIconView:(id)arg1;
- (BOOL)isReddotExposureHasCount;
- (void)setIsReddotExposureHasCount:(BOOL)arg1;
- (void).cxx_destruct;
@end

