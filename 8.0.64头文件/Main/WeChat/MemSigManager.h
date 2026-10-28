@interface MemSigManager : NSObject <NSCoding>
{
    NSMutableDictionary * sigDict; // +0x8
}
- (id)init;
- (void)dealloc;
- (void)addSig:(id)arg1;
- (id)sigByName:(id)arg1;
- (void)printSig;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@end
