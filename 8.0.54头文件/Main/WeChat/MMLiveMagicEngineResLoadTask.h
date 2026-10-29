@interface MMLiveMagicEngineResLoadTask : NSObject
{
    BOOL _enforceIntegrityCheck; // +0x8
    NSString * _productId; // +0x10
    NSString * _targetUrl; // +0x18
    NSString * _fileMD5; // +0x20
    NSMutableArray * _callbackList; // +0x28
    unsigned long long _currLoadState; // +0x30
    id /* block */ _loadStateChangeCallback; // +0x38
}
- (id)initWithProductId:(id)arg1 url:(id)arg2 md5:(id)arg3;
- (void)invokeCallbacksWithResult:(unsigned long long)arg1 path:(id)arg2;
- (void)updateLoadState:(unsigned long long)arg1;
- (id)callbackList;
- (id)description;
- (id)productId;
- (void)setProductId:(id)arg1;
- (id)targetUrl;
- (void)setTargetUrl:(id)arg1;
- (id)fileMD5;
- (void)setFileMD5:(id)arg1;
- (BOOL)enforceIntegrityCheck;
- (void)setEnforceIntegrityCheck:(BOOL)arg1;
- (void)setCallbackList:(id)arg1;
- (unsigned long long)currLoadState;
- (void)setCurrLoadState:(unsigned long long)arg1;
- (id /* block */)loadStateChangeCallback;
- (void)setLoadStateChangeCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end

