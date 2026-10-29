@interface DisplayNavigateMapItem : MMObject
{
    BOOL _isInstalled; // +0x8
    NavigateMap * _map; // +0x10
    NSString * _displayName; // +0x18
}
- (id)initWithMap:(id)arg1 DisplayName:(id)arg2 IsInstalled:(BOOL)arg3;
- (id)map;
- (void)setMap:(id)arg1;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (BOOL)isInstalled;
- (void)setIsInstalled:(BOOL)arg1;
- (void).cxx_destruct;
@end
