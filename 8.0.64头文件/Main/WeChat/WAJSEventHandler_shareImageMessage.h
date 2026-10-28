@interface WAJSEventHandler_shareImageMessage : WAJSEventHandler_BaseEvent <ForwardMessageLogicDelegate, IHttpCacheExt>
{
    NSString * _imagePath; // +0x8
    NSString * _cacheKey; // +0x10
    ForwardMessageLogicController * m_forwardMessageLogicController; // +0x18
    BOOL _needShowEntrance; // +0x20
    NSString * _entrancePath; // +0x28
    WAReportImageEntranceShareItem * _reportItem; // +0x30
    BOOL _useForChatTool; // +0x38
    BOOL _isToSpecificContact; // +0x39
}
- (id)init;
- (void)handleJSEvent:(id)arg1;
- (void)shareImageWithData:(id)arg1 needShowEntrance:(BOOL)arg2 entrancePath:(id)arg3;
- (unsigned long long)getImageDataWithHttpUrl:(id)arg1 dataPtr:(id *)arg2;
- (id)getImageDataWithLocalId:(id)arg1;
- (id)getImageDataWithPackageRelativeURL:(id)arg1;
- (id)genKeyForUrl:(id)arg1;
- (void)OnHttpGetFinish:(id)arg1 response:(id)arg2 ErrNo:(int)arg3 isWebp:(BOOL)arg4;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageException:(id)arg1;
- (void)OnForwardMessageConfirmCanceled:(id)arg1;
- (id)getCurrentViewController;
- (BOOL)isToSpecificContact;
- (void)setIsToSpecificContact:(BOOL)arg1;
- (void).cxx_destruct;
@end
