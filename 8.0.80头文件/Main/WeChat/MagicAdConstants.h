@interface MagicAdConstants : NSObject
+ (id)allPosIds;
+ (id)allPosIdDescriptions;
+ (id)allConfigs;
+ (id)configForPosId:(id)arg1;
+ (unsigned char)interceptPolicyForPosId:(id)arg1;
+ (id)interceptSchemeForPosId:(id)arg1;
+ (BOOL)useFallbackForPosId:(id)arg1;
@end
