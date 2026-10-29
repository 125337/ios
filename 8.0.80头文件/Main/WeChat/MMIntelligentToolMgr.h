@interface MMIntelligentToolMgr : MMUserService <MMServiceProtocol>
{
    NSRecursiveLock * _ocrLock; // +0x8
}
- (id)init;
- (void)initData;
- (id)getExternalLinkFeatureWithImage:(id)arg1;
- (id)getModelPath;
- (id)getWebviewLinkFeatureWithImage:(id)arg1;
- (id)getWebviewLinkFeatureModelPath;
- (id)getWebviewOutLinkClassifyFeatureWithImage:(id)arg1;
- (id)getWebviewOutLinkClassifyFeatureModelPath;
- (id)getImageFeatureForNewLifeWithImage:(id)arg1;
- (id)getOcrTextWithImage:(id)arg1;
- (id)getOcrLineTextWithImage:(id)arg1;
- (BOOL)releaseOcrXNetCache;
- (id)generatePHashWithImage:(id)arg1;
- (id)getClassificationWithImage:(id)arg1;
- (id)getCodeClassify:(id)arg1 rect:(CGRect)arg2 ocrText:(id)arg3;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void).cxx_destruct;
@end
