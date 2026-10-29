@interface WCFinderLiveCommentFinderMenuItemView : UIView <WCFinderHeadImageViewDelegate>
{
    BOOL _hideRoleImg; // +0x8
    WCFinderContact * _contact; // +0x10
    MMLiveCommentDataItem * _commentItem; // +0x18
    WCFinderHeadImageView * _headImageView; // +0x20
    MMHeadImageView * _likeHeadImageView; // +0x28
    MMUILabel * _nameLabel; // +0x30
    UIImageView * _rightArrowImgView; // +0x38
    UIImageView * _roleImgView; // +0x40
}
+ (double)finderMenuItemMinWidth;
+ (double)finderMenuItemStandardHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutHeaderImageView;
- (void)layoutlikeHeadImageView;
- (void)layoutNameLabel;
- (void)layoutRightArrowImgView;
- (void)layoutRoleImgView;
- (void)updateNameLabelWidth;
- (void)setContact:(id)arg1;
- (void)setHideRoleImg:(BOOL)arg1;
- (void)setCommentItem:(id)arg1;
- (id)contact;
- (id)commentItem;
- (BOOL)hideRoleImg;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)likeHeadImageView;
- (void)setLikeHeadImageView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)rightArrowImgView;
- (void)setRightArrowImgView:(id)arg1;
- (id)roleImgView;
- (void)setRoleImgView:(id)arg1;
- (void).cxx_destruct;
@end
