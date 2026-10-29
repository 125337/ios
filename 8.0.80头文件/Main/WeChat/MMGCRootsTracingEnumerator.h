@interface MMGCRootsTracingEnumerator : NSEnumerator
{
    NSSet * _retainedObjectsSnapshot; // +0x8
    NSEnumerator * _enumerator; // +0x10
    MMGCRootsTracingGraphElement * _object; // +0x18
}
- (id)initWithObject:(id)arg1;
- (id)nextObject;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)object;
- (void).cxx_destruct;
@end
