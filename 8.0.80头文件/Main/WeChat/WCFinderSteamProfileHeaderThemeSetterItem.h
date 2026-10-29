@interface WCFinderSteamProfileHeaderThemeSetterItem : NSObject
{
    NSObject * _target; // +0x8
    NSString * _key; // +0x10
    id /* block */ _updater; // +0x18
}
- (void)invoke:(BOOL)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (id /* block */)updater;
- (void)setUpdater:(id /* block */)arg1;
- (void).cxx_destruct;
@end
