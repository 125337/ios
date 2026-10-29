@interface WCPayTransferPhoneEntryPage : WCPayBaseViewController <ILinkEventExt>
{
    id <WCPayTransferPhoneEntryPageDelegate> _m_delegate; // +0x90
    WCPayCss * _css; // +0x98
    UIView * _containerView; // +0xa0
    UIView * _headerView; // +0xa8
    UILabel * _mainTitle; // +0xb0
    UIView * _mainTitleLine; // +0xb8
    KindaUIView * _toBankContainer; // +0xc0
    UIImageView * _toBankIcon; // +0xc8
    UIView * _toBankDescContainer; // +0xd0
    UIView * _toBankTitleContainer; // +0xd8
    UILabel * _toBankTitle; // +0xe0
    MMBadgeView * _toBankBadgeView; // +0xe8
    UILabel * _toBankDesc; // +0xf0
    UIImageView * _toBankArrow; // +0xf8
    UIView * _toBankLine; // +0x100
    KindaUIView * _toPhoneContainer; // +0x108
    UIImageView * _toPhoneIcon; // +0x110
    UIView * _toPhoneDescContainer; // +0x118
    UILabel * _toPhoneTitle; // +0x120
    UIView * _toPhoneTitleContainer; // +0x128
    MMBadgeView * _toPhoneBadgeView; // +0x130
    UILabel * _toPhoneDesc; // +0x138
    UIImageView * _toPhoneArrow; // +0x140
    UIView * _toPhoneLine; // +0x148
    UIView * _bottomContainer; // +0x150
    RichTextView * _setUpButton; // +0x158
}
- (id)init;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)setDelegate:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)updateView;
- (void)updateHeaderView;
- (void)updateMainTitle;
- (void)updateMainTitleLine;
- (void)updateToBankContainer;
- (void)updateToBankIcon;
- (void)updateToBankDescContainer;
- (void)updateToBankTitleContainer;
- (void)updateToBankTitle;
- (void)updateToBankBadge;
- (void)updateToBankDesc;
- (void)updateToBankArrow;
- (void)updateToBankLine;
- (void)updateToPhoneContainer;
- (void)updateToPhoneIcon;
- (void)updateToPhoneDescContainer;
- (void)updateToPhoneTitleContainer;
- (void)updateToPhoneBadge;
- (void)updateToPhoneTitle;
- (void)updateToPhoneDesc;
- (void)updateToPhoneArrow;
- (void)updateToPhoneLine;
- (void)updateBottomContainer;
- (void)updateSetUpButton;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onTapToBank;
- (void)onTapToPhone;
- (void)onTapSetUp;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)css;
- (void)setCss:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)mainTitle;
- (void)setMainTitle:(id)arg1;
- (id)mainTitleLine;
- (void)setMainTitleLine:(id)arg1;
- (id)toBankContainer;
- (void)setToBankContainer:(id)arg1;
- (id)toBankIcon;
- (void)setToBankIcon:(id)arg1;
- (id)toBankDescContainer;
- (void)setToBankDescContainer:(id)arg1;
- (id)toBankTitleContainer;
- (void)setToBankTitleContainer:(id)arg1;
- (id)toBankTitle;
- (void)setToBankTitle:(id)arg1;
- (id)toBankBadgeView;
- (void)setToBankBadgeView:(id)arg1;
- (id)toBankDesc;
- (void)setToBankDesc:(id)arg1;
- (id)toBankArrow;
- (void)setToBankArrow:(id)arg1;
- (id)toBankLine;
- (void)setToBankLine:(id)arg1;
- (id)toPhoneContainer;
- (void)setToPhoneContainer:(id)arg1;
- (id)toPhoneIcon;
- (void)setToPhoneIcon:(id)arg1;
- (id)toPhoneDescContainer;
- (void)setToPhoneDescContainer:(id)arg1;
- (id)toPhoneTitle;
- (void)setToPhoneTitle:(id)arg1;
- (id)toPhoneTitleContainer;
- (void)setToPhoneTitleContainer:(id)arg1;
- (id)toPhoneBadgeView;
- (void)setToPhoneBadgeView:(id)arg1;
- (id)toPhoneDesc;
- (void)setToPhoneDesc:(id)arg1;
- (id)toPhoneArrow;
- (void)setToPhoneArrow:(id)arg1;
- (id)toPhoneLine;
- (void)setToPhoneLine:(id)arg1;
- (id)bottomContainer;
- (void)setBottomContainer:(id)arg1;
- (id)setUpButton;
- (void)setSetUpButton:(id)arg1;
- (void).cxx_destruct;
@end

