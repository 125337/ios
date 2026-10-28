@interface StorageSessionCache : MMUserService <MMServiceProtocol>
{
    BOOL _loadDone; // +0x8
    unsigned long long _cacheDataSize; // +0x10
    unsigned long long _chatLogSize; // +0x18
    unsigned long long _resourceSize; // +0x20
    unsigned long long _otherAccountSize; // +0x28
    unsigned long long _otherDataSize; // +0x30
    NSMutableArray * _cacheClassification; // +0x38
    id /* block */ _cleanBlock; // +0x40
}
- (id)init;
- (void)onServiceMemoryWarning;
- (void)onServiceClearData;
- (void)dispose:(double)arg1;
- (void)keep;
- (void)reset;
- (BOOL)loadDone;
- (void)setLoadDone:(BOOL)arg1;
- (unsigned long long)cacheDataSize;
- (void)setCacheDataSize:(unsigned long long)arg1;
- (unsigned long long)chatLogSize;
- (void)setChatLogSize:(unsigned long long)arg1;
- (unsigned long long)resourceSize;
- (void)setResourceSize:(unsigned long long)arg1;
- (unsigned long long)otherAccountSize;
- (void)setOtherAccountSize:(unsigned long long)arg1;
- (unsigned long long)otherDataSize;
- (void)setOtherDataSize:(unsigned long long)arg1;
- (id)cacheClassification;
- (void)setCacheClassification:(id)arg1;
- (id /* block */)cleanBlock;
- (void)setCleanBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
