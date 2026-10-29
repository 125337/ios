@interface KindaLiteReportUtil : NSObject
+ (void)initialize;
+ (void)setGlobalData:(id)arg1;
+ (void)replaceGlobalLiteAppVersion:(id)arg1 baseLibVersion:(id)arg2;
+ (id)mergeData:(id)arg1;
+ (id)replaceComma:(id)arg1;
+ (id)buildReportArray35075:(id)arg1;
+ (id)buildReportString35075:(id)arg1;
+ (void)report35075:(id)arg1;
+ (void)reportAppPayFunnel35075:(long long)arg1 result:(long long)arg2 nativeSessionId:(id)arg3 usecaseUrl:(id)arg4 extra:(id)arg5 value:(id)arg6;
+ (void)reportAppPayFunnel35075:(long long)arg1 result:(long long)arg2 nativeSessionId:(id)arg3 usecaseUrl:(id)arg4 extra:(id)arg5 value:(id)arg6 reqKey:(id)arg7;
+ (BOOL)is993Env;
@end
