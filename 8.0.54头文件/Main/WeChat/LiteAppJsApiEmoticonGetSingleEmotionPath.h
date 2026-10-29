@interface LiteAppJsApiEmoticonGetSingleEmotionPath : LiteAppJsApi
{
    EmoticonLiteAppSingleDownloadLogic * _downloadLogic; // +0x20
}
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (id)downloadLogic;
- (void)setDownloadLogic:(id)arg1;
- (void).cxx_destruct;
@end

