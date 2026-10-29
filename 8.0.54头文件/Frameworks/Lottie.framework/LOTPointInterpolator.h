@interface LOTPointInterpolator : LOTValueInterpolator
{
    id <LOTPointValueDelegate> _delegate; // +0x8
}
- (CGPoint)pointValueForFrame:(id)arg1;
- (BOOL)hasDelegateOverride;
- (void)setValueDelegate:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

