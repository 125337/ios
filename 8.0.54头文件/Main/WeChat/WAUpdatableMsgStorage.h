@interface WAUpdatableMsgStorage : NSObject
{
    NSMutableDictionary * _dictShareKey2Info; // +0x8
}
- (id)init;
- (void)clearMemoryCache;
- (id)getUpdatableMsgInfoWithShareKey:(id)arg1;
- (BOOL)insertOrUpdateUpdatableMsgInfo:(id)arg1;
- (void).cxx_destruct;
@end

