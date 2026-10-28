@interface GroupNoticeUploadMgr : MMUserService <GroupNoticeDataUploadDelegate, MMServiceProtocol>
{
    GroupNoticeItem * _currentUploadItem; // +0x8
    NSMutableSet * _uploadedDataList; // +0x10
    NSMutableArray * _uploaderList; // +0x18
}
- (void)onServiceInit;
- (BOOL)isUploading;
- (void)stopAllUpload;
- (void)clean;
- (void)uploadItem:(id)arg1;
- (void)uploadData:(id)arg1;
- (void)stopUploadData:(id)arg1;
- (id)findUploaderByData:(id)arg1;
- (BOOL)needUploadData:(id)arg1;
- (BOOL)tryFillUploadInfoFromUploadedList:(id)arg1;
- (void)addDataToUploadList:(id)arg1 forItem:(id)arg2;
- (void)checkUploaderList;
- (void)onUploadGroupNoticeData:(id)arg1 retCode:(int)arg2;
- (void)onUploadGroupNoticeData:(id)arg1 finishedLength:(unsigned long long)arg2 totalLength:(unsigned long long)arg3;
- (void)notifyUploadItemSuccess:(BOOL)arg1;
- (id)currentUploadItem;
- (void)setCurrentUploadItem:(id)arg1;
- (id)uploadedDataList;
- (void)setUploadedDataList:(id)arg1;
- (id)uploaderList;
- (void)setUploaderList:(id)arg1;
- (void).cxx_destruct;
@end
