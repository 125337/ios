@interface WCTopicSearchActionLogic : MMObject <PBMessageObserverDelegate, IStoreEmotionSingleDownloadMgrExt>
{
    EmoticonUploader * _uploader; // +0x8
    WKWebView * _resultWebView; // +0x10
    NSMutableDictionary * _dictEmotionRequestWrappers; // +0x18
}
+ (BOOL)isStoreEmoticon:(unsigned int)arg1;
+ (BOOL)isCustomEmoticon:(unsigned int)arg1;
- (id)init;
- (void)dealloc;
- (void)cancelAllRequest;
- (void)requestSearchShareDataFromSearchParams:(id)arg1 resultBlock:(id /* block */)arg2;
- (void)requestEmoticonSearchShareDataFromSearchParams:(id)arg1 resultBlock:(id /* block */)arg2;
- (void)requestSearchShareDataFromSearchParams:(id)arg1 requestWrapper:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetSearchShareResponseWraper:(id)arg1;
- (void)handleGetTopicSearchShareResponseWraper:(id)arg1 wrapper:(id)arg2;
- (void)handleGetEmoticonSearchShareResponseWraper:(id)arg1 wrapper:(id)arg2;
- (void)genWeappPageMsgWrapFromWeAppShare:(id)arg1 requestWrapper:(id)arg2;
- (void)shareWeappPageWithThumbUrl:(id)arg1 weAppShare:(id)arg2 requestWrapper:(id)arg3;
- (void)shareWeappPageWithSnapRect:(CGRect)arg1 weAppShare:(id)arg2 requestWrapper:(id)arg3;
- (id)snapShotWebviewImageIniOS10WithSnapRect:(CGRect)arg1;
- (void)downloadEmotionData:(id)arg1 requestWrapper:(id)arg2;
- (void)downloadLiteAppThumbnail:(id)arg1;
- (void)genEmotionMsgWrapFromSearchResponseShare:(id)arg1 imageData:(id)arg2 requestWrapper:(id)arg3;
- (void)downloadStoreEmotion:(id)arg1 requestWrapper:(id)arg2;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (id)resultWebView;
- (void)setResultWebView:(id)arg1;
- (id)dictEmotionRequestWrappers;
- (void)setDictEmotionRequestWrappers:(id)arg1;
- (void).cxx_destruct;
@end

