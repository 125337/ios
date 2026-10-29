@interface KvReportItem19202 : KvReportBaseItem
{
    unsigned int _MsgType_22; // +0x8
    unsigned int _OptType_24; // +0xc
    unsigned int _Position_25; // +0x10
    unsigned int _SendType_28; // +0x14
    unsigned int _bizuin_32; // +0x18
    unsigned int _msgid_33; // +0x1c
    unsigned int _idx_34; // +0x20
    unsigned int _downMsgScene_36; // +0x24
    unsigned int _upMsgType_37; // +0x28
    unsigned int _upMsgSubType_38; // +0x2c
    unsigned int _addContactScene_40; // +0x30
    NSString * _Username_21; // +0x38
    NSString * _MsgUrl_23; // +0x40
    unsigned long long _SendTime_26; // +0x48
    unsigned long long _EnterTime_27; // +0x50
    unsigned long long _svrMsgId_29; // +0x58
    long long _scene_30; // +0x60
    NSString * _sessionId_31; // +0x68
    unsigned long long _exitTime_35; // +0x70
    long long _menuid_39; // +0x78
}
- (unsigned int)reportKvId;
- (id)reportOrderedFieldNameArr;
- (id)Username_21;
- (void)setUsername_21:(id)arg1;
- (unsigned int)MsgType_22;
- (void)setMsgType_22:(unsigned int)arg1;
- (id)MsgUrl_23;
- (void)setMsgUrl_23:(id)arg1;
- (unsigned int)OptType_24;
- (void)setOptType_24:(unsigned int)arg1;
- (unsigned int)Position_25;
- (void)setPosition_25:(unsigned int)arg1;
- (unsigned long long)SendTime_26;
- (void)setSendTime_26:(unsigned long long)arg1;
- (unsigned long long)EnterTime_27;
- (void)setEnterTime_27:(unsigned long long)arg1;
- (unsigned int)SendType_28;
- (void)setSendType_28:(unsigned int)arg1;
- (unsigned long long)svrMsgId_29;
- (void)setSvrMsgId_29:(unsigned long long)arg1;
- (long long)scene_30;
- (void)setScene_30:(long long)arg1;
- (id)sessionId_31;
- (void)setSessionId_31:(id)arg1;
- (unsigned int)bizuin_32;
- (void)setBizuin_32:(unsigned int)arg1;
- (unsigned int)msgid_33;
- (void)setMsgid_33:(unsigned int)arg1;
- (unsigned int)idx_34;
- (void)setIdx_34:(unsigned int)arg1;
- (unsigned long long)exitTime_35;
- (void)setExitTime_35:(unsigned long long)arg1;
- (unsigned int)downMsgScene_36;
- (void)setDownMsgScene_36:(unsigned int)arg1;
- (unsigned int)upMsgType_37;
- (void)setUpMsgType_37:(unsigned int)arg1;
- (unsigned int)upMsgSubType_38;
- (void)setUpMsgSubType_38:(unsigned int)arg1;
- (long long)menuid_39;
- (void)setMenuid_39:(long long)arg1;
- (unsigned int)addContactScene_40;
- (void)setAddContactScene_40:(unsigned int)arg1;
- (void).cxx_destruct;
@end
