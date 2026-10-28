@interface CdnRecordMediaInfo : NSObject <NSCopying>
{
    NSString * m_nsClientMsgID; // +0x8
    NSString * m_nsFilePath; // +0x10
    NSString * m_nsUsername; // +0x18
    NSString * m_nsFileID; // +0x20
    NSString * m_nsAesKey; // +0x28
    unsigned long long m_uiFileTotalLen; // +0x30
    unsigned int m_uiScene; // +0x38
    NSString * m_nsExtInfo; // +0x40
    unsigned int m_uiFileType; // +0x48
    NSString * m_authkey; // +0x50
    double m_tGetMoovTime; // +0x58
    unsigned int m_uiMoovPos; // +0x60
    unsigned long long m_ui64StartTime; // +0x68
    unsigned long long m_ui64EndTime; // +0x70
    BOOL _isThumb; // +0x78
    BOOL _isLargeFile; // +0x79
    NSString * _m_nsTargetFilePath; // +0x80
    NSString * _m_nsVideoThumbPath; // +0x88
    NSString * _m_nsFileMd5; // +0x90
    FavoritesItemDataField * _recordDataField; // +0x98
    NSString * _signature; // +0xa0
    NSString * _fakeAeskey; // +0xa8
    NSString * _fakeSignature; // +0xb0
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)m_nsClientMsgID;
- (void)setM_nsClientMsgID:(id)arg1;
- (id)m_nsFilePath;
- (void)setM_nsFilePath:(id)arg1;
- (id)m_nsUsername;
- (void)setM_nsUsername:(id)arg1;
- (id)m_nsFileID;
- (void)setM_nsFileID:(id)arg1;
- (id)m_nsAesKey;
- (void)setM_nsAesKey:(id)arg1;
- (unsigned long long)m_uiFileTotalLen;
- (void)setM_uiFileTotalLen:(unsigned long long)arg1;
- (unsigned int)m_uiScene;
- (void)setM_uiScene:(unsigned int)arg1;
- (id)m_nsExtInfo;
- (void)setM_nsExtInfo:(id)arg1;
- (unsigned int)m_uiFileType;
- (void)setM_uiFileType:(unsigned int)arg1;
- (id)m_authkey;
- (void)setM_authkey:(id)arg1;
- (unsigned int)m_uiMoovPos;
- (void)setM_uiMoovPos:(unsigned int)arg1;
- (double)m_tGetMoovTime;
- (void)setM_tGetMoovTime:(double)arg1;
- (unsigned long long)m_ui64StartTime;
- (void)setM_ui64StartTime:(unsigned long long)arg1;
- (unsigned long long)m_ui64EndTime;
- (void)setM_ui64EndTime:(unsigned long long)arg1;
- (id)m_nsTargetFilePath;
- (void)setM_nsTargetFilePath:(id)arg1;
- (id)m_nsVideoThumbPath;
- (void)setM_nsVideoThumbPath:(id)arg1;
- (id)m_nsFileMd5;
- (void)setM_nsFileMd5:(id)arg1;
- (BOOL)isThumb;
- (void)setIsThumb:(BOOL)arg1;
- (id)recordDataField;
- (void)setRecordDataField:(id)arg1;
- (BOOL)isLargeFile;
- (void)setIsLargeFile:(BOOL)arg1;
- (id)signature;
- (void)setSignature:(id)arg1;
- (id)fakeAeskey;
- (void)setFakeAeskey:(id)arg1;
- (id)fakeSignature;
- (void)setFakeSignature:(id)arg1;
- (void).cxx_destruct;
@end
