@interface WCFinderPhotoFeedReporter : NSObject
{
    unsigned long long _startTimeMs; // +0x8
    unsigned long long _durationInMs; // +0x10
    NSMutableArray * _items; // +0x18
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)modelPropertyWhitelistForConfigTag:(id)arg1;
- (void)markPhotoFeedStartDisplay;
- (void)markPhotoFeedEndDisplay;
- (BOOL)hasPendingReportData;
- (id)finishReportData;
- (void)clearAllData;
- (void)shufflToNewIndex:(unsigned long long)arg1 comeWay:(unsigned long long)arg2;
- (void)markCurrentPhotoHasPause;
- (id)genReportData;
- (id)items;
- (long long)getLastReportPage;
- (unsigned long long)startTimeMs;
- (void)setStartTimeMs:(unsigned long long)arg1;
- (unsigned long long)durationInMs;
- (void)setDurationInMs:(unsigned long long)arg1;
- (void)setItems:(id)arg1;
- (void).cxx_destruct;
@end
