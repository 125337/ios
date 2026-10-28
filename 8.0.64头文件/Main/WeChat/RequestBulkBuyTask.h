@interface RequestBulkBuyTask : NSObject
{
    id /* block */ _successCallback; // +0x8
    id /* block */ _failedCallback; // +0x10
    EcsInfoItem * _data; // +0x18
    NSString * _key; // +0x20
}
- (id)getKey;
- (id /* block */)successCallback;
- (void)setSuccessCallback:(id /* block */)arg1;
- (id /* block */)failedCallback;
- (void)setFailedCallback:(id /* block */)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (void).cxx_destruct;
@end
