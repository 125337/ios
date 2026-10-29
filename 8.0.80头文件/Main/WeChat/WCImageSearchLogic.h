@interface WCImageSearchLogic : MMObject <MsgDataDownloadDelegate, IScanGoodsServiceExt, MMImageDetectUploaderDelegate>
{
    int _detectImageEventID; // +0x8
    id <WCImageSearchEventDelegate> _delegate; // +0x10
    MsgDataDownloadLogic * _imageDownloadLogic; // +0x18
    WCWebSearchViewControllerNewH5 * _webSearchVC; // +0x20
    WCImageSearchEntity * _searchEntity; // +0x28
    MMImageDetectUploader * _uploader; // +0x30
}
- (id)initWithSearchEntity:(id)arg1;
- (void)dealloc;
- (void)startRecognize;
- (void)reportJumpLoadingView;
- (void)tryStartDownloadImageIfNeed;
- (void)onImageDetectUploadFinish:(unsigned int)arg1 context:(id)arg2 detectMediaInfo:(id)arg3;
- (void)onSendPressImageInfoSuccess:(id)arg1;
- (void)onSendPressImageInfoFail:(id)arg1 errorCode:(long long)arg2 errorMsg:(id)arg3 isNetworkError:(BOOL)arg4;
- (void)onDownloadSuccess:(id)arg1;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (id)curViewController;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)detectImageEventID;
- (void)setDetectImageEventID:(int)arg1;
- (id)imageDownloadLogic;
- (void)setImageDownloadLogic:(id)arg1;
- (id)webSearchVC;
- (void)setWebSearchVC:(id)arg1;
- (id)searchEntity;
- (void)setSearchEntity:(id)arg1;
- (id)uploader;
- (void)setUploader:(id)arg1;
- (void).cxx_destruct;
@end
