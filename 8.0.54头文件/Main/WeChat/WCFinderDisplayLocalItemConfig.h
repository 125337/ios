@interface WCFinderDisplayLocalItemConfig : NSObject
{
    BOOL _hiddenFollowLocalItemWhenNormal; // +0x8
    BOOL _hiddenFollowLocalItemWhenPrefetch; // +0x9
    BOOL _hiddenFriendLocalItemWhenNormal; // +0xa
    BOOL _hiddenFriendLocalItemWhenPrefetch; // +0xb
    BOOL _hiddenMachineLocalItemWhenNormal; // +0xc
    BOOL _hiddenMachineLocalItemWhenPrefetch; // +0xd
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)defaultConfig;
- (BOOL)hiddenFollowLocalItemWhenNormal;
- (void)setHiddenFollowLocalItemWhenNormal:(BOOL)arg1;
- (BOOL)hiddenFollowLocalItemWhenPrefetch;
- (void)setHiddenFollowLocalItemWhenPrefetch:(BOOL)arg1;
- (BOOL)hiddenFriendLocalItemWhenNormal;
- (void)setHiddenFriendLocalItemWhenNormal:(BOOL)arg1;
- (BOOL)hiddenFriendLocalItemWhenPrefetch;
- (void)setHiddenFriendLocalItemWhenPrefetch:(BOOL)arg1;
- (BOOL)hiddenMachineLocalItemWhenNormal;
- (void)setHiddenMachineLocalItemWhenNormal:(BOOL)arg1;
- (BOOL)hiddenMachineLocalItemWhenPrefetch;
- (void)setHiddenMachineLocalItemWhenPrefetch:(BOOL)arg1;
@end

