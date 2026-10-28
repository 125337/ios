@interface WCWeakWraperObject : NSObject
{
    id _weakObject; // +0x8
}
+ (id)wrapperWithWeakObject:(id)arg1;
- (id)initWithWeakObject:(id)arg1;
- (id)weakObject;
- (void)setWeakObject:(id)arg1;
- (void).cxx_destruct;
@end
