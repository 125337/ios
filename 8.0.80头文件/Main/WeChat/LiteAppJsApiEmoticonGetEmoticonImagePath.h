@interface LiteAppJsApiEmoticonGetEmoticonImagePath : LiteAppJsApi
{
    EmoticonLiteAppSingleDownloadLogic * _downloadLogic; // +0x20
}
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (id)downloadLogic;
- (void)setDownloadLogic:(id)arg1;
- (void).cxx_destruct;
@end
