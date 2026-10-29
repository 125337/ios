@interface KvReportItem18218 : KvReportBaseItem
{
    BOOL _FirstTimeExpose_24; // +0x8
    BOOL _IsRedDot_33; // +0x9
    unsigned int _ExposeTime_21; // +0xc
    unsigned int _ExposePos_25; // +0x10
    unsigned int _UnreadCount_27; // +0x14
    unsigned int _ExposeStatus_28; // +0x18
    unsigned int _Reason_31; // +0x1c
    unsigned int _MsgType_32; // +0x20
    unsigned int _Idx_38; // +0x24
    unsigned int _unreadCountType_44; // +0x28
    unsigned int _renderMode_45; // +0x2c
    unsigned int _dataMode_46; // +0x30
    NSString * _BizUserName_22; // +0x38
    long long _Mid_23; // +0x40
    NSString * _Desc_26; // +0x48
    unsigned long long _ExposeSessionId_29; // +0x50
    unsigned long long _ExposeTimeMs_30; // +0x58
    NSString * _StrategyInfo_34; // +0x60
    NSString * _DigestBoldInfo_35; // +0x68
    long long _CardType_36; // +0x70
    long long _Style_37; // +0x78
    NSString * _RecInfo_39; // +0x80
    NSString * _ExtraData_40; // +0x88
    NSString * _LastRecCardId_41; // +0x90
    NSString * _finderFeedExportId_42; // +0x98
    NSString * _rankSessionId_43; // +0xa0
    NSString * _ReddotReportInfo_48; // +0xa8
}
- (unsigned int)reportKvId;
- (id)reportOrderedFieldNameArr;
- (unsigned int)ExposeTime_21;
- (void)setExposeTime_21:(unsigned int)arg1;
- (id)BizUserName_22;
- (void)setBizUserName_22:(id)arg1;
- (long long)Mid_23;
- (void)setMid_23:(long long)arg1;
- (BOOL)FirstTimeExpose_24;
- (void)setFirstTimeExpose_24:(BOOL)arg1;
- (unsigned int)ExposePos_25;
- (void)setExposePos_25:(unsigned int)arg1;
- (id)Desc_26;
- (void)setDesc_26:(id)arg1;
- (unsigned int)UnreadCount_27;
- (void)setUnreadCount_27:(unsigned int)arg1;
- (unsigned int)ExposeStatus_28;
- (void)setExposeStatus_28:(unsigned int)arg1;
- (unsigned long long)ExposeSessionId_29;
- (void)setExposeSessionId_29:(unsigned long long)arg1;
- (unsigned long long)ExposeTimeMs_30;
- (void)setExposeTimeMs_30:(unsigned long long)arg1;
- (unsigned int)Reason_31;
- (void)setReason_31:(unsigned int)arg1;
- (unsigned int)MsgType_32;
- (void)setMsgType_32:(unsigned int)arg1;
- (BOOL)IsRedDot_33;
- (void)setIsRedDot_33:(BOOL)arg1;
- (id)StrategyInfo_34;
- (void)setStrategyInfo_34:(id)arg1;
- (id)DigestBoldInfo_35;
- (void)setDigestBoldInfo_35:(id)arg1;
- (long long)CardType_36;
- (void)setCardType_36:(long long)arg1;
- (long long)Style_37;
- (void)setStyle_37:(long long)arg1;
- (unsigned int)Idx_38;
- (void)setIdx_38:(unsigned int)arg1;
- (id)RecInfo_39;
- (void)setRecInfo_39:(id)arg1;
- (id)ExtraData_40;
- (void)setExtraData_40:(id)arg1;
- (id)LastRecCardId_41;
- (void)setLastRecCardId_41:(id)arg1;
- (id)finderFeedExportId_42;
- (void)setFinderFeedExportId_42:(id)arg1;
- (id)rankSessionId_43;
- (void)setRankSessionId_43:(id)arg1;
- (unsigned int)unreadCountType_44;
- (void)setUnreadCountType_44:(unsigned int)arg1;
- (unsigned int)renderMode_45;
- (void)setRenderMode_45:(unsigned int)arg1;
- (unsigned int)dataMode_46;
- (void)setDataMode_46:(unsigned int)arg1;
- (id)ReddotReportInfo_48;
- (void)setReddotReportInfo_48:(id)arg1;
- (void).cxx_destruct;
@end

