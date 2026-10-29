@interface MMTerminatorView : MMUIView
{
    MMTerminatorViewParams * _params; // +0x8
    id <MMTerminatorViewDelegate> _delegate; // +0x10
    UIView * _leftLineView; // +0x18
    UIView * _rightLineView; // +0x20
    MMUIButton * _iconImageView; // +0x28
    InteractionLabel * _titleLabel; // +0x30
    InteractionLabel * _subtitleLabel; // +0x38
    CGSize _lastSize; // +0x40
}
+ (double)maxContentWidthWithTotalWidth:(double)arg1;
+ (double)heightForParams:(id)arg1 width:(double)arg2;
- (id)initWithFrame:(CGRect)arg1 params:(id)arg2;
- (void)initView;
- (void)initLineView;
- (id)createLineView;
- (void)initContentView;
- (void)layoutSubviews;
- (void)updateSubContentSize;
- (double)contentHeight;
- (void)onClickIconImageView;
- (void)onClickTitleLabel;
- (void)onClickSubtitleLabel;
- (id)params;
- (void)setParams:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)leftLineView;
- (void)setLeftLineView:(id)arg1;
- (id)rightLineView;
- (void)setRightLineView:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (CGSize)lastSize;
- (void)setLastSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
