@interface WCFinderSocialGraphFeatureModel : NSObject <PBCoding>
{
    NSMutableDictionary * _lfuRecords; // +0x8
    NSMutableDictionary * _frequencyMap; // +0x10
    NSMutableDictionary * _interactionMap; // +0x18
    NSString * _lfuRecordsJsonString; // +0x20
    NSString * _frequencyMapJsonString; // +0x28
    NSString * _interactionMapJsonString; // +0x30
}
+ (void)PBArrayAdd_lfuRecordsJsonString;
+ (void)PBArrayAdd_frequencyMapJsonString;
+ (void)PBArrayAdd_interactionMapJsonString;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (void)addInteractionWithUsername:(id)arg1 timestamp:(long long)arg2;
- (id)getTimestampsForUsername:(id)arg1;
- (void)updateInteractionInfoForUsername:(id)arg1 redDotExposure:(BOOL)arg2 redDotClick:(BOOL)arg3 like:(BOOL)arg4 completePlay:(BOOL)arg5;
- (id)getInteractionInfoForUsername:(id)arg1;
- (void)cleanExpiredData;
- (id)getAllUsernames;
- (long long)getLFURecordCount;
- (void)removeLowestFrequencyUser;
- (id)lfuRecords;
- (void)setLfuRecords:(id)arg1;
- (id)frequencyMap;
- (void)setFrequencyMap:(id)arg1;
- (id)interactionMap;
- (void)setInteractionMap:(id)arg1;
- (id)lfuRecordsJsonString;
- (void)setLfuRecordsJsonString:(id)arg1;
- (id)frequencyMapJsonString;
- (void)setFrequencyMapJsonString:(id)arg1;
- (id)interactionMapJsonString;
- (void)setInteractionMapJsonString:(id)arg1;
- (void).cxx_destruct;
@end
