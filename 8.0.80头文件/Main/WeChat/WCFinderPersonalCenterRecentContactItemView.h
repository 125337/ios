@interface WCFinderPersonalCenterRecentContactItemView : UIView
{
    WCFinderPersonalCenterOftenContact * _item; // +0x8
    WCFinderContact * _contact; // +0x10
    WCFinderHeadImageView * _headImageView; // +0x18
    UILabel * _nicknameLabel; // +0x20
    WCFinderAuthInfoIconView * _authIconView; // +0x28
    UIView * _greenDotBG; // +0x30
    UIView * _greenDot; // +0x38
    id <WCFinderPersonalCenterRecentContactItemDelegate> _delegate; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)_setupHeadView;
- (void)_setupNickname;
- (void)_setupAuthIcon;
- (void)_setupGreenDot;
- (void)layoutSubviews;
- (void)setContact:(id)arg1;
- (void)setItem:(id)arg1;
- (void)reload;
- (void)onLongPress:(id)arg1;
- (void)onClickDelete;
- (void)onTap:(id)arg1;
- (id)item;
- (id)contact;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg1;
- (id)authIconView;
- (void)setAuthIconView:(id)arg1;
- (id)greenDotBG;
- (void)setGreenDotBG:(id)arg1;
- (id)greenDot;
- (void)setGreenDot:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
