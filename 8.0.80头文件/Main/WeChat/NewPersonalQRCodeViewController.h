@interface NewPersonalQRCodeViewController : MMWindowViewController <IMMQRCodeExt, MMScrollActionSheetDelegate, EditImageForwardAndEditLogicDelegate, RecentForwardScrollViewDelegate, TipsViewDelegate, FriendAsistSessionExt>
{
    BOOL _isNotAllowAddMeByQRCode; // +0x7c
    BOOL _forbidRightBarButton; // +0x7d
    BOOL _isShowingInNewWindow; // +0x7e
    BOOL _includeOldImagePageMode; // +0x7f
    BOOL _needRefreshOldImage; // +0x80
    unsigned int _lastEnterTime; // +0x84
    unsigned int _pageMode; // +0x88
    id <NewPersonalQRCodeViewDelegate> _delegate; // +0x90
    CContact * _contact; // +0x98
    NewDesignContactQRCodeInfo * _colorQrCodeInfo; // +0xa0
    NewDesignContactQRCodeInfo * _whiteQrCodeInfo; // +0xa8
    NewDesignContactQRCodeInfo * _greenQrCodeInfo; // +0xb0
    NewDesignContactQRCodeInfo * _gradientColorQrCodeInfo; // +0xb8
    NewDesignContactQRCodeInfo * _blackQrCodeInfo; // +0xc0
    UIImage * _qrCodeImageOld; // +0xc8
    UIView * _cardView; // +0xd0
    UIImageView * _qrCodeImageView; // +0xd8
    UIImageView * _backGroundView; // +0xe0
    MMHeadImageView * _headImageView; // +0xe8
    MMUILabel * _displayNameLabel; // +0xf0
    MMUILabel * _locationLabel; // +0xf8
    MMUILabel * _footerWordingLabel; // +0x100
    UIView * _buttonContainerView; // +0x108
    UIView * _qrCodeNotAllowedView; // +0x110
    NSArray * _dominatorColors; // +0x118
    MMScrollActionSheet * _shareActionSheet; // +0x120
    EditImageForwardAndEditLogicController * _editImageLogicController; // +0x128
    unsigned long long _sessionId; // +0x130
    TipsView * _abandonTipsView; // +0x138
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
- (void)reloadView:(unsigned long long)arg1;
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
- (void)onDownloadQRCodeFinish:(id)arg1 FooterWording:(id)arg2 qrcodeStatus:(unsigned int)arg3;
- (void)onDownloadNewDesignQRCodeFailed:(id)arg1;
- (void)onShowAbandonTip:(id)arg1 TipID:(id)arg2 Wording:(id)arg3;
- (void)setHasShowTip:(id)arg1;
- (void)showWithAnimated:(int)arg1 inWindow:(id)arg2 showEndEditing:(BOOL)arg3;
- (void)onTapBackground;
- (void)onTipsViewClick:(id)arg1;
- (void)onFriendAssistUnreadCountChanged;
- (void)updateHelloMsg;
- (void)reportQRCodePageAction:(unsigned long long)arg1;
- (void)reportQRCodePageAction:(unsigned long long)arg1 qrCodeUrlWithStyle:(id)arg2 showReason:(unsigned long long)arg3;
- (unsigned int)getQRCodeShowActionFromReason:(unsigned long long)arg1;
- (unsigned long long)getCurrentPatternIdForReport;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (BOOL)isNotAllowAddMeByQRCode;
- (void)setIsNotAllowAddMeByQRCode:(BOOL)arg1;
- (BOOL)forbidRightBarButton;
- (void)setForbidRightBarButton:(BOOL)arg1;
- (id)colorQrCodeInfo;
- (void)setColorQrCodeInfo:(id)arg1;
- (id)whiteQrCodeInfo;
- (void)setWhiteQrCodeInfo:(id)arg1;
- (id)greenQrCodeInfo;
- (void)setGreenQrCodeInfo:(id)arg1;
- (id)gradientColorQrCodeInfo;
- (void)setGradientColorQrCodeInfo:(id)arg1;
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
- (unsigned long long)sessionId;
- (void)setSessionId:(unsigned long long)arg1;
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
