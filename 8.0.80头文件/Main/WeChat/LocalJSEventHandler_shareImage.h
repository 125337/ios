@interface LocalJSEventHandler_shareImage : LocalJSEventHandler_BaseEvent <ForwardMessageLogicDelegate, IHttpCacheExt, WCActionSheetDelegate, WCCommitViewResultDelegate>
{
    BOOL _isDownloadingImage; // +0x8
    BOOL _willShareToFriend; // +0x9
    BOOL _willShareToTimeLine; // +0xa
    NSString * _cacheKey; // +0x10
    NSData * _imageData; // +0x18
}
- (id)init;
- (void)handleJSEvent:(id)arg1;
- (void)showActionSheet;
- (void)getImageDataWithHttpUrl:(id)arg1;
- (id)genKeyForUrl:(id)arg1;
- (void)tryShareToDestination:(unsigned long long)arg1;
- (void)shareImageToFriendWithData:(id)arg1;
- (void)shareImageToTimeLineWithData:(id)arg1;
- (void)OnHttpGetFinish:(id)arg1 response:(id)arg2 ErrNo:(int)arg3 isWebp:(BOOL)arg4;
- (id)getCurrentViewController;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (id)cacheKey;
- (void)setCacheKey:(id)arg1;
- (id)imageData;
- (void)setImageData:(id)arg1;
- (BOOL)isDownloadingImage;
- (void)setIsDownloadingImage:(BOOL)arg1;
- (BOOL)willShareToFriend;
- (void)setWillShareToFriend:(BOOL)arg1;
- (BOOL)willShareToTimeLine;
- (void)setWillShareToTimeLine:(BOOL)arg1;
- (void).cxx_destruct;
@end
