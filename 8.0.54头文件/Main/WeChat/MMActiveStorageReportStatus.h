@interface MMActiveStorageReportStatus : NSObject <PBCoding>
{
    unsigned int _lastReportTime; // +0x8
    unsigned int _beforeCheckTime; // +0xc
    unsigned int _endCheckTime; // +0x10
    MMActiveStorageStatInfo * _allStatInfo; // +0x18
    MMActiveStorageStatInfo * _activeStatInfo; // +0x20
    NSMutableArray * _finishUserName; // +0x28
}
+ (void)PBArrayAdd_lastReportTime;
+ (void)PBArrayAdd_beforeCheckTime;
+ (void)PBArrayAdd_endCheckTime;
+ (void)PBArrayAdd_allStatInfo;
+ (void)PBArrayAdd_activeStatInfo;
+ (void)PBArrayAdd_finishUserName;
+ (void)initialize;
+ (id)loadStausDataFromFile;
- (id)getPBPropertyTable;
- (id)init;
- (BOOL)saveStatusDataToFile;
- (id)description;
- (unsigned int)lastReportTime;
- (void)setLastReportTime:(unsigned int)arg1;
- (unsigned int)beforeCheckTime;
- (void)setBeforeCheckTime:(unsigned int)arg1;
- (unsigned int)endCheckTime;
- (void)setEndCheckTime:(unsigned int)arg1;
- (id)allStatInfo;
- (void)setAllStatInfo:(id)arg1;
- (id)activeStatInfo;
- (void)setActiveStatInfo:(id)arg1;
- (id)finishUserName;
- (void)setFinishUserName:(id)arg1;
- (void).cxx_destruct;
@end

