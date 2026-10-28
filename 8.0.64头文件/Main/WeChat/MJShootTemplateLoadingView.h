@interface MJShootTemplateLoadingView : UIView
{
    NSString * _bindTemplateID; // +0x8
    UIView * _progressBGView; // +0x10
    MJCircleProgressView * _progressView; // +0x18
    UILabel * _titleLabel; // +0x20
    UIView * _containerView; // +0x28
}
+ (id)titleLabelFont;
- (id)initWithTemplateID:(id)arg1;
- (void)commonInit;
- (void)setupViews;
- (void)layoutViews;
- (void)startLoading;
- (void)updateProgress:(double)arg1;
- (id)bindTemplateID;
- (id)progressBGView;
- (void)setProgressBGView:(id)arg1;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (void).cxx_destruct;
@end
