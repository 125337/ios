@interface WCCameraBeautyViewReportObj : NSObject
{
    unsigned long long _beautyNone; // +0x8
    unsigned long long _beautyLow; // +0x10
    unsigned long long _beautyMiddle; // +0x18
    unsigned long long _beautyHigh; // +0x20
}
- (void)updateProModeViewState:(unsigned long long)arg1 withType:(unsigned long long)arg2;
- (id)genReportDictWithType:(unsigned long long)arg1;
- (unsigned long long)beautyNone;
- (void)setBeautyNone:(unsigned long long)arg1;
- (unsigned long long)beautyLow;
- (void)setBeautyLow:(unsigned long long)arg1;
- (unsigned long long)beautyMiddle;
- (void)setBeautyMiddle:(unsigned long long)arg1;
- (unsigned long long)beautyHigh;
- (void)setBeautyHigh:(unsigned long long)arg1;
@end
