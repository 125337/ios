@interface PMKArray : NSObject
{
    id[3] objs; // +0x8
    unsigned long long count; // +0x20
}
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

