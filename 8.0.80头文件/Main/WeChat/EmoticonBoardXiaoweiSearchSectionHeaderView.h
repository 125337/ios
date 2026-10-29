@interface EmoticonBoardXiaoweiSearchSectionHeaderView : UICollectionReusableView
{
    BOOL _showMore; // +0x8
    id /* block */ _moreTapBlock; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _moreLabel; // +0x20
    UIImageView * _arrowImageView; // +0x28
    UIButton * _moreTapButton; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateWithTitle:(id)arg1 showMore:(BOOL)arg2;
- (void)onTapMoreButton;
- (id /* block */)moreTapBlock;
- (void)setMoreTapBlock:(id /* block */)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)moreLabel;
- (void)setMoreLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)moreTapButton;
- (void)setMoreTapButton:(id)arg1;
- (BOOL)showMore;
- (void)setShowMore:(BOOL)arg1;
- (void).cxx_destruct;
@end
