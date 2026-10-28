@interface MMFinderLiveNewAnchorTaskEntranceView : MMUIView
{
    unsigned int _scene; // +0x8
    id /* block */ _actionBlock; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    MMRollableLabelViewConfig * _config; // +0x20
    UIView * _baseView; // +0x28
    CAGradientLayer * _gradientLayer; // +0x30
    MMRollableLabelView * _titleView; // +0x38
}
- (id)initWithFrame:(CGRect)arg1 scene:(unsigned int)arg2;
- (void)layoutSubviews;
- (void)setupUI;
- (void)layoutUI;
- (void)willShow;
- (void)didDisappear;
- (void)restartAnimation;
- (void)updateTitle:(id)arg1;
- (void)updateConfig;
- (void)updateHighlighted:(BOOL)arg1;
- (double)getHorizontalPadding;
- (double)getMaxLabelWidth;
- (void)onClickedTask;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)baseView;
- (void)setBaseView:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (void).cxx_destruct;
@end
