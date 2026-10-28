@interface RecordTransfer : NSObject
+ (id)genTaskFromMessageWrap:(id)arg1 dataId:(id)arg2 type:(unsigned long long)arg3;
+ (id)genTaskFromRecordDataWrap:(id)arg1 type:(unsigned long long)arg2;
- (void)onRecordMsgUploadCreated:(id)arg1 dataId:(id)arg2;
- (void)onRecordMsgUploadStart:(id)arg1 dataId:(id)arg2;
- (void)onRecordMsgUploadStop:(id)arg1 dataId:(id)arg2;
- (void)onRecordMsgUpload:(id)arg1 dataId:(id)arg2 progressChanged:(int)arg3;
- (void)onRecordMsgUploadCompleted:(id)arg1 dataId:(id)arg2 error:(id)arg3;
- (void)onRecordMsgDownloadCreated:(id)arg1 dataId:(id)arg2;
- (void)onRecordMsgDownloadStart:(id)arg1 dataId:(id)arg2;
- (void)onRecordMsgDownloadStop:(id)arg1 dataId:(id)arg2;
- (void)onRecordMsgDownload:(id)arg1 dataId:(id)arg2 progressChanged:(int)arg3;
- (void)onRecordMsgDownloadCompleted:(id)arg1 dataId:(id)arg2 error:(id)arg3;
@end
