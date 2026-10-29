@interface WCFinderSteamProfileHeaderTheme : NSObject
{
    BOOL _hasCover; // +0x8
    NSMapTable * _items; // +0x10
}
- (void)cleanUp:(id)arg1 key:(id)arg2;
- (void)config:(id)arg1 key:(id)arg2 updateBlock:(id /* block */)arg3;
- (void)config:(id)arg1 setupSeletor:(SEL)arg2 normal:(id)arg3 coverObj:(id)arg4;
- (void)setHasCover:(BOOL)arg1;
- (void)setBackgroundColor:(id)arg1 forView:(id)arg2;
- (void)setTextColor:(id)arg1 forLabel:(id)arg2;
- (void)setTitleColor:(id)arg1 forButton:(id)arg2;
- (void)setImage:(id /* block */)arg1 withColor:(id)arg2 forImageView:(id)arg3;
- (void)setImage:(id /* block */)arg1 withColor:(id)arg2 forButton:(id)arg3;
- (BOOL)hasCover;
- (id)items;
- (void)setItems:(id)arg1;
- (void).cxx_destruct;
@end

