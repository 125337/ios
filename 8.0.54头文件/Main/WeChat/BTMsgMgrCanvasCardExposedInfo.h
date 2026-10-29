@interface BTMsgMgrCanvasCardExposedInfo : NSObject <PBCoding>
{
    NSMutableDictionary * _dictFirstExposedCardInToday; // +0x8
    unsigned long long _lastFirstExposedTimeMs; // +0x10
    NSMutableDictionary * _dicMsgId2TraceId; // +0x18
}
+ (void)PBArrayAdd_dictFirstExposedCardInToday;
+ (void)PBArrayAdd_lastFirstExposedTimeMs;
+ (void)PBArrayAdd_dicMsgId2TraceId;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)dictFirstExposedCardInToday;
- (void)setDictFirstExposedCardInToday:(id)arg1;
- (unsigned long long)lastFirstExposedTimeMs;
- (void)setLastFirstExposedTimeMs:(unsigned long long)arg1;
- (id)dicMsgId2TraceId;
- (void)setDicMsgId2TraceId:(id)arg1;
- (void).cxx_destruct;
@end

