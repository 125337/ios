@interface BrandProfileRecoomendFollowCollectionCell : UICollectionViewCell
{
    MMBrandHeadImageView * _avatarView; // +0x8
    UIView * _nickNameContentView; // +0x10
    UILabel * _nickNameLabel; // +0x18
    UILabel * _descLabel; // +0x20
    MMUIImageView * _certTagView; // +0x28
    UIView * _highlightedView; // +0x30
}
+ (double)cellHeight;
- (void)updateWithItem:(id)arg1;
- (void)layoutSubviews;
- (id)avatarView;
- (id)nickNameLabel;
- (id)certTagView;
- (id)nickNameContentView;
- (id)descLabel;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)setAvatarView:(id)arg1;
- (void)setNickNameContentView:(id)arg1;
- (void)setNickNameLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setCertTagView:(id)arg1;
- (id)highlightedView;
- (void)setHighlightedView:(id)arg1;
- (void).cxx_destruct;
@end

