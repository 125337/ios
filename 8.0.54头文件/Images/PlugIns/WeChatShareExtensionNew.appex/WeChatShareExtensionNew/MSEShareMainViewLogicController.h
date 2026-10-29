@interface MSEShareMainViewLogicController : NSObject <GETHTMLInfoDelegate>
{
    BOOL _bPublicUrl; // +0x8
    BOOL _didloadUserSelectContent; // +0x9
    id <MSEShareMainViewControllerDelegate> _delegate; // +0x10
    NSString * _shareUrlDesc; // +0x18
    NSExtensionContext * _extensionContext; // +0x20
    NSMutableArray * _selectedImageUrls; // +0x28
    NSMutableArray * _selectedImages; // +0x30
    NSString * _shareUrlTitle; // +0x38
    NSURL * _shareUrl; // +0x40
    NSURL * _shareThumbnailUrl; // +0x48
    NSString * _shareThumbnailFilePath; // +0x50
    NSURL * _selectVideoUrl; // +0x58
    NSString * _sharePlainTextContent; // +0x60
    NSURL * _shareFilePathURL; // +0x68
    NSString * _shareFileName; // +0x70
    long long _shareFileSize; // +0x78
    NSString * _shareFileMd5; // +0x80
    unsigned long long _remainingItemCount; // +0x88
    NSObject<OS_dispatch_semaphore> * _dataLoadSemaphore; // +0x90
    NSString * _commonTipsContent; // +0x98
    long long _currentShareType; // +0xa0
    unsigned long long _currentTargetType; // +0xa8
    NSTimer * _timer; // +0xb0
    MSEHTMLInfoManager * _htmlInfoHandler; // +0xb8
    long long _fileSize; // +0xc0
}
- (void)dealloc;
- (id)initMainLogicControllerWithExtensionContext:(id)arg1;
- (BOOL)checkIsUserLogin;
- (void)loadUserSelectContent;
- (void)onGetFileItem:(id)arg1 ExtItem:(id)arg2 Index:(unsigned long long)arg3;
- (void)checkDidloadUserContentFinish;
- (long long)getExtensionContentType;
- (unsigned long long)getSelectedImgCount;
- (id)getSelectedImgUrls;
- (id)getSelectedVideoUrl;
- (double)getVideoDuration;
- (id)getShareUrlTite;
- (id)getShareUrlContent;
- (id)getShareUrlThumbUrl;
- (id)getShareUrlThumbPath;
- (id)getShareFileTitle;
- (id)getShareFileMd5;
- (id)getShareFileDisplaySize;
- (id)getShareFileIconImageName;
- (id)getTipsContent;
- (BOOL)calcSessionListHasToChangeHeightWithContainerHeight:(double)arg1;
- (void)cancelShare;
- (void)startCompressVideo;
- (void)userConfirmToSharePhoto;
- (BOOL)needShowSendStatusTipsView;
- (id)getMSETransmitData;
- (long long)getFileSize;
- (void)shareToFriends:(id)arg1;
- (void)shareToTimeline:(id)arg1;
- (void)shareToState:(id)arg1;
- (void)shareToFav;
- (void)saveBigImage;
- (void)incrementProcessedExtensionItemsAndCheckFinish;
- (void)handleDataLoadFinished;
- (void)saveURLThumbnail;
- (void)checkIfShareDataInvalid;
- (void)onVideoCompressSuccess:(id)arg1;
- (void)onVideoCompressFail:(id)arg1;
- (void)onMessageRequestSend;
- (void)onTimelineRequestSend;
- (void)onFavRequestSend;
- (void)onTextStatusRequestSend;
- (void)mainVCAllAnimationEnd;
- (void)onRequestSend;
- (void)onGetShareParams:(id)arg1;
- (void)onLoadAndAuthSuccess;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)shareUrlDesc;
- (void)setShareUrlDesc:(id)arg1;
- (BOOL)bPublicUrl;
- (void)setBPublicUrl:(BOOL)arg1;
- (id)extensionContext;
- (void)setExtensionContext:(id)arg1;
- (id)selectedImageUrls;
- (void)setSelectedImageUrls:(id)arg1;
- (id)selectedImages;
- (void)setSelectedImages:(id)arg1;
- (id)shareUrlTitle;
- (void)setShareUrlTitle:(id)arg1;
- (id)shareUrl;
- (void)setShareUrl:(id)arg1;
- (id)shareThumbnailUrl;
- (void)setShareThumbnailUrl:(id)arg1;
- (id)shareThumbnailFilePath;
- (void)setShareThumbnailFilePath:(id)arg1;
- (id)selectVideoUrl;
- (void)setSelectVideoUrl:(id)arg1;
- (id)sharePlainTextContent;
- (void)setSharePlainTextContent:(id)arg1;
- (id)shareFilePathURL;
- (void)setShareFilePathURL:(id)arg1;
- (id)shareFileName;
- (void)setShareFileName:(id)arg1;
- (long long)shareFileSize;
- (void)setShareFileSize:(long long)arg1;
- (id)shareFileMd5;
- (void)setShareFileMd5:(id)arg1;
- (unsigned long long)remainingItemCount;
- (void)setRemainingItemCount:(unsigned long long)arg1;
- (id)dataLoadSemaphore;
- (void)setDataLoadSemaphore:(id)arg1;
- (id)commonTipsContent;
- (void)setCommonTipsContent:(id)arg1;
- (long long)currentShareType;
- (void)setCurrentShareType:(long long)arg1;
- (unsigned long long)currentTargetType;
- (void)setCurrentTargetType:(unsigned long long)arg1;
- (BOOL)didloadUserSelectContent;
- (void)setDidloadUserSelectContent:(BOOL)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (id)htmlInfoHandler;
- (void)setHtmlInfoHandler:(id)arg1;
- (long long)fileSize;
- (void)setFileSize:(long long)arg1;
- (void).cxx_destruct;
@end

