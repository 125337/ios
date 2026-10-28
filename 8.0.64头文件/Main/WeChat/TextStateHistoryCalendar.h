@interface TextStateHistoryCalendar : NSObject
{
    unsigned long long _currentYear; // +0x8
    NSCalendar * _calendar; // +0x10
    NSMutableArray * _privateSectionList; // +0x18
    NSMutableDictionary * _idToSectionDict; // +0x20
    NSMutableArray * _privateDayList; // +0x28
    NSMutableDictionary * _idToDayDict; // +0x30
    NSMutableDictionary * _idToInfoDict; // +0x38
}
- (id)init;
- (void)appendHistoryInfoList:(id)arg1;
- (void)appendHistoryInfoList:(id)arg1 isNew:(BOOL)arg2;
- (void)updateSections;
- (id)sectionList;
- (id)dayList;
- (id)dayFromHistoryInfo:(id)arg1;
- (unsigned long long)dayIndexFromHistoryInfo:(id)arg1;
- (id)indexPathFromHistoryInfo:(id)arg1;
- (id)historyInfoForIndexPath:(id)arg1;
- (void)removeHistoryInfo:(id)arg1;
- (id)infoForTextStateId:(id)arg1;
- (unsigned long long)currentYear;
- (void)setCurrentYear:(unsigned long long)arg1;
- (id)calendar;
- (void)setCalendar:(id)arg1;
- (id)privateSectionList;
- (void)setPrivateSectionList:(id)arg1;
- (id)idToSectionDict;
- (void)setIdToSectionDict:(id)arg1;
- (id)privateDayList;
- (void)setPrivateDayList:(id)arg1;
- (id)idToDayDict;
- (void)setIdToDayDict:(id)arg1;
- (id)idToInfoDict;
- (void)setIdToInfoDict:(id)arg1;
- (void).cxx_destruct;
@end
