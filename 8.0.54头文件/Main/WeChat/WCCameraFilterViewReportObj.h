@interface WCCameraFilterViewReportObj : NSObject
{
    unsigned long long _filterOriginal; // +0x8
    unsigned long long _filterNatural; // +0x10
    unsigned long long _filterWhiteSkin; // +0x18
    unsigned long long _filterVitality; // +0x20
    unsigned long long _filterMatte; // +0x28
    unsigned long long _filterClear; // +0x30
    unsigned long long _filterSunset; // +0x38
    unsigned long long _filterProfound; // +0x40
    unsigned long long _filterAutumn; // +0x48
    unsigned long long _filterDeliciousFood; // +0x50
    unsigned long long _filterBlues; // +0x58
    unsigned long long _filterMax; // +0x60
}
- (void)updateProModeViewState:(unsigned long long)arg1 withType:(unsigned long long)arg2;
- (id)genReportDictWithType:(unsigned long long)arg1;
- (unsigned long long)filterOriginal;
- (void)setFilterOriginal:(unsigned long long)arg1;
- (unsigned long long)filterNatural;
- (void)setFilterNatural:(unsigned long long)arg1;
- (unsigned long long)filterWhiteSkin;
- (void)setFilterWhiteSkin:(unsigned long long)arg1;
- (unsigned long long)filterVitality;
- (void)setFilterVitality:(unsigned long long)arg1;
- (unsigned long long)filterMatte;
- (void)setFilterMatte:(unsigned long long)arg1;
- (unsigned long long)filterClear;
- (void)setFilterClear:(unsigned long long)arg1;
- (unsigned long long)filterSunset;
- (void)setFilterSunset:(unsigned long long)arg1;
- (unsigned long long)filterProfound;
- (void)setFilterProfound:(unsigned long long)arg1;
- (unsigned long long)filterAutumn;
- (void)setFilterAutumn:(unsigned long long)arg1;
- (unsigned long long)filterDeliciousFood;
- (void)setFilterDeliciousFood:(unsigned long long)arg1;
- (unsigned long long)filterBlues;
- (void)setFilterBlues:(unsigned long long)arg1;
- (unsigned long long)filterMax;
- (void)setFilterMax:(unsigned long long)arg1;
@end

