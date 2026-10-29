@interface EcsShareToContactLogic_Image : EcsShareToContactLogic_Base <IHttpCacheExt>
{
    EcsImageMessageModel * _model; // +0x8
    NSString * _cacheKey; // +0x10
    id /* block */ _pendingMsgWrapCompletion; // +0x18
}
- (id)initWithParams:(id)arg1 extraData:(id)arg2;
- (void)dealloc;
- (id)checkCanShow;
- (void)genMessage:(id /* block */)arg1;
- (void)onShareSuccess:(BOOL)arg1;
- (unsigned long long)_getImageDataWithHttpUrl:(id)arg1 dataPtr:(id *)arg2;
- (id)_genKeyForUrl:(id)arg1;
- (id)_buildMsgWrapFromImageData:(id)arg1;
- (void)_attachWeAppContextInfoIfNeeded:(id)arg1;
- (void)_attachQrcodeContentIfNeeded:(id)arg1;
- (void)OnHttpGetFinish:(id)arg1 response:(id)arg2 ErrNo:(int)arg3 isWebp:(BOOL)arg4;
- (id)model;
- (void)setModel:(id)arg1;
- (id)cacheKey;
- (void)setCacheKey:(id)arg1;
- (id /* block */)pendingMsgWrapCompletion;
- (void)setPendingMsgWrapCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
