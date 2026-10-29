@interface WCFinderVideoPropertyModel : NSObject
{
    WCFinderVideoBasisModel * _basisModel; // +0x8
    unsigned long long _colorIndex; // +0x10
    unsigned long long _lensCount; // +0x18
}
- (id)basisModel;
- (void)setBasisModel:(id)arg1;
- (unsigned long long)colorIndex;
- (void)setColorIndex:(unsigned long long)arg1;
- (unsigned long long)lensCount;
- (void)setLensCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

