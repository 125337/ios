@interface CalendarStatisticsArgs : MMObject <PBCoding>
{
    BOOL isEnterFinderWithRedDot; // +0x8
    unsigned int _dropRedDotCount; // +0xc
    unsigned int _deepReadCount; // +0x10
    unsigned int _lastEnterFinderTimeSec; // +0x14
    unsigned int _lastExitFinderTimeSec; // +0x18
    unsigned int _lastFinderVvCount; // +0x1c
    CalendarInfo * _discoverInfo; // +0x20
    CalendarInfo * _finderInfo; // +0x28
    CalendarInfo * _liveInfo; // +0x30
    NSMutableArray * _finderExposeTimeArray; // +0x38
    NSMutableArray * _liveExposeTimeArray; // +0x40
}
+ (void)PBArrayAdd_discoverInfo;
+ (void)PBArrayAdd_finderInfo;
+ (void)PBArrayAdd_liveInfo;
+ (void)PBArrayAdd_finderExposeTimeArray;
+ (void)PBArrayAdd_liveExposeTimeArray;
+ (void)PBArrayAdd_dropRedDotCount;
+ (void)PBArrayAdd_deepReadCount;
+ (void)PBArrayAdd_lastEnterFinderTimeSec;
+ (void)PBArrayAdd_lastExitFinderTimeSec;
+ (void)PBArrayAdd_lastFinderVvCount;
+ (void)initialize;
+ (id)loadFromMMKV;
- (id)getPBPropertyTable;
- (id)init;
- (void)save;
- (void)checkToNoteFinderEnterTime:(unsigned int)arg1 andExitTime:(unsigned int)arg2;
- (void)enterFindFriendEntryController:(id)arg1 andStayTimeMs:(unsigned long long)arg2;
- (void)quitFindFriendEntryController:(id)arg1 andNext:(id)arg2 andStayTimeMs:(unsigned long long)arg3;
- (id)discoverInfo;
- (id)finderInfo;
- (id)liveInfo;
- (unsigned int)genDayStr:(unsigned long long)arg1;
- (void)setDiscoverInfo:(id)arg1;
- (void)setFinderInfo:(id)arg1;
- (void)setLiveInfo:(id)arg1;
- (id)finderExposeTimeArray;
- (void)setFinderExposeTimeArray:(id)arg1;
- (id)liveExposeTimeArray;
- (void)setLiveExposeTimeArray:(id)arg1;
- (unsigned int)dropRedDotCount;
- (void)setDropRedDotCount:(unsigned int)arg1;
- (unsigned int)deepReadCount;
- (void)setDeepReadCount:(unsigned int)arg1;
- (unsigned int)lastEnterFinderTimeSec;
- (void)setLastEnterFinderTimeSec:(unsigned int)arg1;
- (unsigned int)lastExitFinderTimeSec;
- (void)setLastExitFinderTimeSec:(unsigned int)arg1;
- (unsigned int)lastFinderVvCount;
- (void)setLastFinderVvCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end

