@interface MMExposeH5VersionLogic : MMObject
+ (BOOL)isH5VersionExposeActive;
+ (id)genExposeEntranceUrlWithScene:(unsigned int)arg1;
+ (id)genExposeEntranceUrlWithScene:(unsigned int)arg1 extraQuery:(id)arg2;
+ (void)enterExposeH5InScene:(unsigned int)arg1 withExtraData:(id)arg2 usingNavigationController:(id)arg3;
+ (void)enterExposeH5InScene:(unsigned int)arg1 withExtraData:(id)arg2 usingNavigationController:(id)arg3 forcePortrait:(BOOL)arg4;
+ (void)enterExposeH5InScene:(unsigned int)arg1 withExtraData:(id)arg2 withExtraQuery:(id)arg3 usingNavigationController:(id)arg4;
+ (void)enterExposeH5InScene:(unsigned int)arg1 withExtraData:(id)arg2 withExtraQuery:(id)arg3 usingNavigationController:(id)arg4 forcePortrait:(BOOL)arg5;
+ (void)internalEnterExposeH5InScene:(unsigned int)arg1 withExtraData:(id)arg2 withExtraQuery:(id)arg3 usingNavigationController:(id)arg4 forcePortrait:(BOOL)arg5;
@end

