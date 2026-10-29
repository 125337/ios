@interface MMLiveAnchorSEILiveModeInfo : NSObject
{
    unsigned int _lm; // +0x8
    unsigned int _lsm; // +0xc
}
- (unsigned int)lm;
- (void)setLm:(unsigned int)arg1;
- (unsigned int)lsm;
- (void)setLsm:(unsigned int)arg1;
@end

