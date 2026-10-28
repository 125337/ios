@interface GoodsReqRemoteDetectTask : NSObject
{
    NSString * _reqKey; // +0x8
    unsigned long long _retryCount; // +0x10
    CameraScanGoodsItemExchangeInfo * _exchangeInfo; // +0x18
}
- (id)reqKey;
- (void)setReqKey:(id)arg1;
- (unsigned long long)retryCount;
- (void)setRetryCount:(unsigned long long)arg1;
- (id)exchangeInfo;
- (void)setExchangeInfo:(id)arg1;
- (void).cxx_destruct;
@end
