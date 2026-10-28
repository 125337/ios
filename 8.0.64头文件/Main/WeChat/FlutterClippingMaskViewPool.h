@interface FlutterClippingMaskViewPool : NSObject
{
    unsigned long long _capacity; // +0x8
    NSMutableSet * _pool; // +0x10
}
- (id)initWithCapacity:(long long)arg1;
- (id)getMaskViewWithFrame:(CGRect)arg1;
- (void)insertViewToPoolIfNeeded:(id)arg1;
- (void)dealloc;
- (unsigned long long)capacity;
- (void)setCapacity:(unsigned long long)arg1;
- (id)pool;
- (void)setPool:(id)arg1;
@end
