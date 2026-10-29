@interface MMCacheClassification : NSObject
{
    unsigned int _classifyType; // +0x8
    NSString * _classID; // +0x10
    unsigned long long _cacheSize; // +0x18
    id /* block */ _cleanBlock; // +0x20
    NSString * _nickName; // +0x28
    NSMutableArray * _childClassification; // +0x30
}
- (BOOL)isEqual:(id)arg1;
- (id)classifyName;
- (id)classID;
- (void)setClassID:(id)arg1;
- (unsigned int)classifyType;
- (void)setClassifyType:(unsigned int)arg1;
- (unsigned long long)cacheSize;
- (void)setCacheSize:(unsigned long long)arg1;
- (id /* block */)cleanBlock;
- (void)setCleanBlock:(id /* block */)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)childClassification;
- (void)setChildClassification:(id)arg1;
- (void).cxx_destruct;
@end
