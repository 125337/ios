@interface WCSecureCaptureSavedItem : NSObject
{
    BOOL _translatesAutoresizing; // +0x8
    UIView * _view; // +0x10
    unsigned long long _autoresizingMask; // +0x18
    CGRect _frame; // +0x20
}
- (id)view;
- (void)setView:(id)arg1;
- (unsigned long long)autoresizingMask;
- (void)setAutoresizingMask:(unsigned long long)arg1;
- (BOOL)translatesAutoresizing;
- (void)setTranslatesAutoresizing:(BOOL)arg1;
- (CGRect)frame;
- (void)setFrame:(CGRect)arg1;
- (void).cxx_destruct;
@end
