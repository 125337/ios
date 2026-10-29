@interface MMFinderLiveGenericLongPressEducationView : UIView
{
    id /* block */ _actionBlock; // +0x8
    unsigned long long _viewType; // +0x10
    PAGView * _animationView; // +0x18
    UILabel * _tipsLabel; // +0x20
}
- (id)initWithFrame:(CGRect)arg1 viewType:(unsigned long long)arg2;
- (void)dealloc;
- (void)layoutSubviews;
- (void)show;
- (void)hide;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)getTipsLabelText;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;
- (unsigned long long)viewType;
- (void)setViewType:(unsigned long long)arg1;
- (id)animationView;
- (void)setAnimationView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end

