@interface WxpayLiteAppRuntimeConfigStore : NSObject
+ (id)lock;
+ (id)currentUin;
+ (BOOL)isValidProfile:(id)arg1;
+ (id)accountScope:(id)arg1;
+ (id)recordKeyForUin:(id)arg1 appId:(id)arg2;
+ (id)kv;
+ (id)unsignedString:(unsigned long long)arg1;
+ (BOOL)parseUnsigned:(id)arg1 into:(unsigned long long *)arg2;
+ (id)emptyRecordForScope:(id)arg1 appId:(id)arg2;
+ (id)decodeRecord:(id)arg1 uin:(id)arg2 appId:(id)arg3;
+ (BOOL)acceptGeneration:(unsigned long long)arg1 payload:(id)arg2 current:(id)arg3;
+ (BOOL)updateUin:(id)arg1 appId:(id)arg2 lane:(id)arg3 generation:(unsigned long long)arg4 releaseId:(unsigned long long)arg5 payload:(id)arg6;
+ (BOOL)publishProfileForUin:(id)arg1 appId:(id)arg2 generation:(unsigned long long)arg3 releaseId:(unsigned long long)arg4 profile:(id)arg5;
+ (id)readProfileForUin:(id)arg1 appId:(id)arg2;
+ (void)clearForUin:(id)arg1 appId:(id)arg2;
+ (id)forcedProfileForAppId:(id)arg1;
@end
