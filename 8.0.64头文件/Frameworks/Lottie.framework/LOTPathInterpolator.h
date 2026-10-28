@interface LOTPathInterpolator : LOTValueInterpolator
{
    id <LOTPathValueDelegate> _delegate; // +0x8
}
- (id)pathForFrame:(id)arg1 cacheLengths:(BOOL)arg2;
- (void)setValueDelegate:(id)arg1;
- (BOOL)hasDelegateOverride;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
