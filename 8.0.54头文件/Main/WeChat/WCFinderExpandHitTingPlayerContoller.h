@interface WCFinderExpandHitTingPlayerContoller : TingSharePlayButton
{
    CGRect _expandHitRect; // +0x8
}
- (id)initWithFrame:(CGRect)arg1 style:(unsigned long long)arg2;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (CGRect)expandHitRect;
- (void)setExpandHitRect:(CGRect)arg1;
@end

