@interface WCFinderRedDotDSLClientConfig : NSObject
{
    BOOL _enableAbbreviate; // +0x8
    BOOL _ignoreDSLWidthLimit; // +0x9
    double _exceedWidth; // +0x10
}
- (BOOL)enableAbbreviate;
- (void)setEnableAbbreviate:(BOOL)arg1;
- (BOOL)ignoreDSLWidthLimit;
- (void)setIgnoreDSLWidthLimit:(BOOL)arg1;
- (double)exceedWidth;
- (void)setExceedWidth:(double)arg1;
@end
