@interface GCTouchAndHideShadowView : UIControl
{
    id /* block */ _onCloseBlock; // +0x8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)removeSelf;
- (id /* block */)onCloseBlock;
- (void)setOnCloseBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

