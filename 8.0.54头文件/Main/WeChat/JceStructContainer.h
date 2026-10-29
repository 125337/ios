@interface JceStructContainer : NSObject
{
    void * _p; // +0x8
    id /* block */ _allocator; // +0x10
    id /* block */ _deallocator; // +0x18
}
- (id)initWithAllocator:(id /* block */)arg1 andDeallocator:(id /* block */)arg2;
- (void)dealloc;
- (void *)p;
- (id /* block */)allocator;
- (void)setAllocator:(id /* block */)arg1;
- (id /* block */)deallocator;
- (void)setDeallocator:(id /* block */)arg1;
- (void).cxx_destruct;
@end

