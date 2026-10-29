@interface CustomRoamDiskCallback : NSObject
{
    CustomRoamDiskDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(CustomRoamDiskDispatcherBridgeObjcImpl *)arg1;
- (void)onInitializeComplete:(unsigned long long)arg1 err:(int)arg2;
- (void)onDeviceErrorEvent:(int)arg1 msg:(id)arg2;
- (void)onUninitComplete:(unsigned long long)arg1 err:(int)arg2;
- (void)onGetRoamDiskInfoComplete:(unsigned long long)arg1 err:(int)arg2 info:(id)arg3;
- (void)onGetFileInfoListComplete:(unsigned long long)arg1 err:(int)arg2 fileInfoList:(id)arg3;
- (void)onGetFileInfoComplete:(unsigned long long)arg1 err:(int)arg2 fileInfo:(id)arg3;
- (void)onGetDirsSizeComplete:(unsigned long long)arg1 error:(int)arg2 dirSize:(id)arg3;
- (void)onDeleteFileComplete:(unsigned long long)arg1 err:(int)arg2;
- (void)onDeleteFileListComplete:(unsigned long long)arg1 overallErr:(int)arg2 errList:(id)arg3;
- (void)onCreateDirComplete:(unsigned long long)arg1 err:(int)arg2;
- (void)onDeleteDirComplete:(unsigned long long)arg1 err:(int)arg2;
- (void)onUploadFileComplete:(unsigned long long)arg1 err:(int)arg2;
- (void)onUploadFileProgressEvent:(unsigned long long)arg1 unitSize:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onDownloadFileComplete:(unsigned long long)arg1 err:(int)arg2;
- (void)onDownloadFileProgressEvent:(unsigned long long)arg1 unitSize:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onFileStreamWriteOnceComplete:(unsigned long long)arg1 err:(int)arg2;
- (void)onFileStreamWriteBeginComplete:(unsigned long long)arg1 err:(int)arg2 context:(id)arg3;
- (void)onFileStreamWriteComplete:(unsigned long long)arg1 err:(int)arg2;
- (void)onFileStreamWriteEndComplete:(unsigned long long)arg1 err:(int)arg2;
- (void)onFileStreamReadBeginComplete:(unsigned long long)arg1 err:(int)arg2 context:(id)arg3 buf:(id)arg4;
- (void)onFileStreamReadComplete:(unsigned long long)arg1 err:(int)arg2 buf:(id)arg3;
@end

