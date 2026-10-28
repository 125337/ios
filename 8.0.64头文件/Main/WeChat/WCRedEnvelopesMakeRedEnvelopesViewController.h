@interface WCRedEnvelopesMakeRedEnvelopesViewController : WCRedEnvelopesBaseViewController <WCPayWebImageViewDelegate, WCPayNoticeBannerDelegate, UITableViewDelegate, WCActionSheetDelegate, UITextFieldDelegate, EmoticonBoardViewDelegate, BaseEmoticonViewDelegate, EmoticonCustomAddLogicControllerDelegate, WCRedEnvelopesSpringFestivalActivtyEntryViewDelegate, WCPayDecimalKeyboardViewDelegate, PAGViewListener, EmoticonSearchViewControllerDelegate, WCPayWebPagViewDelegate, WCRedEnvelopesWishingRecommendSkinViewNewDelegate, UITextViewDelegate, ILinkEventExt, MMTableViewInfoDelegate>
{
    id <WCRedEnvelopesMakeRedEnvelopesViewControllerDelegate> m_delegate; // +0x90
    int m_enMakeRedEnvelopesScene; // +0x98
    WCUITextField * m_oSelectCountTextField; // +0xa0
    unsigned int m_uiSelectCount; // +0xa8
    UILabel * moneyLabel; // +0xb0
    UILabel * nsDefaultWishingLabel; // +0xb8
    WCUITextField * m_oMoneyTextField; // +0xc0
    MMTextView * m_textView; // +0xc8
    UIButton * normalRedEnvelopesButton; // +0xd0
    WCBaseKeyboardToolBar * m_keyboardBar; // +0xd8
    BOOL m_bDidBack; // +0xe0
    BOOL m_bCanHandleScrollViewDidChangedEvent; // +0xe1
    BOOL m_bNomalMoney; // +0xe2
    RichTextView * richTextView; // +0xe8
    UIView * m_oErrorView; // +0xf0
    UILabel * m_oErrorLabel; // +0xf8
    BOOL m_bError; // +0x100
    BOOL m_bWaitFiveMintes; // +0x101
    UIView * oCountSelectView; // +0x108
    UIView * oSimpleMoneyView; // +0x110
    UIView * oRedEnvelopeSkinSelectView; // +0x118
    WCRedEnvelopesSpringFestivalActivtyEntryView * oSpringFestivalActivityView; // +0x120
    long long m_inputErrorType; // +0x128
    NSString * m_foreignHongbaoName; // +0x130
    MMBadgeView * selectSkinBadgeView; // +0x138
    BOOL _needRecoverRecommendView; // +0x140
    BOOL _m_leftBarButtonClose; // +0x141
    BOOL _bIsEmoticonBoardViewShow; // +0x142
    BOOL _hasUseDefaultMode; // +0x143
    BOOL _hasManaulChangeDefaultMode; // +0x144
    BOOL _m_isRedEnvelopesButtonEnabled; // +0x145
    BOOL _exclusiveBottomTipsHasShown; // +0x146
    BOOL _isReddotExposureHasCount; // +0x147
    BOOL _isNeedRefreshMakeVC; // +0x148
    BOOL _isShowingRecommendSkin; // +0x149
    BOOL _isCleaningRecommendSkinAnimate; // +0x14a
    unsigned int _groupMemCount; // +0x14c
    WCPayNoticeItemView * _banner; // +0x150
    WCRedEnvelopesMakeRedEnvelopesViewLayout * _m_layout; // +0x158
    UILabel * _m_unitLabel; // +0x160
    MMUIButton * _addEmoticonBtn; // +0x168
    MMEmoticonView * _emoticonView; // +0x170
    EmoticonBoardView * _emoticonBoardView; // +0x178
    EmoticonCustomAddLogicController * _emoticonCustomAddLogic; // +0x180
    CEmoticonWrap * _emoticonWrap; // +0x188
    long long _currentMode; // +0x190
    UIView * _exclusiveHbSelectView; // +0x198
    SequenceAnimationObject * _animationObject; // +0x1a0
    WCPayDecimalKeyboardView * _moneyKeyboard; // +0x1a8
    WCPayDecimalKeyboardView * _selectCountKeyboard; // +0x1b0
    UILabel * _moneyTextFiledLeftLabel; // +0x1b8
    WCPayWebImageView * _corpLogo; // +0x1c0
    WCPayWebPagView * _corpPagView; // +0x1c8
    WCRedEnvelopesSelectSkinRedDotInfo * _selectSkinPlazaNewRedDotInfo; // +0x1d0
    UIView * _redDotInfoView; // +0x1d8
    WCRedEnvelopesRedSkinIndicatorView * _redSkinIndicatorView; // +0x1e0
    UILabel * _redDotWordingLabel; // +0x1e8
    WCPayWebImageView * _redDotIconView; // +0x1f0
    WCRedEnvelopesSkinPreviewView * _chooseSkinPreviewView; // +0x1f8
    UIImageView * _chooseSkinArrowView; // +0x200
    MMUILabel * _chooseSkinTitleLabel; // +0x208
    NSArray * _recommendSkinList; // +0x210
    NSString * _requestWishing; // +0x218
    double _chooseRedSkinViewGrowHeight; // +0x220
    WCRedEnvelopesWishingRecommendSkinViewNew * _wishingRecommendSkinView; // +0x228
    UIView * _oWishingView; // +0x230
    UIImageView * _m_bgMaskImageView; // +0x238
    UIButton * _tailInfoButton; // +0x240
    NSMutableDictionary * _wishingTextRecommendStatusDict; // +0x248
    GetRecommendedCoverResponse * _recommendedCoverResponse; // +0x250
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
- (void)viewDidAppear:(BOOL)arg1;
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
- (id)getCoverInfoDetailForPlaceOrder;
- (double)setupChooseSkinCellWithHeaderViewNew:(id)arg1 nextViewY:(double)arg2;
- (double)setupChooseSkinCellWithHeaderView:(id)arg1 nextViewY:(double)arg2;
- (void)onLoadWCPayWebPagOK:(id)arg1;
- (void)onAnimationEnd:(id)arg1;
- (id)keyboardHostViewController;
- (void)keyboardViewConfirmBtnClick:(id)arg1;
- (double)setupExclusiveSelectContentViewWithHeaderView:(id)arg1 nextViewY:(double)arg2;
- (BOOL)shouldShowForeignHongBaoName;
- (void)updateBizAuthTitleWithFlag:(unsigned int)arg1;
- (id)getShortChatRoomDisplayName:(id)arg1;
- (void)hideRedDotInfoView;
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
- (void)triggerRecommendSkinCgi:(id)arg1;
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
- (id)getSkinPlazaReddotInfo;
- (BOOL)hasChoseNonDefaultRedSkin;
- (void)showWishingRecommendSkin:(id)arg1 withWishingText:(id)arg2 requestTimestamp:(unsigned long long)arg3;
- (void)showWishingRecommendSkinList:(BOOL)arg1;
- (void)cleanWishingRecommendSkin;
- (BOOL)isRecommendSkinSwitchOn;
- (double)getRecommendSkinCgiInterval;
- (id)getCoverInfoDetail;
- (id)getRedPacketCoverInfoDetailForPlaceOrder;
- (BOOL)isWidgetSkin;
- (id)currentSkinImageThumbImageUrl;
- (void)onWCRedEnvelopesWishingRecommendSkinViewClickLeftArea:(id)arg1;
- (void)onWCRedEnvelopesWishingRecommendSkinViewClickRightArea:(id)arg1;
- (void)onClickWCRedEnvelopesWishingRecommendSkinView:(id)arg1;
- (BOOL)isCurrentWishingTextHasRecommendedCovers;
- (double)getChooseSkinCellHeight;
- (double)cellGap;
- (id)getClickedCoverID;
- (int)m_enMakeRedEnvelopesScene;
- (BOOL)needRecoverRecommendView;
- (void)setNeedRecoverRecommendView:(BOOL)arg1;
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
- (id)redSkinIndicatorView;
- (void)setRedSkinIndicatorView:(id)arg1;
- (id)redDotWordingLabel;
- (void)setRedDotWordingLabel:(id)arg1;
- (id)redDotIconView;
- (void)setRedDotIconView:(id)arg1;
- (BOOL)isReddotExposureHasCount;
- (void)setIsReddotExposureHasCount:(BOOL)arg1;
- (id)chooseSkinPreviewView;
- (void)setChooseSkinPreviewView:(id)arg1;
- (BOOL)isNeedRefreshMakeVC;
- (void)setIsNeedRefreshMakeVC:(BOOL)arg1;
- (id)chooseSkinArrowView;
- (void)setChooseSkinArrowView:(id)arg1;
- (id)chooseSkinTitleLabel;
- (void)setChooseSkinTitleLabel:(id)arg1;
- (id)recommendSkinList;
- (void)setRecommendSkinList:(id)arg1;
- (id)requestWishing;
- (void)setRequestWishing:(id)arg1;
- (BOOL)isShowingRecommendSkin;
- (void)setIsShowingRecommendSkin:(BOOL)arg1;
- (BOOL)isCleaningRecommendSkinAnimate;
- (void)setIsCleaningRecommendSkinAnimate:(BOOL)arg1;
- (double)chooseRedSkinViewGrowHeight;
- (void)setChooseRedSkinViewGrowHeight:(double)arg1;
- (id)wishingRecommendSkinView;
- (void)setWishingRecommendSkinView:(id)arg1;
- (id)oWishingView;
- (void)setOWishingView:(id)arg1;
- (id)m_bgMaskImageView;
- (void)setM_bgMaskImageView:(id)arg1;
- (id)tailInfoButton;
- (void)setTailInfoButton:(id)arg1;
- (id)wishingTextRecommendStatusDict;
- (void)setWishingTextRecommendStatusDict:(id)arg1;
- (id)recommendedCoverResponse;
- (void)setRecommendedCoverResponse:(id)arg1;
- (void).cxx_destruct;
@end
