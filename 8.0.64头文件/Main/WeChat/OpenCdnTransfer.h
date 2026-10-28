@interface OpenCdnTransfer : NSObject
+ (id)genMsgFileTaskFromMessageWrap:(id)arg1;
- (id)genTaskFromMessageWrap:(id)arg1 type:(unsigned long long)arg2;
- (void)onMsgCreateUpload:(id)arg1;
- (void)onMsgStartUpload:(id)arg1;
- (void)onMsgStopUpload:(id)arg1;
- (void)onMsgUpload:(id)arg1 progressChanged:(int)arg2;
- (void)onMsgUploadCompleted:(id)arg1 error:(id)arg2;
- (void)onMsgCreateDownload:(id)arg1;
- (void)onMsgStartDownload:(id)arg1;
- (void)onMsgStopDownload:(id)arg1;
- (void)onMsgDownload:(id)arg1 progressChanged:(int)arg2;
- (void)onMsgDownloadCompleted:(id)arg1 error:(id)arg2;
@end
