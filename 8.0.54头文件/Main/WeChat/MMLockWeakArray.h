@interface MMLockWeakArray : NSObject
{
    NSObject * _lock; // +0x8
    NSMutableArray * _realArray; // +0x10
}
- (id)init;
- (void)addObject:(id)arg1;
- (void)remove:(id)arg1;
- (id)objects;
- (void).cxx_destruct;
@end

