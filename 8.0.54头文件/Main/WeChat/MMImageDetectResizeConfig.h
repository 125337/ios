@interface MMImageDetectResizeConfig : NSObject
{
    unsigned int _preferSize; // +0x8
    unsigned int _ratioLimit; // +0xc
    unsigned int _memAreaLimit; // +0x10
}
- (unsigned int)preferSize;
- (void)setPreferSize:(unsigned int)arg1;
- (unsigned int)ratioLimit;
- (void)setRatioLimit:(unsigned int)arg1;
- (unsigned int)memAreaLimit;
- (void)setMemAreaLimit:(unsigned int)arg1;
@end

