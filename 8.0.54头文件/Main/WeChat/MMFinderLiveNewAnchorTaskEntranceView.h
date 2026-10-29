@interface MMFinderLiveNewAnchorTaskEntranceView : MMUIView
{
    unsigned int _scene; // +0x8
    id /* block */ _actionBlock; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    UIView * _baseView; // +0x20
    CAGradientLayer * _gradientLayer; // +0x28
    MMUIImageView * _image; // +0x30
    MMUILabel * _title; // +0x38
    MMUIView * _scrollBaseView; // +0x40
    MMRollableLabelView * _titleView; // +0x48
    CAGradientLayer * _titleGradientLayer; // +0x50
}
- (id)initWithFrame:(CGRect)arg1 scene:(unsigned int)arg2;
- (void)layoutSubviews;
- (void)setupUI;
- (void)layoutUI;
- (void)updateTitle:(id)arg1;
- (void)updateHighlighted:(BOOL)arg1;
- (void)onClickedTask;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)baseView;
- (void)setBaseView:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)scrollBaseView;
- (void)setScrollBaseView:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)titleGradientLayer;
- (void)setTitleGradientLayer:(id)arg1;
- (void).cxx_destruct;
@end

