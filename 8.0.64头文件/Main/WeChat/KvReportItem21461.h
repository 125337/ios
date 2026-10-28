@interface KvReportItem21461 : KvReportBaseItem
{
    BOOL _UseServerTime_34; // +0x8
    unsigned int _Mid_22; // +0xc
    unsigned int _Idx_23; // +0x10
    int _ItemShowType_24; // +0x14
    unsigned int _RecOrder_27; // +0x18
    unsigned int _Style_30; // +0x1c
    int _Weight_32; // +0x20
    unsigned int _RedDotFlag_33; // +0x24
    int _Pos_35; // +0x28
    int _InsertRet_36; // +0x2c
    NSString * _BizUin_21; // +0x30
    NSString * _ExpType_25; // +0x38
    NSString * _CardId_26; // +0x40
    unsigned long long _RecId_28; // +0x48
    NSString * _RecSummary_29; // +0x50
    NSString * _RecInfo_31; // +0x58
}
- (unsigned int)reportKvId;
- (id)reportOrderedFieldNameArr;
- (id)BizUin_21;
- (void)setBizUin_21:(id)arg1;
- (unsigned int)Mid_22;
- (void)setMid_22:(unsigned int)arg1;
- (unsigned int)Idx_23;
- (void)setIdx_23:(unsigned int)arg1;
- (int)ItemShowType_24;
- (void)setItemShowType_24:(int)arg1;
- (id)ExpType_25;
- (void)setExpType_25:(id)arg1;
- (id)CardId_26;
- (void)setCardId_26:(id)arg1;
- (unsigned int)RecOrder_27;
- (void)setRecOrder_27:(unsigned int)arg1;
- (unsigned long long)RecId_28;
- (void)setRecId_28:(unsigned long long)arg1;
- (id)RecSummary_29;
- (void)setRecSummary_29:(id)arg1;
- (unsigned int)Style_30;
- (void)setStyle_30:(unsigned int)arg1;
- (id)RecInfo_31;
- (void)setRecInfo_31:(id)arg1;
- (int)Weight_32;
- (void)setWeight_32:(int)arg1;
- (unsigned int)RedDotFlag_33;
- (void)setRedDotFlag_33:(unsigned int)arg1;
- (BOOL)UseServerTime_34;
- (void)setUseServerTime_34:(BOOL)arg1;
- (int)Pos_35;
- (void)setPos_35:(int)arg1;
- (int)InsertRet_36;
- (void)setInsertRet_36:(int)arg1;
- (void).cxx_destruct;
@end
