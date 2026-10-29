@interface CameraQRCodeMyQRCodeModuleView : UIView
{
    BOOL _addNewFriendAvatarAnimating; // +0x8
    BOOL _isNotAllowAddMeByQRCode; // +0x9
    BOOL _addNewFriendViewHasShown; // +0xa
    BOOL _addNewFriendCellSticky; // +0xb
    BOOL _m_bIsShowScanQRCode; // +0xc
    unsigned int _pageMode; // +0x10
    id <CameraQRCodeMyQRCodeModuleViewDelegate> _delegate; // +0x18
    long long _addNewFriendCount; // +0x20
    CContact * _m_selfContact; // +0x28
    MMUIView * _cardView; // +0x30
    MMHeadImageView * _headImageView; // +0x38
    MMUILabel * _nameLabel; // +0x40
    MMUILabel * _locationLabel; // +0x48
    UIImageView * _qrCodeImageView; // +0x50
    MMUILabel * _footerWordingLabel; // +0x58
    UIView * _buttonContainerView; // +0x60
    MMUIView * _qrCodeNotAllowedView; // +0x68
    MMUIActivityIndicatorView * _loadingView; // +0x70
    MMUILabel * _qrCodeNotAllowedViewTitleLabel; // +0x78
    MMUILabel * _qrCodeNotAllowedViewDetailLabel; // +0x80
    MMUIView * _qrCodeEmptyView; // +0x88
    MMUIImageView * _qrCodeEmptyIconView; // +0x90
    MMUILabel * _qrCodeEmptyViewTitleLabel; // +0x98
    MMUIButton * _qrCodeEmptyViewRefreshButton; // +0xa0
    UIView * _addNewFriendSeparatorLine; // +0xa8
    UIView * _addNewFriendContainerView; // +0xb0
    MMUILabel * _addNewFriendLabel; // +0xb8
    UIView * _addNewFriendBadgeView; // +0xc0
    MMUILabel * _addNewFriendBadgeCountLabel; // +0xc8
    UIView * _addNewFriendAvatarListView; // +0xd0
    UIImageView * _addNewFriendArrowImageView; // +0xd8
    NSArray * _addNewFriendContacts; // +0xe0
    NewDesignContactQRCodeInfo * _colorQrCodeInfo; // +0xe8
    NewDesignContactQRCodeInfo * _whiteQrCodeInfo; // +0xf0
    NewDesignContactQRCodeInfo * _blackQrCodeInfo; // +0xf8
    NewDesignContactQRCodeInfo * _greenQrCodeInfo; // +0x100
    NewDesignContactQRCodeInfo * _gradientColorQrCodeInfo; // +0x108
    unsigned long long _sessionId; // +0x110
}
- (id)initWithFrame:(CGRect)arg1 isShowScanQRCode:(BOOL)arg2;
- (void)intData;
- (void)intView;
- (void)initButtonView;
- (void)initQRCodeNotAllowedView;
- (void)resetLoadingView;
- (void)initQRCodeEmptyView;
- (void)initNewFriendView;
- (void)layoutSubviews;
- (void)handleNotAllowAddMeByQRCodeLayout;
- (void)handleUnusualLayout;
- (void)updateQRCodeImage;
- (void)handleDownloadQRCodeFinish:(BOOL)arg1;
- (void)resetQrCodeInfo;
- (id)codeImageForPageMode:(unsigned int)arg1;
- (id)currentQRCodeUrl;
- (id)getDisplayRegion;
- (id)genButtonWithTitle:(id)arg1;
- (double)expandedCellHeightWithContainerWidth:(double)arg1;
- (BOOL)checkIsHadQRCodeImage;
- (void)layoutNewFriendView;
- (BOOL)updateNewFriendCount:(long long)arg1 contacts:(id)arg2;
- (void)updateNewFriendAvatarListWithContacts:(id)arg1;
- (void)animateAvatarListUpdateWithContacts:(id)arg1 previousAvatarCount:(long long)arg2;
- (void)animateNewFriendContainerAppear;
- (void)showAddNewFriendContainer;
- (void)markNewFriendViewReady;
- (void)onTapNewFriend;
- (void)changePageMode;
- (void)saveImage;
- (id)getCardImage;
- (void)onClickRefreshButton;
- (void)scanQRCode;
- (unsigned long long)getCurrentPatternIdForReport;
- (unsigned int)getQRCodeShowActionFromReason:(unsigned int)arg1;
- (void)reportQRCodePageAction:(unsigned int)arg1;
- (void)reportQRCodePageAction:(unsigned int)arg1 qrCodeUrlWithStyle:(id)arg2;
- (void)reportQRCodePageAction:(unsigned int)arg1 qrCodeUrlWithStyle:(id)arg2 showReason:(unsigned int)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)addNewFriendAvatarAnimating;
- (void)setAddNewFriendAvatarAnimating:(BOOL)arg1;
- (long long)addNewFriendCount;
- (void)setAddNewFriendCount:(long long)arg1;
- (id)m_selfContact;
- (void)setM_selfContact:(id)arg1;
- (id)cardView;
- (void)setCardView:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)locationLabel;
- (void)setLocationLabel:(id)arg1;
- (id)qrCodeImageView;
- (void)setQrCodeImageView:(id)arg1;
- (id)footerWordingLabel;
- (void)setFooterWordingLabel:(id)arg1;
- (id)buttonContainerView;
- (void)setButtonContainerView:(id)arg1;
- (BOOL)isNotAllowAddMeByQRCode;
- (void)setIsNotAllowAddMeByQRCode:(BOOL)arg1;
- (id)qrCodeNotAllowedView;
- (void)setQrCodeNotAllowedView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)qrCodeNotAllowedViewTitleLabel;
- (void)setQrCodeNotAllowedViewTitleLabel:(id)arg1;
- (id)qrCodeNotAllowedViewDetailLabel;
- (void)setQrCodeNotAllowedViewDetailLabel:(id)arg1;
- (id)qrCodeEmptyView;
- (void)setQrCodeEmptyView:(id)arg1;
- (id)qrCodeEmptyIconView;
- (void)setQrCodeEmptyIconView:(id)arg1;
- (id)qrCodeEmptyViewTitleLabel;
- (void)setQrCodeEmptyViewTitleLabel:(id)arg1;
- (id)qrCodeEmptyViewRefreshButton;
- (void)setQrCodeEmptyViewRefreshButton:(id)arg1;
- (id)addNewFriendSeparatorLine;
- (void)setAddNewFriendSeparatorLine:(id)arg1;
- (id)addNewFriendContainerView;
- (void)setAddNewFriendContainerView:(id)arg1;
- (id)addNewFriendLabel;
- (void)setAddNewFriendLabel:(id)arg1;
- (id)addNewFriendBadgeView;
- (void)setAddNewFriendBadgeView:(id)arg1;
- (id)addNewFriendBadgeCountLabel;
- (void)setAddNewFriendBadgeCountLabel:(id)arg1;
- (id)addNewFriendAvatarListView;
- (void)setAddNewFriendAvatarListView:(id)arg1;
- (id)addNewFriendArrowImageView;
- (void)setAddNewFriendArrowImageView:(id)arg1;
- (id)addNewFriendContacts;
- (void)setAddNewFriendContacts:(id)arg1;
- (BOOL)addNewFriendViewHasShown;
- (void)setAddNewFriendViewHasShown:(BOOL)arg1;
- (BOOL)addNewFriendCellSticky;
- (void)setAddNewFriendCellSticky:(BOOL)arg1;
- (id)colorQrCodeInfo;
- (void)setColorQrCodeInfo:(id)arg1;
- (id)whiteQrCodeInfo;
- (void)setWhiteQrCodeInfo:(id)arg1;
- (id)blackQrCodeInfo;
- (void)setBlackQrCodeInfo:(id)arg1;
- (id)greenQrCodeInfo;
- (void)setGreenQrCodeInfo:(id)arg1;
- (id)gradientColorQrCodeInfo;
- (void)setGradientColorQrCodeInfo:(id)arg1;
- (unsigned int)pageMode;
- (void)setPageMode:(unsigned int)arg1;
- (unsigned long long)sessionId;
- (void)setSessionId:(unsigned long long)arg1;
- (BOOL)m_bIsShowScanQRCode;
- (void)setM_bIsShowScanQRCode:(BOOL)arg1;
- (void).cxx_destruct;
@end
