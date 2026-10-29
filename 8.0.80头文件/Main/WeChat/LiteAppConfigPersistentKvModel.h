@interface LiteAppConfigPersistentKvModel : NSObject
{
    BOOL _enabled; // +0x8
    long long _maxSize; // +0x10
}
- (id)init;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)arg1;
- (long long)maxSize;
- (void)setMaxSize:(long long)arg1;
@end
