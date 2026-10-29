@interface BrandDigestExposeInfo : NSObject
{
    unsigned int _exposeCnt; // +0x8
    unsigned int _totalTime; // +0xc
    unsigned int _minPos; // +0x10
}
- (unsigned int)exposeCnt;
- (void)setExposeCnt:(unsigned int)arg1;
- (unsigned int)totalTime;
- (void)setTotalTime:(unsigned int)arg1;
- (unsigned int)minPos;
- (void)setMinPos:(unsigned int)arg1;
@end

