@interface TextStatePassthroughIconList : NSObject <PBCoding>
{
    unsigned long long _key; // +0x8
    NSMutableArray * _passthroughIconList; // +0x10
}
+ (void)PBArrayAdd_passthroughIconList;
+ (void)PBArrayAdd_key;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithAgenda:(id)arg1;
- (unsigned long long)key;
- (void)setKey:(unsigned long long)arg1;
- (id)passthroughIconList;
- (void)setPassthroughIconList:(id)arg1;
- (void).cxx_destruct;
@end

