@interface EmoticonOperateCgi : StoreEmotionBaseCgi
{
    id /* block */ _onFailBlock; // +0x8
    id /* block */ _onSuccessBlock; // +0x10
    unsigned long long _opCode; // +0x18
    unsigned long long _type; // +0x20
    NSMutableArray * _md5List; // +0x28
    NSString * _versionKey; // +0x30
    NSString * _updatedVersionKey; // +0x38
}
- (id)init;
- (void)startRequestWithOpCode:(unsigned long long)arg1 type:(unsigned long long)arg2 md5List:(id)arg3 originVersionKey:(id)arg4;
- (void)startRequestWithOpCode:(unsigned long long)arg1 type:(unsigned long long)arg2 md5List:(id)arg3 insertPositionMd5:(id)arg4 originVersionKey:(id)arg5;
- (void)startMoveWithType:(unsigned long long)arg1 md5List:(id)arg2 insertPositionMd5:(id)arg3 originVersionKey:(id)arg4;
- (void)callFailedDelegateWithReason:(unsigned long long)arg1 errMsg:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)convertMd5List:(id)arg1;
- (id /* block */)onFailBlock;
- (void)setOnFailBlock:(id /* block */)arg1;
- (id /* block */)onSuccessBlock;
- (void)setOnSuccessBlock:(id /* block */)arg1;
- (unsigned long long)opCode;
- (void)setOpCode:(unsigned long long)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)md5List;
- (void)setMd5List:(id)arg1;
- (id)versionKey;
- (void)setVersionKey:(id)arg1;
- (id)updatedVersionKey;
- (void)setUpdatedVersionKey:(id)arg1;
- (void).cxx_destruct;
@end
