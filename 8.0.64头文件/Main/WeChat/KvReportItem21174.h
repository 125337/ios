@interface KvReportItem21174 : KvReportBaseItem
{
    unsigned int _EnterScene_21; // +0x8
    unsigned int _ActionType_24; // +0xc
    unsigned int _Content_27; // +0x10
    NSString * _EnterSceneId_22; // +0x18
    NSString * _RequestId_23; // +0x20
    NSString * _QueryKey_25; // +0x28
    NSString * _SessionId_26; // +0x30
    unsigned long long _EventTime_28; // +0x38
}
- (unsigned int)reportKvId;
- (unsigned int)reportNSStringPreprocessType;
- (id)reportOrderedFieldNameArr;
- (unsigned int)EnterScene_21;
- (void)setEnterScene_21:(unsigned int)arg1;
- (id)EnterSceneId_22;
- (void)setEnterSceneId_22:(id)arg1;
- (id)RequestId_23;
- (void)setRequestId_23:(id)arg1;
- (unsigned int)ActionType_24;
- (void)setActionType_24:(unsigned int)arg1;
- (id)QueryKey_25;
- (void)setQueryKey_25:(id)arg1;
- (id)SessionId_26;
- (void)setSessionId_26:(id)arg1;
- (unsigned int)Content_27;
- (void)setContent_27:(unsigned int)arg1;
- (unsigned long long)EventTime_28;
- (void)setEventTime_28:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
