@interface DisplayNavigateMapItem : MMObject
{
    NavigateMap * _map; // +0x8
    NSString * _displayName; // +0x10
}
- (id)initWithMap:(id)arg1 DisplayName:(id)arg2;
- (id)map;
- (void)setMap:(id)arg1;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (void).cxx_destruct;
@end

