@interface EmoticonBackupOperateMgr : MMUserService <EmoticonUploadCgiDelegate, EmoticonUploaderDelegate, MMServiceProtocol>
{
    BOOL m_hasAddBackupSuccessAfterInit; // +0x8
    BOOL m_isLastSuccessAddEmoticonCustom; // +0x9
    EmoticonOperateCgi * _m_operateCgi; // +0x10
    EmoticonUploadCgi * _m_uploadCgi; // +0x18
    EmoticonUploader * _m_uploader; // +0x20
    AddEmoticonWrap * _m_addEmoticonWrap; // +0x28
    OrderedDictionary * _m_uploadEmoticonQueue; // +0x30
    EmoticonCameraReportObject * _m_reportObject; // +0x38
    NSString * _operationKey; // +0x40
}
+ (void)reportAddBackupEmoticon:(id)arg1 failedWithReason:(unsigned long long)arg2;
- (id)init;
- (void)deleteBackupEmoticonFromServer:(id)arg1 withType:(unsigned long long)arg2;
- (void)deleteBackupEmoticonOperateOk:(id)arg1 withType:(unsigned long long)arg2;
- (void)deleteBackupEmoticonOperateFailed:(id)arg1;
- (void)stickyBackupEmoticonToServer:(id)arg1 withType:(unsigned long long)arg2;
- (void)preCheckGameEmoticonForSticky:(id)arg1 gameMd5:(id)arg2;
- (void)stickyBackupEmoticonOperateOk:(id)arg1 withType:(unsigned long long)arg2;
- (void)stickyBackupEmoticonOperateFailed:(id)arg1;
- (void)moveBackupEmoticonToServer:(id)arg1 withType:(unsigned long long)arg2 insertPositionMd5:(id)arg3;
- (void)moveBackupEmoticonOperateOk:(id)arg1 withType:(unsigned long long)arg2 insertPositionMd5:(id)arg3;
- (void)moveBackupEmoticonOperateFailed:(id)arg1;
- (void)addBackupEmoticonToServer:(id)arg1;
- (void)uploadEmoticon;
- (void)checkUploadEmoticon;
- (void)uploadEmoticonFailed:(id)arg1 withReason:(unsigned long long)arg2 realMd5:(id)arg3;
- (void)uploadEmoticonOk:(id)arg1 withEmojiInfo:(id)arg2;
- (void)addBackupEmoticon:(id)arg1 failedWithReason:(unsigned long long)arg2 errMsg:(id)arg3;
- (void)addBackupEmoticonOkWithAddEmoticonWrap:(id)arg1 validEmojiInfoObj:(id)arg2;
- (void)trySaveThumbImageForAddEmoticonWrap:(id)arg1;
- (id)decodeEmoticonUploadQueueFromFile:(id)arg1;
- (BOOL)encodeEmoticonUploadQueue:(id)arg1 toFile:(id)arg2;
- (id)addEmoticonWrapForUploadMd5:(id)arg1;
- (id)allAddEmoticonWrapInUploadQueue;
- (BOOL)removeAddEmoticonWrapFromUploadQueueForUploadMd5:(id)arg1;
- (unsigned long long)countOfAddEmoticonWrapsPendingUpload;
- (void)onEmoticonUploadMd5Ok:(id)arg1 emojiInfo:(id)arg2;
- (void)onEmoticonUploadMd5Failed:(id)arg1 reason:(unsigned long long)arg2;
- (void)onEmoticonUploadSuccessWithEmoji:(id)arg1 uploadInfo:(id)arg2;
- (void)onEmoticonUploadFailWithUploadInfo:(id)arg1 reason:(unsigned long long)arg2 realMd5:(id)arg3;
- (id)getCurrentOperationKey;
- (BOOL)startNewOperaton;
- (void)endNewOperaton;
- (BOOL)hasAddBackupSuccessAfterInit;
- (BOOL)isLastSuccessAddEmoticonCustom;
- (id)m_operateCgi;
- (void)setM_operateCgi:(id)arg1;
- (id)m_uploadCgi;
- (void)setM_uploadCgi:(id)arg1;
- (id)m_uploader;
- (void)setM_uploader:(id)arg1;
- (id)m_addEmoticonWrap;
- (void)setM_addEmoticonWrap:(id)arg1;
- (id)m_uploadEmoticonQueue;
- (void)setM_uploadEmoticonQueue:(id)arg1;
- (id)m_reportObject;
- (void)setM_reportObject:(id)arg1;
- (id)operationKey;
- (void)setOperationKey:(id)arg1;
- (void).cxx_destruct;
@end

