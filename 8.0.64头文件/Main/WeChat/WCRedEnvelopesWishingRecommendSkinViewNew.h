@interface WCRedEnvelopesWishingRecommendSkinViewNew : UIView
{
    UIView * _sepLineView; // +0x8
    NSString * _title; // +0x10
    UILabel * _titleLabel; // +0x18
    UIView * _recommendSkinView; // +0x20
    UIView * _recommendSkinView2; // +0x28
    UIImageView * _arrowImageView; // +0x30
    NSArray * _recommendSkinList; // +0x38
    id <WCRedEnvelopesWishingRecommendSkinViewNewDelegate> _delegate; // +0x40
}
- (id)initWithFrame:(CGRect)arg1 title:(id)arg2 recommendSkinList:(id)arg3;
- (void)setupViews;
- (void)layoutRecommendCoverView:(id)arg1;
- (void)onClick;
- (BOOL)isSameList:(id)arg1;
- (void)refreshWithSkinList:(id)arg1;
- (id)sepLineView;
- (void)setSepLineView:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)recommendSkinView;
- (void)setRecommendSkinView:(id)arg1;
- (id)recommendSkinView2;
- (void)setRecommendSkinView2:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)recommendSkinList;
- (void)setRecommendSkinList:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
