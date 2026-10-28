@interface WCFinderTransitionDismissHook : NSObject
{
    id /* block */ _willDismiss; // +0x8
    id /* block */ _endDismiss; // +0x10
}
- (id /* block */)willDismiss;
- (void)setWillDismiss:(id /* block */)arg1;
- (id /* block */)endDismiss;
- (void)setEndDismiss:(id /* block */)arg1;
- (void).cxx_destruct;
@end
