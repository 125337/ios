@interface NewLifeCardPostStateView : UIView
{
    long long _state; // +0x8
    double _progress; // +0x10
    SightIconView * _loadingView; // +0x18
    MMUILabel * _loadingLabel; // +0x20
    MMUIButton * _repostButton; // +0x28
    id /* block */ _repostAction; // +0x30
}
+ (double)fixedHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setFrame:(CGRect)arg1;
- (void)setState:(long long)arg1;
- (void)setProgress:(double)arg1;
- (id)loadingView;
- (id)loadingLabel;
- (id)repostButton;
- (void)onTapRepostButton;
- (long long)state;
- (double)progress;
- (void)setLoadingView:(id)arg1;
- (void)setLoadingLabel:(id)arg1;
- (void)setRepostButton:(id)arg1;
- (id /* block */)repostAction;
- (void)setRepostAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end

