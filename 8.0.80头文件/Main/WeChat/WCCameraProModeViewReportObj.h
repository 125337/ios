@interface WCCameraProModeViewReportObj : NSObject
{
    unsigned long long _beautyState; // +0x8
    WCCameraBeautyViewReportObj * _beautySubReportObj; // +0x10
    unsigned long long _filterState; // +0x18
    WCCameraFilterViewReportObj * _filterSubReportObj; // +0x20
    unsigned long long _gridState; // +0x28
    unsigned long long _timeState; // +0x30
    unsigned long long _aspectRatioState; // +0x38
}
+ (unsigned long long)optionWithEventID:(id)arg1;
- (void)updateProModeViewState:(unsigned long long)arg1 withType:(unsigned long long)arg2;
- (void)updateProModeViewState:(unsigned long long)arg1 withType:(unsigned long long)arg2 subType:(unsigned long long)arg3;
- (id)beautySubReportObj;
- (id)filterSubReportObj;
- (id)genReportStrWithType:(unsigned long long)arg1;
- (unsigned long long)beautyState;
- (void)setBeautyState:(unsigned long long)arg1;
- (void)setBeautySubReportObj:(id)arg1;
- (unsigned long long)filterState;
- (void)setFilterState:(unsigned long long)arg1;
- (void)setFilterSubReportObj:(id)arg1;
- (unsigned long long)gridState;
- (void)setGridState:(unsigned long long)arg1;
- (unsigned long long)timeState;
- (void)setTimeState:(unsigned long long)arg1;
- (unsigned long long)aspectRatioState;
- (void)setAspectRatioState:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
