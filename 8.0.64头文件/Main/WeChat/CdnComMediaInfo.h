@interface CdnComMediaInfo : NSObject
{
    NSString * m_nsClientMsgID; // +0x8
    NSString * m_nsFilePath; // +0x10
    NSString * m_nsFileID; // +0x18
    NSString * m_nsAesKey; // +0x20
    unsigned long long m_uiFileTotalLen; // +0x28
    unsigned int m_uiScene; // +0x30
    NSString * m_nsExtInfo; // +0x38
    BOOL m_bNeedMediaId; // +0x40
    BOOL _m_bNeedStorage; // +0x41
    int m_bizId; // +0x44
    int m_appType; // +0x48
    NSString * m_nsMediaType; // +0x50
}
- (id)init;
- (id)m_nsClientMsgID;
- (void)setM_nsClientMsgID:(id)arg1;
- (id)m_nsFilePath;
- (void)setM_nsFilePath:(id)arg1;
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
- (id)m_nsMediaType;
- (void)setM_nsMediaType:(id)arg1;
- (BOOL)m_bNeedMediaId;
- (void)setM_bNeedMediaId:(BOOL)arg1;
- (int)m_bizId;
- (void)setM_bizId:(int)arg1;
- (int)m_appType;
- (void)setM_appType:(int)arg1;
- (BOOL)m_bNeedStorage;
- (void)setM_bNeedStorage:(BOOL)arg1;
- (void).cxx_destruct;
@end
