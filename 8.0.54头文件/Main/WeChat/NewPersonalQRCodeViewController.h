@interface NewPersonalQRCodeViewController : MMWindowViewController <IMMQRCodeExt, MMScrollActionSheetDelegate, EditImageForwardAndEditLogicDelegate, RecentForwardScrollViewDelegate, TipsViewDelegate, FriendAsistSessionExt>
{
    BOOL _isNotAllowAddMeByQRCode; // +0x74
    BOOL _isShowingInNewWindow; // +0x75
    BOOL _includeOldImagePageMode; // +0x76
    BOOL _needRefreshOldImage; // +0x77
    unsigned int _lastEnterTime; // +0x78
    unsigned int _pageMode; // +0x7c
    CContact * _contact; // +0x80
    NewDesignContactQRCodeInfo * _colorQrCodeInfo; // +0x88
    NewDesignContactQRCodeInfo * _whiteQrCodeInfo; // +0x90
    NewDesignContactQRCodeInfo * _blackQrCodeInfo; // +0x98
    UIImage * _qrCodeImageOld; // +0xa0
    UIView * _cardView; // +0xa8
    UIImageView * _qrCodeImageView; // +0xb0
    UIImageView * _backGroundView; // +0xb8
    MMHeadImageView * _headImageView; // +0xc0
    MMUILabel * _displayNameLabel; // +0xc8
    MMUILabel * _locationLabel; // +0xd0
    MMUILabel * _footerWordingLabel; // +0xd8
    UIView * _buttonContainerView; // +0xe0
    UIView * _qrCodeNotAllowedView; // +0xe8
    NSArray * _dominatorColors; // +0xf0
    MMScrollActionSheet * _shareActionSheet; // +0xf8
    EditImageForwardAndEditLogicController * _editImageLogicController; // +0x100
    TipsView * _abandonTipsView; // +0x108
}
- (id)initWithContact:(id)arg1;
- (void)viewDidLoad;
- (void)initData;
- (void)initView;
- (void)initQRCodeNotAllowedView;
- (void)initButtonView;
- (id)genButtonWithTitle:(id)arg1;
- (void)updateDisplayNameLabelText;
- (id)getAttributedDisplayName;
- (id)getOpenIMIconAttachmentString;
- (id)getChatRoomName;
- (id)getOpenIMIcon;
- (id)getDisplayRegion;
- (void)reloadView;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)willAppear;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (long long)overrideUserInterfaceStyle;
- (id)navigationTitleColor;
- (long long)preferredStatusBarStyle;
- (BOOL)isNormalPageMode;
- (id)codeImageForPageMode:(unsigned int)arg1;
- (id)qrCodeUrlWithStyleForPageMode:(unsigned int)arg1;
- (void)operate;
- (void)changePageMode;
- (void)revokeQRCode;
- (void)onRevokeQRCode;
- (id)getMenuItemArray;
- (void)onForward;
- (void)forwardToContact:(id)arg1;
- (void)scanQRCode;
- (void)saveImage;
- (id)getCardImage;
- (void)onShareTimeLine;
- (void)onFav;
- (BOOL)canShareQQ;
- (void)onShareQQ;
- (void)onShareQzone;
- (void)onEdit;
- (void)onShowingEditView;
- (void)onDismissEditView;
- (BOOL)shouldInteractivePop;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (void)onDownloadQRCodeFinish:(id)arg1 FooterWording:(id)arg2;
- (void)onDownloadNewDesignQRCodeFailed:(id)arg1;
- (void)onShowAbandonTip:(id)arg1 TipID:(id)arg2 Wording:(id)arg3;
- (void)setHasShowTip:(id)arg1;
- (void)showWithAnimated:(int)arg1 inWindow:(id)arg2 showEndEditing:(BOOL)arg3;
- (void)onTapBackground;
- (void)onTipsViewClick:(id)arg1;
- (void)onFriendAssistUnreadCountChanged;
- (void)updateHelloMsg;
- (void)reportQRCodePageAction:(unsigned long long)arg1;
- (void)reportQRCodePageAction:(unsigned long long)arg1 qrCodeUrlWithStyle:(id)arg2;
- (unsigned long long)getCurrentPatternIdForReport;
- (id)contact;
- (void)setContact:(id)arg1;
- (BOOL)isNotAllowAddMeByQRCode;
- (void)setIsNotAllowAddMeByQRCode:(BOOL)arg1;
- (id)colorQrCodeInfo;
- (void)setColorQrCodeInfo:(id)arg1;
- (id)whiteQrCodeInfo;
- (void)setWhiteQrCodeInfo:(id)arg1;
- (id)blackQrCodeInfo;
- (void)setBlackQrCodeInfo:(id)arg1;
- (id)qrCodeImageOld;
- (void)setQrCodeImageOld:(id)arg1;
- (id)cardView;
- (void)setCardView:(id)arg1;
- (id)qrCodeImageView;
- (void)setQrCodeImageView:(id)arg1;
- (id)backGroundView;
- (void)setBackGroundView:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)displayNameLabel;
- (void)setDisplayNameLabel:(id)arg1;
- (id)locationLabel;
- (void)setLocationLabel:(id)arg1;
- (id)footerWordingLabel;
- (void)setFooterWordingLabel:(id)arg1;
- (id)buttonContainerView;
- (void)setButtonContainerView:(id)arg1;
- (id)qrCodeNotAllowedView;
- (void)setQrCodeNotAllowedView:(id)arg1;
- (id)dominatorColors;
- (void)setDominatorColors:(id)arg1;
- (id)shareActionSheet;
- (void)setShareActionSheet:(id)arg1;
- (id)editImageLogicController;
- (void)setEditImageLogicController:(id)arg1;
- (unsigned int)lastEnterTime;
- (void)setLastEnterTime:(unsigned int)arg1;
- (BOOL)isShowingInNewWindow;
- (void)setIsShowingInNewWindow:(BOOL)arg1;
- (BOOL)includeOldImagePageMode;
- (void)setIncludeOldImagePageMode:(BOOL)arg1;
- (BOOL)needRefreshOldImage;
- (void)setNeedRefreshOldImage:(BOOL)arg1;
- (id)abandonTipsView;
- (void)setAbandonTipsView:(id)arg1;
- (unsigned int)pageMode;
- (void)setPageMode:(unsigned int)arg1;
- (void).cxx_destruct;
@end

