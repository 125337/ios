@interface MMScopeUserInfoTableViewCell : MMMultiMenuTableViewCell
{
    BOOL _isSelect; // +0x40
    BOOL _isBottom; // +0x41
    OauthAvatarInfo * _avatarInfo; // +0x48
    MMWebImageView * _avatarImageView; // +0x50
    MMUILabel * _nickNameLabel; // +0x58
    MMUILabel * _descLabel; // +0x60
    UIImageView * _selectImageView; // +0x68
    CALayer * _topSeparateLine; // +0x70
    CALayer * _bottomSeparateLine; // +0x78
}
+ (double)viewHeight;
- (void)updateView;
- (void)layoutSubviews;
- (id)avatarInfo;
- (void)setAvatarInfo:(id)arg1;
- (BOOL)isSelect;
- (void)setIsSelect:(BOOL)arg1;
- (BOOL)isBottom;
- (void)setIsBottom:(BOOL)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)selectImageView;
- (void)setSelectImageView:(id)arg1;
- (id)topSeparateLine;
- (void)setTopSeparateLine:(id)arg1;
- (id)bottomSeparateLine;
- (void)setBottomSeparateLine:(id)arg1;
- (void).cxx_destruct;
@end
