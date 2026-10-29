@interface KvReportItem30752 : KvReportBaseItem
{
    BOOL _hasNewMsg_25; // +0x8
    unsigned int _scene_21; // +0xc
    unsigned int _sessionId_22; // +0x10
    unsigned int _enterTime_23; // +0x14
    unsigned int _newMsgContactCount_26; // +0x18
    unsigned int _enterPos_27; // +0x1c
    NSString * _clickContactUserName_24; // +0x20
}
- (unsigned int)reportKvId;
- (id)reportOrderedFieldNameArr;
- (unsigned int)scene_21;
- (void)setScene_21:(unsigned int)arg1;
- (unsigned int)sessionId_22;
- (void)setSessionId_22:(unsigned int)arg1;
- (unsigned int)enterTime_23;
- (void)setEnterTime_23:(unsigned int)arg1;
- (id)clickContactUserName_24;
- (void)setClickContactUserName_24:(id)arg1;
- (BOOL)hasNewMsg_25;
- (void)setHasNewMsg_25:(BOOL)arg1;
- (unsigned int)newMsgContactCount_26;
- (void)setNewMsgContactCount_26:(unsigned int)arg1;
- (unsigned int)enterPos_27;
- (void)setEnterPos_27:(unsigned int)arg1;
- (void).cxx_destruct;
@end
