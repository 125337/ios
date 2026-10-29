@interface StoreEmotionBatchEmojiDownLoadCgi : StoreEmotionBaseCgi
{
    unsigned int _maxCountPerRequest; // +0x8
    id /* block */ _onFinishBlock; // +0x10
    NSMutableArray * _waitForRequestMd5List; // +0x18
    NSMutableArray * _emojiInfoList; // +0x20
}
- (id)init;
- (BOOL)startRequestWithMd5List:(id)arg1;
- (BOOL)continueRequestIfNeeded;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)onFinishBlock;
- (void)setOnFinishBlock:(id /* block */)arg1;
- (unsigned int)maxCountPerRequest;
- (void)setMaxCountPerRequest:(unsigned int)arg1;
- (id)waitForRequestMd5List;
- (void)setWaitForRequestMd5List:(id)arg1;
- (id)emojiInfoList;
- (void)setEmojiInfoList:(id)arg1;
- (void).cxx_destruct;
@end
