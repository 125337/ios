@interface FWFObject : NSObject
{
    FWFObjectFlutterApiImpl * _objectApi; // +0x8
}
- (id)initWithBinaryMessenger:(id)arg1 instanceManager:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)objectApi;
- (void).cxx_destruct;
@end
