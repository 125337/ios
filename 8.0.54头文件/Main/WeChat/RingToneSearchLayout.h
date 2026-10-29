@interface RingToneSearchLayout : WCFinderStreamLayout
{
    RingToneVideoSearchViewController * _currentVC; // +0x8
    unsigned long long _autoPlaySection; // +0x10
    double _barHeight; // +0x18
}
- (double)scrollForDirection:(unsigned long long)arg1 section:(long long)arg2 needPadding:(BOOL)arg3;
- (CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2;
- (id)currentVC;
- (void)setCurrentVC:(id)arg1;
- (unsigned long long)autoPlaySection;
- (void)setAutoPlaySection:(unsigned long long)arg1;
- (double)barHeight;
- (void)setBarHeight:(double)arg1;
- (void).cxx_destruct;
@end

