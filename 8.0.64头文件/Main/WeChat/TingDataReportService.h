@interface TingDataReportService : NSObject
+ (id)getTing28683Params:(unsigned long long)arg1;
+ (id)getExploreSessionsContext:(unsigned long long)arg1;
+ (id)jsonString2Dictionary:(id)arg1;
- (id)getExploreSessionsContext:(unsigned long long)arg1 params:(id)arg2 activeSessionExtInfo:(id)arg3 activeSessionExtInfo2:(id)arg4;
- (unsigned long long)getUint64Params:(id)arg1 key:(id)arg2;
- (unsigned int)getUint32Params:(id)arg1 key:(id)arg2;
- (id)getStringParams:(id)arg1 key:(id)arg2;
@end
