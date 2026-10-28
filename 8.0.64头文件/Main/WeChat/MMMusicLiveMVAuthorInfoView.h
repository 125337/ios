@interface MMMusicLiveMVAuthorInfoView : UIView
{
    UILabel * _nickNameLabel; // +0x8
    MMWebImageView * _headImageView; // +0x10
    UIButton * _switchBtn; // +0x18
    id <MMMusicLiveMVAuthorInfoViewDelegate> _delegate; // +0x20
    UILabel * _finderHintLabel; // +0x28
    UILabel * _finderHintPreLabel; // +0x30
    UILabel * _finderHintPostLabel; // +0x38
    UIView * _headImageViewLayer; // +0x40
    UIImageView * _switchLogoImageView; // +0x48
    UILabel * _switchLabel; // +0x50
}
- (id)init;
- (void)layoutSubviews;
- (void)updateNickName:(id)arg1 avatarUrl:(id)arg2;
- (void)updateDescStr:(id)arg1;
- (void)setSwitchBtnHidden:(BOOL)arg1;
- (void)handleNicknameTap;
- (void)handleImageTap;
- (void)handleTapFinderHitLabel;
- (void)onClickSwitchBtn;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)switchBtn;
- (void)setSwitchBtn:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)finderHintLabel;
- (void)setFinderHintLabel:(id)arg1;
- (id)finderHintPreLabel;
- (void)setFinderHintPreLabel:(id)arg1;
- (id)finderHintPostLabel;
- (void)setFinderHintPostLabel:(id)arg1;
- (id)headImageViewLayer;
- (void)setHeadImageViewLayer:(id)arg1;
- (id)switchLogoImageView;
- (void)setSwitchLogoImageView:(id)arg1;
- (id)switchLabel;
- (void)setSwitchLabel:(id)arg1;
- (void).cxx_destruct;
@end
