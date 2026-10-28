@interface WCFinderMSPostHeader : UITableViewHeaderFooterView
{
    id <WCFinderMSPostHeaderDelegate> _delegate; // +0x8
    WCFinderHeadImageView * _avatarView; // +0x10
    UILabel * _nickNameLabel; // +0x18
    UIView * _inputBackgroundView; // +0x20
    UILabel * _inputHintLabel; // +0x28
}
+ (double)headerHeight;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)setupSubviews;
- (void)setupLayout;
- (void)onClickInputView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)avatarView;
- (void)setAvatarView:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)inputBackgroundView;
- (void)setInputBackgroundView:(id)arg1;
- (id)inputHintLabel;
- (void)setInputHintLabel:(id)arg1;
- (void).cxx_destruct;
@end
