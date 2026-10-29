@interface CameraScanCombineItemFrameLogModel : NSObject
{
    int _bILbl; // +0x8
    unsigned long long _idx; // +0x10
    long long _modVer; // +0x18
    double _mvX; // +0x20
    double _mvY; // +0x28
    double _v; // +0x30
    double _vThres; // +0x38
    double _bIX1; // +0x40
    double _bIX2; // +0x48
    double _bIY1; // +0x50
    double _bIY2; // +0x58
    double _bIS; // +0x60
}
- (id)log24193StringWithItemIdx:(unsigned long long)arg1;
- (unsigned long long)idx;
- (void)setIdx:(unsigned long long)arg1;
- (long long)modVer;
- (void)setModVer:(long long)arg1;
- (double)mvX;
- (void)setMvX:(double)arg1;
- (double)mvY;
- (void)setMvY:(double)arg1;
- (double)v;
- (void)setV:(double)arg1;
- (double)vThres;
- (void)setVThres:(double)arg1;
- (double)bIX1;
- (void)setBIX1:(double)arg1;
- (double)bIX2;
- (void)setBIX2:(double)arg1;
- (double)bIY1;
- (void)setBIY1:(double)arg1;
- (double)bIY2;
- (void)setBIY2:(double)arg1;
- (double)bIS;
- (void)setBIS:(double)arg1;
- (int)bILbl;
- (void)setBILbl:(int)arg1;
@end

