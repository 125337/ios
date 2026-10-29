@interface KvReportItem21001 : KvReportBaseItem
{
    unsigned int _BizUin_21; // +0x8
    unsigned int _MsgId_23; // +0xc
    unsigned int _Idx_24; // +0x10
    unsigned int _AbsolutePosition_25; // +0x14
    unsigned int _EventType_28; // +0x18
    unsigned int _NetworkType_32; // +0x1c
    NSString * _Vid_22; // +0x20
    NSString * _Sessionid_26; // +0x28
    NSString * _AutoPlayId_27; // +0x30
    unsigned long long _PlayDuration_29; // +0x38
    unsigned long long _VideoDuration_30; // +0x40
    unsigned long long _BuffDuration_31; // +0x48
}
- (unsigned int)reportKvId;
- (id)reportOrderedFieldNameArr;
- (unsigned int)BizUin_21;
- (void)setBizUin_21:(unsigned int)arg1;
- (id)Vid_22;
- (void)setVid_22:(id)arg1;
- (unsigned int)MsgId_23;
- (void)setMsgId_23:(unsigned int)arg1;
- (unsigned int)Idx_24;
- (void)setIdx_24:(unsigned int)arg1;
- (unsigned int)AbsolutePosition_25;
- (void)setAbsolutePosition_25:(unsigned int)arg1;
- (id)Sessionid_26;
- (void)setSessionid_26:(id)arg1;
- (id)AutoPlayId_27;
- (void)setAutoPlayId_27:(id)arg1;
- (unsigned int)EventType_28;
- (void)setEventType_28:(unsigned int)arg1;
- (unsigned long long)PlayDuration_29;
- (void)setPlayDuration_29:(unsigned long long)arg1;
- (unsigned long long)VideoDuration_30;
- (void)setVideoDuration_30:(unsigned long long)arg1;
- (unsigned long long)BuffDuration_31;
- (void)setBuffDuration_31:(unsigned long long)arg1;
- (unsigned int)NetworkType_32;
- (void)setNetworkType_32:(unsigned int)arg1;
- (void).cxx_destruct;
@end
