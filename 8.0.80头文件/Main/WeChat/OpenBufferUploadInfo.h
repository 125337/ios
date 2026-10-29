@interface OpenBufferUploadInfo : NSObject
{
    BOOL _m_bUpload; // +0x8
    unsigned int _m_addQueueTime; // +0xc
    unsigned int _m_uiScene; // +0x10
    unsigned int _m_uiStartPos; // +0x14
    unsigned int _m_uploadDataSize; // +0x18
    unsigned int _m_uploadTime; // +0x1c
    unsigned int _m_maxUploadTime; // +0x20
    NSString * _m_clientAppDataId; // +0x28
    NSString * _m_nsUsrName; // +0x30
    NSData * _m_uploadData; // +0x38
    NSString * _m_mediaId; // +0x40
}
- (BOOL)IsCanUpload;
- (id)m_clientAppDataId;
- (void)setM_clientAppDataId:(id)arg1;
- (id)m_nsUsrName;
- (void)setM_nsUsrName:(id)arg1;
- (unsigned int)m_addQueueTime;
- (void)setM_addQueueTime:(unsigned int)arg1;
- (unsigned int)m_uiScene;
- (void)setM_uiScene:(unsigned int)arg1;
- (id)m_uploadData;
- (void)setM_uploadData:(id)arg1;
- (BOOL)m_bUpload;
- (void)setM_bUpload:(BOOL)arg1;
- (unsigned int)m_uiStartPos;
- (void)setM_uiStartPos:(unsigned int)arg1;
- (id)m_mediaId;
- (void)setM_mediaId:(id)arg1;
- (unsigned int)m_uploadDataSize;
- (void)setM_uploadDataSize:(unsigned int)arg1;
- (unsigned int)m_uploadTime;
- (void)setM_uploadTime:(unsigned int)arg1;
- (unsigned int)m_maxUploadTime;
- (void)setM_maxUploadTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
