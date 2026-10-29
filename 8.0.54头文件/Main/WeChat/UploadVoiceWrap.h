@interface UploadVoiceWrap : NSObject <PBCoding>
{
    unsigned int _m_uiLocalID; // +0x8
    unsigned int _m_uiOffset; // +0xc
    unsigned int _m_uiLen; // +0x10
    unsigned int _m_uiCreateTime; // +0x14
    unsigned int _m_uiVoiceTime; // +0x18
    unsigned int _m_uiVoiceFormat; // +0x1c
    unsigned int _m_uiEndFlag; // +0x20
    unsigned int _m_uiRetryCount; // +0x24
    unsigned int _m_uiInsertQueueTime; // +0x28
    unsigned int _m_uiCancelFlag; // +0x2c
    unsigned int _m_uiVoiceLen; // +0x30
    unsigned int _m_uiVoiceForwardFlag; // +0x34
    unsigned int _m_uiCgi; // +0x38
    NSString * _m_nsToUsrName; // +0x40
    long long _m_n64SvrID; // +0x48
    NSString * _m_nsExtend; // +0x50
    NSString * _m_nsFromUsrName; // +0x58
    NSData * _m_dtVoice; // +0x60
    NSString * _m_nsMsgSource; // +0x68
    NSString * _voiceUrl; // +0x70
    NSString * _aesKey; // +0x78
}
+ (void)PBArrayAdd_m_uiLocalID;
+ (void)PBArrayAdd_m_uiCreateTime;
+ (void)PBArrayAdd_m_uiOffset;
+ (void)PBArrayAdd_m_uiLen;
+ (void)PBArrayAdd_m_uiVoiceTime;
+ (void)PBArrayAdd_m_uiEndFlag;
+ (void)PBArrayAdd_m_uiRetryCount;
+ (void)PBArrayAdd_m_uiCancelFlag;
+ (void)PBArrayAdd_m_uiVoiceFormat;
+ (void)PBArrayAdd_m_uiInsertQueueTime;
+ (void)PBArrayAdd_m_n64SvrID;
+ (void)PBArrayAdd_m_nsToUsrName;
+ (void)PBArrayAdd_m_nsExtend;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)description;
- (id)m_nsToUsrName;
- (void)setM_nsToUsrName:(id)arg1;
- (long long)m_n64SvrID;
- (void)setM_n64SvrID:(long long)arg1;
- (unsigned int)m_uiLocalID;
- (void)setM_uiLocalID:(unsigned int)arg1;
- (unsigned int)m_uiOffset;
- (void)setM_uiOffset:(unsigned int)arg1;
- (unsigned int)m_uiLen;
- (void)setM_uiLen:(unsigned int)arg1;
- (unsigned int)m_uiCreateTime;
- (void)setM_uiCreateTime:(unsigned int)arg1;
- (unsigned int)m_uiVoiceTime;
- (void)setM_uiVoiceTime:(unsigned int)arg1;
- (unsigned int)m_uiVoiceFormat;
- (void)setM_uiVoiceFormat:(unsigned int)arg1;
- (unsigned int)m_uiEndFlag;
- (void)setM_uiEndFlag:(unsigned int)arg1;
- (unsigned int)m_uiRetryCount;
- (void)setM_uiRetryCount:(unsigned int)arg1;
- (unsigned int)m_uiInsertQueueTime;
- (void)setM_uiInsertQueueTime:(unsigned int)arg1;
- (unsigned int)m_uiCancelFlag;
- (void)setM_uiCancelFlag:(unsigned int)arg1;
- (id)m_nsExtend;
- (void)setM_nsExtend:(id)arg1;
- (id)m_nsFromUsrName;
- (void)setM_nsFromUsrName:(id)arg1;
- (unsigned int)m_uiVoiceLen;
- (void)setM_uiVoiceLen:(unsigned int)arg1;
- (id)m_dtVoice;
- (void)setM_dtVoice:(id)arg1;
- (unsigned int)m_uiVoiceForwardFlag;
- (void)setM_uiVoiceForwardFlag:(unsigned int)arg1;
- (unsigned int)m_uiCgi;
- (void)setM_uiCgi:(unsigned int)arg1;
- (id)m_nsMsgSource;
- (void)setM_nsMsgSource:(id)arg1;
- (id)voiceUrl;
- (void)setVoiceUrl:(id)arg1;
- (id)aesKey;
- (void)setAesKey:(id)arg1;
- (void).cxx_destruct;
@end

