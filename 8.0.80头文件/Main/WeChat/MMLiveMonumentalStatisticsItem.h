@interface MMLiveMonumentalStatisticsItem : NSObject
{
    unsigned long long _tier; // +0x8
    NSString * _subject; // +0x10
    NSString * _date; // +0x18
    NSString * _trophyPagUri; // +0x20
    NSString * _trophyPagMd5Hash; // +0x28
    NSString * _trophyLabel; // +0x30
    NSString * _congratulatoryMessage; // +0x38
    NSString * _reportingId; // +0x40
}
+ (id)monumentalStatisticsItemWithBackendModel:(id)arg1;
- (unsigned long long)tier;
- (void)setTier:(unsigned long long)arg1;
- (id)subject;
- (void)setSubject:(id)arg1;
- (id)date;
- (void)setDate:(id)arg1;
- (id)trophyPagUri;
- (void)setTrophyPagUri:(id)arg1;
- (id)trophyPagMd5Hash;
- (void)setTrophyPagMd5Hash:(id)arg1;
- (id)trophyLabel;
- (void)setTrophyLabel:(id)arg1;
- (id)congratulatoryMessage;
- (void)setCongratulatoryMessage:(id)arg1;
- (id)reportingId;
- (void)setReportingId:(id)arg1;
- (void).cxx_destruct;
@end
