@interface RecordMsgUploadUtils : NSObject
+ (BOOL)isCloseRecordMsgBatchHitCheck;
+ (BOOL)isCloseRecordMsgGroupNode;
+ (BOOL)isInviteShareMsgUseNewUploader;
+ (BOOL)isOpenNewRecordMsgUploadMgr;
+ (BOOL)isNeedReUploadOldRecordData;
+ (BOOL)isFavRecordDownloadViaPublicCdnEnable;
+ (BOOL)isRecordMsgFileTypeCheckEnable;
+ (BOOL)isUploadSameMsg:(id)arg1 compare:(id)arg2;
+ (id)findRecordDataInList:(id)arg1 WithLocalDataId:(id)arg2;
+ (void)clearLocalProperty:(id)arg1;
+ (int)getCdnFileTypeWithDataField:(id)arg1;
+ (void)checkIfHaveInvalidateFileType:(id)arg1 scene:(id)arg2 completion:(id /* block */)arg3;
+ (int)checkFileTypeTag:(id)arg1 inRegion:(id)arg2 dataId:(id)arg3 scene:(id)arg4;
+ (void)copyDataForDataList:(id)arg1 msgWrap:(id)arg2;
@end
