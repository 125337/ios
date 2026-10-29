@interface SNSCdnDownloadInfoWrap : NSObject
{
    BOOL _bUseDCIP; // +0x8
    BOOL _bUseXorEncrypt; // +0x9
    int _filetype; // +0xc
    int _downloadMode; // +0x10
    unsigned int _predownloadPercent; // +0x14
    NSString * _clientId; // +0x18
    NSString * _dataUrl; // +0x20
    NSString * _savePath; // +0x28
    NSArray * _arryIP; // +0x30
    NSString * _referUrl; // +0x38
    unsigned long long _xorEncryKey; // +0x40
    CdnTaskInfo * _taskInfo; // +0x48
    unsigned long long _m_ui64TaskCreateTime; // +0x50
    NSString * _videoColdRule; // +0x58
}
- (int)filetype;
- (void)setFiletype:(int)arg1;
- (id)clientId;
- (void)setClientId:(id)arg1;
- (id)dataUrl;
- (void)setDataUrl:(id)arg1;
- (id)savePath;
- (void)setSavePath:(id)arg1;
- (id)arryIP;
- (void)setArryIP:(id)arg1;
- (id)referUrl;
- (void)setReferUrl:(id)arg1;
- (BOOL)bUseDCIP;
- (void)setBUseDCIP:(BOOL)arg1;
- (int)downloadMode;
- (void)setDownloadMode:(int)arg1;
- (unsigned int)predownloadPercent;
- (void)setPredownloadPercent:(unsigned int)arg1;
- (BOOL)bUseXorEncrypt;
- (void)setBUseXorEncrypt:(BOOL)arg1;
- (unsigned long long)xorEncryKey;
- (void)setXorEncryKey:(unsigned long long)arg1;
- (id)taskInfo;
- (void)setTaskInfo:(id)arg1;
- (unsigned long long)m_ui64TaskCreateTime;
- (void)setM_ui64TaskCreateTime:(unsigned long long)arg1;
- (id)videoColdRule;
- (void)setVideoColdRule:(id)arg1;
- (void).cxx_destruct;
@end

