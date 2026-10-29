@interface WCPayFacingReceiveQRCodeViewController : WCPayBaseViewController <WCPayQRCoverPageViewDelegate, WCPayWebImageViewDelegate, IdleTimerUtilExt, WCPayNoticeBannerDelegate, WCPayQrcodeUsageHalfPage, WCPaySaveQrcodeSuccessHalfPageDelegate, MMCommonActionSheetPickerDelegate, ILinkEventExt, WCActionSheetDelegate, WCPayFacingQRCodeImageViewDelegate>
{
    UIButton * m_footerButton; // +0x90
    id <WCPayFacingReceiveQRCodeViewControllerDelegate> m_delegate; // +0x98
    double _oldBrightness; // +0xa0
    UIView * m_oTotalMoneyView; // +0xa8
    NSMutableArray * m_arrPayerInfoView; // +0xb0
    NSMutableArray * m_arrAnimationedMessageStruct; // +0xb8
    RichTextView * balanceRichTextView; // +0xc0
    UIView * m_oTotalMoneyBottomLine; // +0xc8
    NSMutableArray * m_arrPayerBottomLine; // +0xd0
    BOOL bDidBePoed; // +0xd8
    BOOL qrcodeIsAnimated; // +0xd9
    UIButton * toBalanceBtn; // +0xe0
    UIColor * originalBarTintColor; // +0xe8
    double bannerHeight; // +0xf0
    BOOL _ignoreScreenShotTips; // +0xf8
    BOOL _isShowingActionSheet; // +0xf9
    BOOL _bNeedRemoveReddotFromOtherView; // +0xfa
    BOOL _bHasUsageHalfPageShown; // +0xfb
    BOOL _bIsHalfPageShown; // +0xfc
    UIImageView * _m_bizImageQRCodeView; // +0x100
    MMUIView * _m_bizHeadImageView; // +0x108
    DataMatrix * _m_bizQrMatrix; // +0x110
    QREncoder * _m_bizEncoder; // +0x118
    WCUIAlertView * _screenShotAlert; // +0x120
    WCPayBannerNotice * _m_bannerNotice; // +0x128
    UIImageView * _detailReddotImgView; // +0x130
    MMUILabel * _detailSubLabel; // +0x138
    WCPayQRCoverPageView * _coverPageView; // +0x140
    MMPanelView * _saveQRCodePanelView; // +0x148
    WCPayQrcodeUsageHalfPage * _usageHalfPage; // +0x150
    UIView * _tableHeaderView; // +0x158
    UIView * _userCodeView; // +0x160
    WCPayFacingQRCodeImageView * _userCodeContentView; // +0x168
    double _userCodeMainContentHeight; // +0x170
    UIImageView * _userCodeFoldIcon; // +0x178
    UIButton * _userCodeFoldBtn; // +0x180
    UIView * _userCodeActionBarView; // +0x188
    UIView * _userCodeContentMaskView; // +0x190
    UIView * _userCodeAnimateContentView; // +0x198
    WCPayFacingReceiveErrorTipsView * _userCodeErrorView; // +0x1a0
    WCPayFacingReceiveErrorTipsView * _mchCodeErrorView; // +0x1a8
    UIView * _bottomEntranceView; // +0x1b0
    UIButton * _bottomEntranceClickBtn; // +0x1b8
    UIView * _mchCodeView; // +0x1c0
    WCPayFacingQRCodeImageView * _mchCodeContentView; // +0x1c8
    double _mchCodeMainContentHeight; // +0x1d0
    UIView * _mchCodeApplyReddot; // +0x1d8
    UIView * _mchActionBarNew; // +0x1e0
    WCPayQRCoverPageView * _mchCoverPageView; // +0x1e8
    WCPayWebImageView * _mchHeadImgView; // +0x1f0
    UIImageView * _mchQRCodeImgView; // +0x1f8
    UIImageView * _mchCodeFoldIcon; // +0x200
    UIButton * _mchCodeFoldBtn; // +0x208
    UIView * _mchCodeActionBarView; // +0x210
    UIView * _mchCodeContentMaskView; // +0x218
    UIView * _mchCodeAnimateContentView; // +0x220
    UIView * _mchHeadImgContainerView; // +0x228
    UIView * _mchTotalMoneyView; // +0x230
    UIView * _mchTotalMoneyBottomLine; // +0x238
    NSMutableArray * _mchArrPayerInfoView; // +0x240
    NSMutableArray * _mchArrPayerBottomLine; // +0x248
    NSMutableArray * _mchArrAnimationedMessageStruct; // +0x250
    DataMatrix * _mchQrMatrix; // +0x258
    QREncoder * _mchEncoder; // +0x260
    WCPayQRCoverPageView * _mchApplyCoverPageView; // +0x268
    MMUIButton * _mchCodeNameBtn; // +0x270
    UILabel * _mchCodeNameLabel; // +0x278
    UIImageView * _tagIconImageView; // +0x280
    unsigned long long _selectedMchShopId; // +0x288
    MMCommonActionSheetPicker * _mchShopPicker; // +0x290
    long long _backEntranceValue; // +0x298
}
- (id)init;
- (void)dealloc;
- (long long)overrideUserInterfaceStyle;
- (id)navigationBarBackgroundColor;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)refreshViewWithData:(id)arg1;
- (void)initNavigationBar;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBePresented:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillPopOrDismiss:(BOOL)arg1;
- (void)reloadTableView;
- (void)checkSpeechStatus;
- (void)setupContentView;
- (void)setupUserCodeContainerView;
- (void)setupMchCodeContainerView;
- (id)setupUserCodeActionBarView;
- (void)setupUserQRCodePanelViewWithStartY:(double)arg1 hasActionBarView:(BOOL)arg2;
- (void)setupUserQRCodePanelHeaderContent:(BOOL)arg1;
- (void)setupUserQRCodeContent;
- (void)setupUserCodeTextEntryViewAndBottomView;
- (void)setupUserCodeMoneyReceiveListView;
- (void)updateUserCodeCoverPageView:(CGRect)arg1 bottomCorner:(BOOL)arg2 baseView:(id)arg3;
- (void)setupMchQRCodeApplyCell;
- (void)setupMchQRCodeContentView;
- (id)setupMchCodeActionBarView;
- (void)setupMchQRCodePanelViewWithStartY:(double)arg1;
- (void)setupMchQRCodeApplyMaskContent;
- (void)setupMchQRCodePanelHeaderContent;
- (void)setupMchQRCodeContent;
- (void)setupMchCodeTextEntryViewAndBottomView;
- (void)setupMchCodeMoneyReceiveListView;
- (void)updateMchCodeCoverPageView:(CGRect)arg1 bottomCorner:(BOOL)arg2 baseView:(id)arg3;
- (id)genUserQRCodeImageView;
- (id)genMchQRCodeImageView;
- (id)genUserCodeSetMoneyTextView:(double)arg1;
- (id)genMchCodeSetMoneyTextView:(double)arg1;
- (id)genSaveQRCodeTextView:(double)arg1;
- (id)genSettingTextView:(double)arg1;
- (id)genVertialSepLinkView;
- (id)genBizF2FHeadImageViewWithImageSize:(CGSize)arg1 delegate:(id)arg2;
- (id)genUserCodeDetailEnteranceViewWithNeedBottomCorner:(BOOL)arg1;
- (id)genMchCodeDetailEnteranceViewWithNeedBottomCorner:(BOOL)arg1;
- (id)genTopCornerShapeLayerWithBarView:(id)arg1;
- (BOOL)isShowMaskMchEntranceType;
- (void)OnLeftBarButtonDone;
- (void)onRightBarButtonClick;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onClickToReceiveDetailButton;
- (void)showActionList;
- (void)showActionSheetWithSetting:(BOOL)arg1;
- (void)showMchCodeActionSheet;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)getLocalSaveAlbumImageViewV2;
- (void)doApplyQRCodeSuccess:(id)arg1;
- (void)showWithQRActionInfo:(id)arg1 saveNotifyType:(int)arg2;
- (void)showHalfPage:(id)arg1 saveNotifyType:(int)arg2;
- (void)onHalfPageClickClose:(id)arg1;
- (void)showCoverPage:(id)arg1 saveNotifyType:(int)arg2;
- (void)showLongPressView:(id)arg1 saveNotifyType:(int)arg2;
- (void)onClickQRButtonInfo:(id)arg1 saveNotifyType:(int)arg2 actionType:(unsigned long long)arg3;
- (void)saveImageToAlbum;
- (void)clickApplyMchCodeCell;
- (void)userCodeFoldBtnClick;
- (void)mchCodeFoldBtnClick;
- (void)userChangeShowingCodeType;
- (void)updateActionBarViewState;
- (void)onMchCodeNameClicked:(id)arg1;
- (void)OnWCPayFacingQRCodeImageViewLongPress:(id)arg1;
- (void)saveQRCodeImageButtonPress;
- (void)requestApplyQrcode;
- (void)requestSaveQrcode;
- (void)doSaveQRCodeSuccess;
- (void)doSaveMchQRCodeSuccess;
- (void)saveQRCodeImageButtonPressOversea;
- (void)saveQRCodeWithReport;
- (void)RemoveMessageStructAndShowedMoney:(id)arg1;
- (void)EndReceivedMoneyAnimation:(id)arg1;
- (void)ShowReceivedMoneyAnimation:(id)arg1;
- (void)insertNewView:(id)arg1;
- (void)ShowPayerStartedPayMoneyAnimation:(id)arg1 OnlyChangedOldCell:(BOOL)arg2;
- (void)ShowMchPayerStartedPayMoneyAnimation:(id)arg1 OnlyChangedOldCell:(BOOL)arg2;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (id)getNoticeBanner;
- (void)onIdleTimerUtilVoipQuit;
- (void)userDidTakeScreenshot:(id)arg1;
- (void)showSetPushSoundResultSuccess:(BOOL)arg1 soundStatus:(BOOL)arg2;
- (void)showOpenSystemPushSoundTips;
- (void)reportApplyWithScene:(unsigned long long)arg1;
- (void)reportQrcodeSaveWithActionType:(unsigned long long)arg1 showType:(int)arg2 buttonType:(int)arg3;
- (void)reportUserAction:(int)arg1;
- (id)getDisplayNameInfo;
- (id)getDisplayTruthNameInfo;
- (id)imageFromView:(id)arg1;
- (id)headerImageWithPayIcon:(BOOL)arg1;
- (id)mchHeaderImageWithPayIcon;
- (id)mchHeaderImageWithPayIconForLocalSave;
- (int)getUserQrcodeLevel;
- (int)getMchQrcodeLevel;
- (void)reportLocation;
- (BOOL)isDomestic;
- (void)qrcodeSaveNotify:(unsigned int)arg1;
- (id)genRichTextViewLinkContent:(id)arg1 content:(id)arg2;
- (BOOL)isOverseaFacingReceive;
- (BOOL)isShowingUserFacingReceiveCode;
- (BOOL)isShowingFixMoneyFacingReceive;
- (BOOL)isUserCodeFixMoneyFacingReceive;
- (BOOL)isMchCodeFixMoneyFacingReceive;
- (id)getUserCodeUrl;
- (id)getMchCodeUrl;
- (id)getCurrentShowingQRCodeUrl;
- (id)getMchShopInfoByShopId:(unsigned long long)arg1;
- (unsigned long long)getSelectedShopId;
- (id)getTagIcon;
- (id)getMMCommonPickerViewData;
- (void)onLoadWCPayWebImageOK:(id)arg1;
- (void)onWCPayQRCoverPageView:(id)arg1 clickWithButtonInfo:(id)arg2;
- (void)overseaLongPressEvents;
- (void)overseaScreenShotEvents;
- (void)onClickUsageHalfPageCancelButton:(id)arg1;
- (void)onClickUsageHalfPageConfirmButton:(id)arg1;
- (void)onClickSaveQrcodeSuccessCancelButton:(id)arg1;
- (void)onClickSaveQrcodeSuccessConfirmButton:(id)arg1;
- (void)showShortTermQrCodeLoadingView:(long long)arg1 withForceLoading:(BOOL)arg2;
- (void)showShortTermQrCodeErrorView:(long long)arg1 withErrorMsg:(id)arg2;
- (void)hideShortTermQrCodeView:(long long)arg1;
- (long long)getErrorViewState:(long long)arg1;
- (BOOL)hasMchQrcode;
- (void)refreshBottomEntrance;
- (void)ClickBottomEntrance;
- (void)commonPickerCancel:(id)arg1;
- (void)commonPickerConfirm:(id)arg1 selectedRows:(id)arg2;
- (void)clearFixedQRCodeDesc;
- (BOOL)didSelectedMchShopIdInResponseList;
- (void)setSelectedMchShopId:(unsigned long long)arg1;
- (BOOL)ignoreScreenShotTips;
- (void)setIgnoreScreenShotTips:(BOOL)arg1;
- (BOOL)isShowingActionSheet;
- (void)setIsShowingActionSheet:(BOOL)arg1;
- (id)m_bizImageQRCodeView;
- (void)setM_bizImageQRCodeView:(id)arg1;
- (id)m_bizHeadImageView;
- (void)setM_bizHeadImageView:(id)arg1;
- (id)m_bizQrMatrix;
- (void)setM_bizQrMatrix:(id)arg1;
- (id)m_bizEncoder;
- (void)setM_bizEncoder:(id)arg1;
- (id)screenShotAlert;
- (void)setScreenShotAlert:(id)arg1;
- (id)m_bannerNotice;
- (void)setM_bannerNotice:(id)arg1;
- (id)detailReddotImgView;
- (void)setDetailReddotImgView:(id)arg1;
- (id)detailSubLabel;
- (void)setDetailSubLabel:(id)arg1;
- (BOOL)bNeedRemoveReddotFromOtherView;
- (void)setBNeedRemoveReddotFromOtherView:(BOOL)arg1;
- (id)coverPageView;
- (void)setCoverPageView:(id)arg1;
- (id)saveQRCodePanelView;
- (void)setSaveQRCodePanelView:(id)arg1;
- (id)usageHalfPage;
- (void)setUsageHalfPage:(id)arg1;
- (BOOL)bHasUsageHalfPageShown;
- (void)setBHasUsageHalfPageShown:(BOOL)arg1;
- (BOOL)bIsHalfPageShown;
- (void)setBIsHalfPageShown:(BOOL)arg1;
- (id)tableHeaderView;
- (void)setTableHeaderView:(id)arg1;
- (id)userCodeView;
- (void)setUserCodeView:(id)arg1;
- (id)userCodeContentView;
- (void)setUserCodeContentView:(id)arg1;
- (double)userCodeMainContentHeight;
- (void)setUserCodeMainContentHeight:(double)arg1;
- (id)userCodeFoldIcon;
- (void)setUserCodeFoldIcon:(id)arg1;
- (id)userCodeFoldBtn;
- (void)setUserCodeFoldBtn:(id)arg1;
- (id)userCodeActionBarView;
- (void)setUserCodeActionBarView:(id)arg1;
- (id)userCodeContentMaskView;
- (void)setUserCodeContentMaskView:(id)arg1;
- (id)userCodeAnimateContentView;
- (void)setUserCodeAnimateContentView:(id)arg1;
- (id)userCodeErrorView;
- (void)setUserCodeErrorView:(id)arg1;
- (id)mchCodeErrorView;
- (void)setMchCodeErrorView:(id)arg1;
- (id)bottomEntranceView;
- (void)setBottomEntranceView:(id)arg1;
- (id)bottomEntranceClickBtn;
- (void)setBottomEntranceClickBtn:(id)arg1;
- (id)mchCodeView;
- (void)setMchCodeView:(id)arg1;
- (id)mchCodeContentView;
- (void)setMchCodeContentView:(id)arg1;
- (double)mchCodeMainContentHeight;
- (void)setMchCodeMainContentHeight:(double)arg1;
- (id)mchCodeApplyReddot;
- (void)setMchCodeApplyReddot:(id)arg1;
- (id)mchActionBarNew;
- (void)setMchActionBarNew:(id)arg1;
- (id)mchCoverPageView;
- (void)setMchCoverPageView:(id)arg1;
- (id)mchHeadImgView;
- (void)setMchHeadImgView:(id)arg1;
- (id)mchQRCodeImgView;
- (void)setMchQRCodeImgView:(id)arg1;
- (id)mchCodeFoldIcon;
- (void)setMchCodeFoldIcon:(id)arg1;
- (id)mchCodeFoldBtn;
- (void)setMchCodeFoldBtn:(id)arg1;
- (id)mchCodeActionBarView;
- (void)setMchCodeActionBarView:(id)arg1;
- (id)mchCodeContentMaskView;
- (void)setMchCodeContentMaskView:(id)arg1;
- (id)mchCodeAnimateContentView;
- (void)setMchCodeAnimateContentView:(id)arg1;
- (id)mchHeadImgContainerView;
- (void)setMchHeadImgContainerView:(id)arg1;
- (id)mchTotalMoneyView;
- (void)setMchTotalMoneyView:(id)arg1;
- (id)mchTotalMoneyBottomLine;
- (void)setMchTotalMoneyBottomLine:(id)arg1;
- (id)mchArrPayerInfoView;
- (void)setMchArrPayerInfoView:(id)arg1;
- (id)mchArrPayerBottomLine;
- (void)setMchArrPayerBottomLine:(id)arg1;
- (id)mchArrAnimationedMessageStruct;
- (void)setMchArrAnimationedMessageStruct:(id)arg1;
- (id)mchQrMatrix;
- (void)setMchQrMatrix:(id)arg1;
- (id)mchEncoder;
- (void)setMchEncoder:(id)arg1;
- (id)mchApplyCoverPageView;
- (void)setMchApplyCoverPageView:(id)arg1;
- (id)mchCodeNameBtn;
- (void)setMchCodeNameBtn:(id)arg1;
- (id)mchCodeNameLabel;
- (void)setMchCodeNameLabel:(id)arg1;
- (id)tagIconImageView;
- (void)setTagIconImageView:(id)arg1;
- (unsigned long long)selectedMchShopId;
- (id)mchShopPicker;
- (void)setMchShopPicker:(id)arg1;
- (long long)backEntranceValue;
- (void)setBackEntranceValue:(long long)arg1;
- (void).cxx_destruct;
@end

