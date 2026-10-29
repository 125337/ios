@interface MMMemoryLayout : NSObject
{
    long long _offset; // +0x8
    long long _type; // +0x10
    MMMemoryLayout * _node; // +0x18
    long long _base; // +0x20
}
- (id)initWithDictionary:(id)arg1 base:(long long)arg2;
- (void)resetBase:(long long)arg1;
- (unsigned long long *)ptr;
- (unsigned long long)readST;
- (long long)value;
- (long long)offset;
- (void)setOffset:(long long)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)node;
- (void)setNode:(id)arg1;
- (long long)base;
- (void)setBase:(long long)arg1;
- (void).cxx_destruct;
@end

