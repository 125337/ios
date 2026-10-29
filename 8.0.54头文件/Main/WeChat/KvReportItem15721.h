@interface KvReportItem15721 : KvReportBaseItem
{
    unsigned int _MsgId_21; // +0x8
    unsigned int _Optype_22; // +0xc
    unsigned int _EventTime_23; // +0x10
    unsigned int _SessionId_24; // +0x14
    unsigned int _Idx_25; // +0x18
    unsigned int _CardType_28; // +0x1c
    unsigned int _Order_29; // +0x20
    unsigned int _RecRk_33; // +0x24
    unsigned int _RecStyle_34; // +0x28
    unsigned int _MsgType_38; // +0x2c
    NSString * _BizUserName_20; // +0x30
    long long _Id_26; // +0x38
    NSString * _FbContent_27; // +0x40
    NSString * _ExpType_30; // +0x48
    NSString * _Event_31; // +0x50
    NSString * _CardId_32; // +0x58
    NSString * _RecInfo_35; // +0x60
    NSString * _LinkTitle_36; // +0x68
    NSString * _LinkUrl_37; // +0x70
    NSString * _FinderObjectId_39; // +0x78
    NSString * _FinderUin_40; // +0x80
    NSString * _FinderSessionBuffer_41; // +0x88
}
- (unsigned int)reportKvId;
- (unsigned int)reportNSStringPreprocessType;
- (id)reportOrderedFieldNameArr;
- (id)BizUserName_20;
- (void)setBizUserName_20:(id)arg1;
- (unsigned int)MsgId_21;
- (void)setMsgId_21:(unsigned int)arg1;
- (unsigned int)Optype_22;
- (void)setOptype_22:(unsigned int)arg1;
- (unsigned int)EventTime_23;
- (void)setEventTime_23:(unsigned int)arg1;
- (unsigned int)SessionId_24;
- (void)setSessionId_24:(unsigned int)arg1;
- (unsigned int)Idx_25;
- (void)setIdx_25:(unsigned int)arg1;
- (long long)Id_26;
- (void)setId_26:(long long)arg1;
- (id)FbContent_27;
- (void)setFbContent_27:(id)arg1;
- (unsigned int)CardType_28;
- (void)setCardType_28:(unsigned int)arg1;
- (unsigned int)Order_29;
- (void)setOrder_29:(unsigned int)arg1;
- (id)ExpType_30;
- (void)setExpType_30:(id)arg1;
- (id)Event_31;
- (void)setEvent_31:(id)arg1;
- (id)CardId_32;
- (void)setCardId_32:(id)arg1;
- (unsigned int)RecRk_33;
- (void)setRecRk_33:(unsigned int)arg1;
- (unsigned int)RecStyle_34;
- (void)setRecStyle_34:(unsigned int)arg1;
- (id)RecInfo_35;
- (void)setRecInfo_35:(id)arg1;
- (id)LinkTitle_36;
- (void)setLinkTitle_36:(id)arg1;
- (id)LinkUrl_37;
- (void)setLinkUrl_37:(id)arg1;
- (unsigned int)MsgType_38;
- (void)setMsgType_38:(unsigned int)arg1;
- (id)FinderObjectId_39;
- (void)setFinderObjectId_39:(id)arg1;
- (id)FinderUin_40;
- (void)setFinderUin_40:(id)arg1;
- (id)FinderSessionBuffer_41;
- (void)setFinderSessionBuffer_41:(id)arg1;
- (void).cxx_destruct;
@end

