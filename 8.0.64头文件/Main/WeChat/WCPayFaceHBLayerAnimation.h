@interface WCPayFaceHBLayerAnimation : CAAnimationGroup
{
    int _i; // +0x14
    int _mx; // +0x18
    int _my; // +0x1c
}
- (void)createBangAnimtionStart:(CGPoint)arg1 End:(CGPoint)arg2 Time:(double)arg3;
- (id)copyWithZone:(_NSZone *)arg1;
- (int)i;
- (void)setI:(int)arg1;
- (int)mx;
- (void)setMx:(int)arg1;
- (int)my;
- (void)setMy:(int)arg1;
@end
