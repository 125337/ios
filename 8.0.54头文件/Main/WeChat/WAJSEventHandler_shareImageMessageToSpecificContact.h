@interface WAJSEventHandler_shareImageMessageToSpecificContact : WAJSEventHandler_BaseEvent <ForwardMessageLogicDelegate, IHttpCacheExt>
{
    NSString * _imagePath; // +0x8
    NSString * _cacheKey; // +0x10
    ForwardMessageLogicController * m_forwardMessageLogicController; // +0x18
    WAReportImageEntranceShareItem * _reportItem; // +0x20
    NSString * _username; // +0x28
    NSString * _openId; // +0x30
    WAScreenshotContextInfo * _waInfo; // +0x38
}
- (id)init;
- (void)handleJSEvent:(id)arg1;
- (void)shareImageWithData:(id)arg1 username:(id)arg2 openId:(id)arg3 waInfo:(id)arg4;
- (void)shareImageWithData:(id)arg1 username:(id)arg2 waInfo:(id)arg3;
- (void)shareImageWithData:(id)arg1 waInfo:(id)arg2 contact:(id)arg3;
- (unsigned long long)getImageDataWithHttpUrl:(id)arg1 dataPtr:(id *)arg2;
- (id)getImageDataWithLocalId:(id)arg1;
- (id)getImageDataWithPackageRelativeURL:(id)arg1;
- (id)genKeyForUrl:(id)arg1;
- (id)getWAScreenshotContextInfoWithEntrancePath:(id)arg1;
- (void)OnHttpGetFinish:(id)arg1 response:(id)arg2 ErrNo:(int)arg3 isWebp:(BOOL)arg4;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageException:(id)arg1;
- (void)OnForwardMessageConfirmCanceled:(id)arg1;
- (id)getCurrentViewController;
- (void)fetchUsernameWithOpenId:(id)arg1 appId:(id)arg2 complete:(id /* block */)arg3;
- (void)updateReportItemWithContact:(id)arg1 isSuccess:(int)arg2;
- (void).cxx_destruct;
@end

