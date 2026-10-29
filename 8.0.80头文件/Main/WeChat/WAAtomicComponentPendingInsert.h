@interface WAAtomicComponentPendingInsert : NSObject
{
    unsigned int _viewId; // +0x8
    unsigned int _parentId; // +0xc
    unsigned int _containerId; // +0x10
    NSDictionary * _position; // +0x18
    long long _zIndex; // +0x20
    NSString * _runtimeAppId; // +0x28
    WAWebViewController * _webviewController; // +0x30
    id /* block */ _completion; // +0x38
    id /* block */ _completionV2; // +0x40
}
- (unsigned int)viewId;
- (void)setViewId:(unsigned int)arg1;
- (unsigned int)parentId;
- (void)setParentId:(unsigned int)arg1;
- (unsigned int)containerId;
- (void)setContainerId:(unsigned int)arg1;
- (id)position;
- (void)setPosition:(id)arg1;
- (long long)zIndex;
- (void)setZIndex:(long long)arg1;
- (id)runtimeAppId;
- (void)setRuntimeAppId:(id)arg1;
- (id)webviewController;
- (void)setWebviewController:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id /* block */)completionV2;
- (void)setCompletionV2:(id /* block */)arg1;
- (void).cxx_destruct;
@end
