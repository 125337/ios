@interface BTLiveSectionBarHeaderView : UIView
{
    MMUILabel * _titleLabel; // +0x8
    UIImageView * _arrowIcon; // +0x10
    UIView * _arrowContainerView; // +0x18
    UIImageView * _liveImageView; // +0x20
    MMUILabel * _brandCountLabel; // +0x28
}
- (id)init;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)transToExpandState;
- (void)transToFoldState:(long long)arg1;
- (id)accessibilityLabel;
- (CGRect)accessibilityFrame;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)arrowIcon;
- (void)setArrowIcon:(id)arg1;
- (id)arrowContainerView;
- (void)setArrowContainerView:(id)arg1;
- (id)liveImageView;
- (void)setLiveImageView:(id)arg1;
- (id)brandCountLabel;
- (void)setBrandCountLabel:(id)arg1;
- (void).cxx_destruct;
@end

