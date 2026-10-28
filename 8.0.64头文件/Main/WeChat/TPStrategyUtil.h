@interface TPStrategyUtil : NSObject
+ (BOOL)canUseThumbPlayerForVideo:(id)arg1;
+ (BOOL)canUseSystemPlayerForVideo:(id)arg1;
+ (id)convertPlayerTypeToString:(long long)arg1;
+ (id)convertPlayerSceneToString:(long long)arg1;
+ (BOOL)canDecodeByHadrwareForVideo:(id)arg1;
+ (BOOL)canDecodeBySoftwareForVideo:(id)arg1;
@end
