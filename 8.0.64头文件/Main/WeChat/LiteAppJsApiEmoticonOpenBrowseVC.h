@interface LiteAppJsApiEmoticonOpenBrowseVC : LiteAppJsApi
{
    StoreEmotionBatchEmojiDownLoadCgi * _batchCgi; // +0x20
}
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (void)openBrowsePage:(id)arg1 scene:(int)arg2 isHalfScreen:(BOOL)arg3;
- (void)endWithOK;
- (id)getViewController;
- (id)batchCgi;
- (void)setBatchCgi:(id)arg1;
- (void).cxx_destruct;
@end
