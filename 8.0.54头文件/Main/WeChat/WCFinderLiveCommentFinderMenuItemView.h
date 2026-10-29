@interface WCFinderLiveCommentFinderMenuItemView : UIView <WCFinderHeadImageViewDelegate>
{
    WCFinderContact * _contact; // +0x8
    MMLiveCommentDataItem * _commentItem; // +0x10
    WCFinderHeadImageView * _headImageView; // +0x18
    MMHeadImageView * _likeHeadImageView; // +0x20
    MMUILabel * _nameLabel; // +0x28
    UIImageView * _rightArrowImgView; // +0x30
    UIImageView * _roleImgView; // +0x38
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
- (void)setCommentItem:(id)arg1;
- (id)contact;
- (id)commentItem;
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

