@interface BrandMsgValidExposeConfig : NSObject
{
    unsigned int _validExposureAreaRatioInPct; // +0x8
    unsigned int _validExposurePeriodInMs; // +0xc
}
- (id)description;
- (unsigned int)validExposureAreaRatioInPct;
- (void)setValidExposureAreaRatioInPct:(unsigned int)arg1;
- (unsigned int)validExposurePeriodInMs;
- (void)setValidExposurePeriodInMs:(unsigned int)arg1;
@end

