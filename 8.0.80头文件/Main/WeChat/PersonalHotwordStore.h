@interface PersonalHotwordStore : NSObject
{
    BOOL _closing; // +0x8
    BOOL _closed; // +0x9
    NSString * _userMd5; // +0x10
    NSString * _libraryID; // +0x18
    unsigned long long _maxWordCount; // +0x20
    double _expirationInterval; // +0x28
    NSString * _storageID; // +0x30
    MemoryMappedKV * _kv; // +0x38
    NSMutableArray * _closeCompletions; // +0x40
}
+ (id)activeStores;
+ (id)errorWithCode:(long long)arg1 description:(id)arg2;
+ (id)storeWithLibraryID:(id)arg1 maxWordCount:(unsigned long long)arg2 expirationInterval:(double)arg3 error:(id *)arg4;
+ (long long)compareRecord:(id)arg1 toRecord:(id)arg2 ascending:(BOOL)arg3;
+ (id)exportRecord:(id)arg1;
+ (id)issueWithInput:(id)arg1 index:(unsigned long long)arg2 error:(id)arg3;
+ (void)deliverResult:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
+ (void)deliverError:(id)arg1 completion:(id /* block */)arg2;
- (void)enqueueOperation:(id /* block */)arg1 onClosed:(id /* block */)arg2;
- (id)ensureOpen;
- (id)readAccessError;
- (id)recordForKey:(id)arg1 now:(double)arg2 error:(id *)arg3;
- (id)recordsExcludingKeys:(id)arg1 now:(double)arg2 error:(id *)arg3;
- (void)evictRecords:(id)arg1 count:(unsigned long long)arg2;
- (void)commitInputs:(id)arg1 completion:(id /* block */)arg2;
- (void)commitSnapshot:(id)arg1 completion:(id /* block */)arg2;
- (id)queryWordForKey:(id)arg1 error:(id *)arg2;
- (id)exportWordsWithError:(id *)arg1;
- (void)removeWordForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)clearAllWithCompletion:(id /* block */)arg1;
- (void)closeWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)userMd5;
- (void)setUserMd5:(id)arg1;
- (id)libraryID;
- (void)setLibraryID:(id)arg1;
- (unsigned long long)maxWordCount;
- (void)setMaxWordCount:(unsigned long long)arg1;
- (double)expirationInterval;
- (void)setExpirationInterval:(double)arg1;
- (id)storageID;
- (void)setStorageID:(id)arg1;
- (id)kv;
- (void)setKv:(id)arg1;
- (BOOL)closing;
- (void)setClosing:(BOOL)arg1;
- (BOOL)closed;
- (void)setClosed:(BOOL)arg1;
- (id)closeCompletions;
- (void)setCloseCompletions:(id)arg1;
- (void).cxx_destruct;
@end
