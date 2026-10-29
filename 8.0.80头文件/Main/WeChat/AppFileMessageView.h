@interface AppFileMessageView : UIView
{
    int _lastProgress; // +0x8
    UIView * _contentView; // +0x10
    MMUILabel * _titleLabel; // +0x18
    UILabel * _sizeLabel; // +0x20
    UILabel * _stateLabel; // +0x28
    UIImageView * _iconView; // +0x30
    UIImageView * _thumbView; // +0x38
    AppFileCircleProgressView * _progressView; // +0x40
    UIView * _thumbBgView; // +0x48
    UIView * _thumbOverlayView; // +0x50
    NSString * _lastFileExt; // +0x58
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateDisplayWithInput:(id)arg1;
- (void)refreshStateWithInput:(id)arg1;
- (void)updateThumbImage:(id)arg1;
- (void)refreshProgressUIWithFileExt:(id)arg1 progress:(int)arg2;
- (id)fileIconForExt:(id)arg1 type:(unsigned long long)arg2;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)sizeLabel;
- (void)setSizeLabel:(id)arg1;
- (id)stateLabel;
- (void)setStateLabel:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)thumbView;
- (void)setThumbView:(id)arg1;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (id)thumbBgView;
- (void)setThumbBgView:(id)arg1;
- (id)thumbOverlayView;
- (void)setThumbOverlayView:(id)arg1;
- (id)lastFileExt;
- (void)setLastFileExt:(id)arg1;
- (int)lastProgress;
- (void)setLastProgress:(int)arg1;
- (void).cxx_destruct;
@end
