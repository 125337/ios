@interface FinderLiveServiceNotifyMessageCellView : BaseMessageCellView <ServiceAuthExt>
{
    FinderLiveMessageCellMainContentView * _mainContentView; // +0x28
    MMWebImageView * _avatarImageView; // +0x30
    UILabel * _nickNameLabel; // +0x38
    MMWebImageView * _authIconImageView; // +0x40
    UIView * _titleLineView; // +0x48
    UILabel * _titleLabel; // +0x50
    UIView * _onPressedView; // +0x58
}
- (id)serviceNotifyMessageViewModel;
- (void)layoutContentView;
- (void)recreateContentViews;
- (void)onTouchDown;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)onTouchUpInside;
- (void)showWCCoinView;
- (id)itemLabelWithTitle:(id)arg1 width:(double)arg2 font:(id)arg3;
- (id)itemValueLabelWithTitle:(id)arg1 width:(double)arg2 font:(id)arg3;
- (id)itemValueLabelWithTitle:(id)arg1 width:(double)arg2 font:(id)arg3 maxLine:(unsigned long long)arg4;
- (id)genDisplayViewWithItemInfo:(id)arg1 longestKeyLabelWidth:(double)arg2 maxDisplayViewWidth:(double)arg3;
- (id)genAvatarImageView;
- (id)genAuthIconImageView;
- (id)genTitleLabel;
- (id)genLineView;
- (id)genNickNameLabel;
- (void)onOpenService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (id)mainContentView;
- (void)setMainContentView:(id)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)authIconImageView;
- (void)setAuthIconImageView:(id)arg1;
- (id)titleLineView;
- (void)setTitleLineView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)onPressedView;
- (void)setOnPressedView:(id)arg1;
- (void).cxx_destruct;
@end
