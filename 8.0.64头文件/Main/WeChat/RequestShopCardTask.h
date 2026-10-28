@interface RequestShopCardTask : NSObject
{
    BOOL _ignoreCache; // +0x8
    unsigned int _reqType; // +0xc
    id /* block */ _successCallback; // +0x10
    id /* block */ _failedCallback; // +0x18
    NSMutableArray * _shops; // +0x20
    NSString * _key; // +0x28
}
- (id)getKey;
- (id /* block */)successCallback;
- (void)setSuccessCallback:(id /* block */)arg1;
- (id /* block */)failedCallback;
- (void)setFailedCallback:(id /* block */)arg1;
- (unsigned int)reqType;
- (void)setReqType:(unsigned int)arg1;
- (id)shops;
- (void)setShops:(id)arg1;
- (BOOL)ignoreCache;
- (void)setIgnoreCache:(BOOL)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (void).cxx_destruct;
@end
