@interface WCDeepLinkHandler : NSObject
+ (void)initialize;
+ (id)deepLinkByName:(id)arg1;
+ (id)getDeepLinkNameFromUrl:(id)arg1;
+ (id)deepLinkByUrl:(id)arg1;
+ (BOOL)isDeepLink:(id)arg1;
+ (BOOL)isActionCodeDeepLink:(id)arg1;
+ (void)jumpDeepLink:(id)arg1 animation:(BOOL)arg2 skipIntermediatePages:(BOOL)arg3;
+ (void)jumpDeepLink:(id)arg1;
+ (void)jumpDeepLink:(id)arg1 skipIntermediatePages:(BOOL)arg2;
+ (void)jumpDeepLinkWithoutBitSetControl:(id)arg1 animation:(BOOL)arg2;
@end
