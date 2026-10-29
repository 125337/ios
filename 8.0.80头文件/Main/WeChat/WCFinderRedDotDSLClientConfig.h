@interface WCFinderRedDotDSLClientConfig : NSObject
{
    BOOL _enableAbbreviate; // +0x8
    BOOL _ignoreDSLWidthLimit; // +0x9
    BOOL _forceSingleLine; // +0xa
    BOOL _hideAvatar; // +0xb
    double _exceedWidth; // +0x10
}
- (BOOL)enableAbbreviate;
- (void)setEnableAbbreviate:(BOOL)arg1;
- (BOOL)ignoreDSLWidthLimit;
- (void)setIgnoreDSLWidthLimit:(BOOL)arg1;
- (double)exceedWidth;
- (void)setExceedWidth:(double)arg1;
- (BOOL)forceSingleLine;
- (void)setForceSingleLine:(BOOL)arg1;
- (BOOL)hideAvatar;
- (void)setHideAvatar:(BOOL)arg1;
@end
