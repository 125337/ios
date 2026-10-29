@interface EmoticonWordListMeta : NSObject <PBCoding>
{
    unsigned int _type; // +0x8
    unsigned long long _version; // +0x10
    unsigned long long _count; // +0x18
}
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_count;
+ (void)initialize;
+ (id)invalidMeta;
- (id)getPBPropertyTable;
- (id)initWithType:(unsigned int)arg1 version:(unsigned long long)arg2 count:(unsigned long long)arg3;
- (BOOL)isInvalid;
- (id)debugDescription;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (unsigned long long)version;
- (void)setVersion:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)setCount:(unsigned long long)arg1;
@end
