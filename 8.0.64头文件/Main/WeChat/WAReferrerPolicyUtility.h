@interface WAReferrerPolicyUtility : NSObject
+ (unsigned long long)typeWithString:(id)arg1;
+ (unsigned long long)typeWithString:(id)arg1 defaultType:(unsigned long long)arg2;
+ (id)refererStringWithReferrerPolicyType:(unsigned long long)arg1 appID:(id)arg2 appVersion:(unsigned long long)arg3;
+ (id)referrerPolicyDict;
@end
