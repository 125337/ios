@interface LOTColorInterpolator : LOTValueInterpolator
{
    id <LOTColorValueDelegate> _delegate; // +0x8
}
- (CGColor *)colorForFrame:(id)arg1;
- (void)setValueDelegate:(id)arg1;
- (BOOL)hasDelegateOverride;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
