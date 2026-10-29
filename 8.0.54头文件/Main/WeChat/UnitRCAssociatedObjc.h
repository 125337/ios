@interface UnitRCAssociatedObjc : NSObject
{
    recursive_mutex _mutex; // +0x8
    shared_ptr<unit_rc::BaseRC> _strongCpp; // +0x48
    weak_ptr<unit_rc::BaseRC> _weakCpp; // +0x58
}
- (id)initWithStrongCpp:(const void *)arg1;
- (id)initWithWeakCpp:(const void *)arg1;
- (void)setStrongCpp:(const void *)arg1;
- (void)setWeakCpp:(const void *)arg1;
- (shared_ptr<unit_rc::BaseRC>)strongCpp;
- (weak_ptr<unit_rc::BaseRC>)weakCpp;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

