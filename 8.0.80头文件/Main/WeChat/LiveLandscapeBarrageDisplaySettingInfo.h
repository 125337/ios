@interface LiveLandscapeBarrageDisplaySettingInfo : NSObject <PBCoding>
{
    BOOL _enableDisplayBarrageStyle; // +0x8
    BOOL _enableDisplayBarrageStyleNew; // +0x9
    int _enableDisplayBarrageStyleTagV2; // +0xc
    double _barrageDisplayRange; // +0x10
    double _barrageDisplayAlpha; // +0x18
}
+ (void)PBArrayAdd_enableDisplayBarrageStyle;
+ (void)PBArrayAdd_barrageDisplayRange;
+ (void)PBArrayAdd_barrageDisplayAlpha;
+ (void)PBArrayAdd_enableDisplayBarrageStyleNew;
+ (void)PBArrayAdd_enableDisplayBarrageStyleTagV2;
+ (void)initialize;
- (id)getPBPropertyTable;
- (BOOL)enableDisplayBarrageStyle;
- (void)setEnableDisplayBarrageStyle:(BOOL)arg1;
- (double)barrageDisplayRange;
- (void)setBarrageDisplayRange:(double)arg1;
- (double)barrageDisplayAlpha;
- (void)setBarrageDisplayAlpha:(double)arg1;
- (BOOL)enableDisplayBarrageStyleNew;
- (void)setEnableDisplayBarrageStyleNew:(BOOL)arg1;
- (int)enableDisplayBarrageStyleTagV2;
- (void)setEnableDisplayBarrageStyleTagV2:(int)arg1;
@end
