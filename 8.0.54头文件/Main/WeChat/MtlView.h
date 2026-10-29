@interface MtlView : UIView
{
    id <AppleViewDelegate> delegate; // +0x8
}
+ (Class)layerClass;
- (id)initWithFrame:(CGRect)arg1;
- (void)onResize:(double)arg1;
- (void)didMoveToWindow;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

