@interface DownloadVoiceWrap : NSObject <PBCoding>
{
    BOOL _bReportCost60s; // +0x8
    unsigned int _m_uiLocalID; // +0xc
    unsigned int _m_uiCreateTime; // +0x10
    unsigned int _m_uiVoiceLen; // +0x14
    unsigned int _m_uiVoiceTime; // +0x18
    unsigned int _m_uiEndFlag; // +0x1c
    unsigned int _m_uiRetryCount; // +0x20
    unsigned int _m_uiOffset; // +0x24
    unsigned int _m_uiLen; // +0x28
    unsigned int _m_uiCancelFlag; // +0x2c
    unsigned int _startDownloadTime; // +0x30
    NSString * _m_nsChatUsrName; // +0x38
    long long _m_n64SvrID; // +0x40
    unsigned long long _m_ui64BufId; // +0x48
    NSString * _voiceUrl; // +0x50
    NSString * _aesKey; // +0x58
    NSString * _xml; // +0x60
    NSData * _m_dtVoice; // +0x68
}
+ (void)PBArrayAdd_m_uiLocalID;
+ (void)PBArrayAdd_m_uiCreateTime;
+ (void)PBArrayAdd_m_uiVoiceLen;
+ (void)PBArrayAdd_m_uiVoiceTime;
+ (void)PBArrayAdd_m_uiEndFlag;
+ (void)PBArrayAdd_m_uiRetryCount;
+ (void)PBArrayAdd_m_n64SvrID;
+ (void)PBArrayAdd_m_nsChatUsrName;
+ (void)PBArrayAdd_m_ui64BufId;
+ (void)PBArrayAdd_voiceUrl;
+ (void)PBArrayAdd_aesKey;
+ (void)PBArrayAdd_xml;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)description;
- (id)m_nsChatUsrName;
- (void)setM_nsChatUsrName:(id)arg1;
- (unsigned int)m_uiLocalID;
- (void)setM_uiLocalID:(unsigned int)arg1;
- (long long)m_n64SvrID;
- (void)setM_n64SvrID:(long long)arg1;
- (unsigned int)m_uiCreateTime;
- (void)setM_uiCreateTime:(unsigned int)arg1;
- (unsigned int)m_uiVoiceLen;
- (void)setM_uiVoiceLen:(unsigned int)arg1;
- (unsigned int)m_uiVoiceTime;
- (void)setM_uiVoiceTime:(unsigned int)arg1;
- (unsigned int)m_uiEndFlag;
- (void)setM_uiEndFlag:(unsigned int)arg1;
- (unsigned int)m_uiRetryCount;
- (void)setM_uiRetryCount:(unsigned int)arg1;
- (unsigned long long)m_ui64BufId;
- (void)setM_ui64BufId:(unsigned long long)arg1;
- (id)voiceUrl;
- (void)setVoiceUrl:(id)arg1;
- (id)aesKey;
- (void)setAesKey:(id)arg1;
- (id)xml;
- (void)setXml:(id)arg1;
- (unsigned int)m_uiOffset;
- (void)setM_uiOffset:(unsigned int)arg1;
- (unsigned int)m_uiLen;
- (void)setM_uiLen:(unsigned int)arg1;
- (id)m_dtVoice;
- (void)setM_dtVoice:(id)arg1;
- (unsigned int)m_uiCancelFlag;
- (void)setM_uiCancelFlag:(unsigned int)arg1;
- (unsigned int)startDownloadTime;
- (void)setStartDownloadTime:(unsigned int)arg1;
- (BOOL)bReportCost60s;
- (void)setBReportCost60s:(BOOL)arg1;
- (void).cxx_destruct;
@end

