@interface MMMusicEditorModeView : MMUIView
{
    id <MMMusicEditorModeViewDelegate> _delegate; // +0x8
    UILabel * _dotLabel; // +0x10
    UILabel * _noDotLabel; // +0x18
    unsigned long long _mode; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)internalInit;
- (void)initWithMode:(unsigned long long)arg1;
- (id)dotLabel;
- (id)noDotLabel;
- (void)layoutSubviews;
- (void)setMode:(unsigned long long)arg1;
- (void)onTap:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setDotLabel:(id)arg1;
- (void)setNoDotLabel:(id)arg1;
- (unsigned long long)mode;
- (void).cxx_destruct;
@end
