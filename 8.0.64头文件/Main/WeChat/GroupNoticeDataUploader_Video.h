@interface GroupNoticeDataUploader_Video : GroupNoticeDataUploader
{
    BOOL _compressVideoFail; // +0x8
    id /* block */ _completeBlock; // +0x10
}
- (void)startUploadData:(id /* block */)arg1;
- (BOOL)readyToUploadData;
- (void)onFavVideoCompressFinish:(id)arg1 isSuccess:(BOOL)arg2;
- (BOOL)compressVideoFail;
- (void)setCompressVideoFail:(BOOL)arg1;
- (id /* block */)completeBlock;
- (void)setCompleteBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
