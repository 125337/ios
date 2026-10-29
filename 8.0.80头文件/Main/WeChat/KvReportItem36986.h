@interface KvReportItem36986 : KvReportBaseItem
{
    unsigned int _BoxActType_22; // +0x8
    unsigned int _ReddotActType_23; // +0xc
    unsigned int _PrePos_24; // +0x10
    unsigned int _NewPos_25; // +0x14
    unsigned int _ReddotReason_26; // +0x18
    unsigned int _PosReason_27; // +0x1c
    unsigned int _AppStatus_28; // +0x20
    unsigned int _IsBoxInScreen_29; // +0x24
    unsigned int _IsInChat_30; // +0x28
    unsigned int _BoxCntInScreen_31; // +0x2c
    unsigned long long _ActiveId_32; // +0x30
    unsigned long long _MsgRecordID_33; // +0x38
}
- (unsigned int)reportKvId;
- (id)reportOrderedFieldNameArr;
- (unsigned int)BoxActType_22;
- (void)setBoxActType_22:(unsigned int)arg1;
- (unsigned int)ReddotActType_23;
- (void)setReddotActType_23:(unsigned int)arg1;
- (unsigned int)PrePos_24;
- (void)setPrePos_24:(unsigned int)arg1;
- (unsigned int)NewPos_25;
- (void)setNewPos_25:(unsigned int)arg1;
- (unsigned int)ReddotReason_26;
- (void)setReddotReason_26:(unsigned int)arg1;
- (unsigned int)PosReason_27;
- (void)setPosReason_27:(unsigned int)arg1;
- (unsigned int)AppStatus_28;
- (void)setAppStatus_28:(unsigned int)arg1;
- (unsigned int)IsBoxInScreen_29;
- (void)setIsBoxInScreen_29:(unsigned int)arg1;
- (unsigned int)IsInChat_30;
- (void)setIsInChat_30:(unsigned int)arg1;
- (unsigned int)BoxCntInScreen_31;
- (void)setBoxCntInScreen_31:(unsigned int)arg1;
- (unsigned long long)ActiveId_32;
- (void)setActiveId_32:(unsigned long long)arg1;
- (unsigned long long)MsgRecordID_33;
- (void)setMsgRecordID_33:(unsigned long long)arg1;
@end
