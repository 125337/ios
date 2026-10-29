@interface MMFinderLiveConnectMicLayoutBaseModeOptionView : UIView
{
    UIImageView * _iconView; // +0x8
    UIImage * _normalIcon; // +0x10
    UIImage * _highlightedIcon; // +0x18
    UILabel * _titleLabel; // +0x20
    BOOL _highlightSelected; // +0x28
    unsigned long long _mode; // +0x30
    id /* block */ _tapBlock; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)configWithMode:(unsigned long long)arg1 title:(id)arg2 icon:(id)arg3 highlightedIcon:(id)arg4;
- (void)setHighlightSelected:(BOOL)arg1;
- (void)refreshAppearance;
- (void)layoutSubviews;
- (unsigned long long)mode;
- (void)setMode:(unsigned long long)arg1;
- (BOOL)isHighlightSelected;
- (id /* block */)tapBlock;
- (void)setTapBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
