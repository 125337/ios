@interface EmoticonCheckCameraFollowLogic : NSObject <StoreEmotionExchangeEmotionPackCgiDelegate>
{
    NSString * _loadingText; // +0x8
    id /* block */ _getVcBlock; // +0x10
    id /* block */ _finishBlock; // +0x18
    StoreEmotionExchangeEmotionPackCgi * _exchangePackCgi; // +0x20
    NSString * _productId; // +0x28
    NSString * _emoticonMd5; // +0x30
}
+ (BOOL)shouldCheck:(id)arg1;
- (void)startCheck:(id)arg1 emoticonMd5:(id)arg2 getVcBlock:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)showComfirmTipsWithWording:(id)arg1;
- (void)onExchangeEmotionPackCgiOkWithPid:(id)arg1 DownloadInfo:(id)arg2;
- (void)onExchangeEmotionPackCgiFailedForNoResponseWithPid:(id)arg1;
- (void)onExchangeEmotionPackCgiFailedWithPid:(id)arg1 AndRet:(int)arg2 ErroMsg:(id)arg3;
- (id)loadingText;
- (void)setLoadingText:(id)arg1;
- (id /* block */)getVcBlock;
- (void)setGetVcBlock:(id /* block */)arg1;
- (id /* block */)finishBlock;
- (void)setFinishBlock:(id /* block */)arg1;
- (id)exchangePackCgi;
- (void)setExchangePackCgi:(id)arg1;
- (id)productId;
- (void)setProductId:(id)arg1;
- (id)emoticonMd5;
- (void)setEmoticonMd5:(id)arg1;
- (void).cxx_destruct;
@end

