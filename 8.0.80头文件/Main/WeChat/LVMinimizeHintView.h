@interface LVMinimizeHintView : UIView
{
    BOOL _loading; // +0x8
    unsigned long long _type; // +0x10
    UIImageView * _iconView; // +0x18
    UILabel * _textLabel; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)_setupUI;
- (void)layoutSubviews;
- (void)updateDisplay:(unsigned long long)arg1 isLandscape:(BOOL)arg2;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (BOOL)loading;
- (void)setLoading:(BOOL)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (void).cxx_destruct;
@end
