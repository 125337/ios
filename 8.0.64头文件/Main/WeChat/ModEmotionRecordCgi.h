@interface ModEmotionRecordCgi : StoreEmotionBaseCgi
{
    BOOL _active; // +0x8
    id /* block */ _onFailBlock; // +0x10
    id /* block */ _onSuccessBlock; // +0x18
    NSString * _pid; // +0x20
}
- (id)init;
- (void)startRequestWithOpCode:(int)arg1 pid:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (BOOL)active;
- (void)setActive:(BOOL)arg1;
- (id /* block */)onFailBlock;
- (void)setOnFailBlock:(id /* block */)arg1;
- (id /* block */)onSuccessBlock;
- (void)setOnSuccessBlock:(id /* block */)arg1;
- (id)pid;
- (void)setPid:(id)arg1;
- (void).cxx_destruct;
@end
