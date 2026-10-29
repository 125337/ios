@interface WxpayStoreEntry : NSObject
{
    BOOL _failed; // +0x8
    NSString * _packagePath; // +0x10
    long long _references; // +0x18
    long long _retainSeconds; // +0x20
    unsigned long long _generation; // +0x28
}
- (id)packagePath;
- (void)setPackagePath:(id)arg1;
- (long long)references;
- (void)setReferences:(long long)arg1;
- (long long)retainSeconds;
- (void)setRetainSeconds:(long long)arg1;
- (unsigned long long)generation;
- (void)setGeneration:(unsigned long long)arg1;
- (BOOL)failed;
- (void)setFailed:(BOOL)arg1;
- (void).cxx_destruct;
@end
