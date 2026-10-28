@interface MMWebMProfileTitleView : MMUIView
{
    id <MMWebMProfileTitleViewDelegate> _delegate; // +0x8
    MMUILabel * _titleView; // +0x10
    UIImageView * _arrowImageView; // +0x18
    UIImageView * _liveImageView; // +0x20
    UIButton * _titleButton; // +0x28
}
- (id)init;
- (void)initView;
- (void)updateTitle:(id)arg1;
- (void)updateLiveStatus:(BOOL)arg1;
- (void)resetUIStatus;
- (void)layoutSubviews;
- (void)onTitleViewClicked:(id)arg1;
- (double)titleLabelHorizonalOffset;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)liveImageView;
- (void)setLiveImageView:(id)arg1;
- (id)titleButton;
- (void)setTitleButton:(id)arg1;
- (void).cxx_destruct;
@end
