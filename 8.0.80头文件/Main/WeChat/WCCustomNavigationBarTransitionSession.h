@interface WCCustomNavigationBarTransitionSession : NSObject
{
    BOOL _fromHidden; // +0x8
    BOOL _toHidden; // +0x9
    BOOL _fromBackgroundHidden; // +0xa
    BOOL _toBackgroundHidden; // +0xb
    unsigned long long _generation; // +0x10
    UIViewController * _fromViewController; // +0x18
    UIViewController * _toViewController; // +0x20
    UINavigationItem * _fromItem; // +0x28
    UINavigationItem * _toItem; // +0x30
    double _fromBarAlpha; // +0x38
    double _toBarAlpha; // +0x40
}
- (unsigned long long)generation;
- (void)setGeneration:(unsigned long long)arg1;
- (id)fromViewController;
- (void)setFromViewController:(id)arg1;
- (id)toViewController;
- (void)setToViewController:(id)arg1;
- (id)fromItem;
- (void)setFromItem:(id)arg1;
- (id)toItem;
- (void)setToItem:(id)arg1;
- (BOOL)fromHidden;
- (void)setFromHidden:(BOOL)arg1;
- (BOOL)toHidden;
- (void)setToHidden:(BOOL)arg1;
- (double)fromBarAlpha;
- (void)setFromBarAlpha:(double)arg1;
- (double)toBarAlpha;
- (void)setToBarAlpha:(double)arg1;
- (BOOL)fromBackgroundHidden;
- (void)setFromBackgroundHidden:(BOOL)arg1;
- (BOOL)toBackgroundHidden;
- (void)setToBackgroundHidden:(BOOL)arg1;
- (void).cxx_destruct;
@end
