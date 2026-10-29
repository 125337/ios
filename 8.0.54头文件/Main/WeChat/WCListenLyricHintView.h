@interface WCListenLyricHintView : MMUIView
{
    unsigned long long _mode; // +0x8
    MMUIActivityIndicatorView * _indicatorView; // +0x10
    MMUILabel * _textLabel; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)setMode:(unsigned long long)arg1;
- (void)setEmptyText:(id)arg1;
- (id)indicatorView;
- (id)textLabel;
- (unsigned long long)mode;
- (void)setIndicatorView:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (void).cxx_destruct;
@end

