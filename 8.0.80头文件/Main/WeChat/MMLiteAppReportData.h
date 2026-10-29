@interface MMLiteAppReportData : NSObject
{
    long long _logType; // +0x8
    long long _logAction; // +0x10
    NSString * _sessionId; // +0x18
    long long _sequenceId; // +0x20
    NSString * _appId; // +0x28
    NSString * _version; // +0x30
    long long _scene; // +0x38
    NSString * _uri; // +0x40
    NSString * _logStringValue; // +0x48
    long long _logUIntValue; // +0x50
    long long _localTimeStamps; // +0x58
    NSDictionary * _extInfo; // +0x60
    NSString * _expandDimension1; // +0x68
    NSString * _expandDimension2; // +0x70
    NSString * _expandDimension3; // +0x78
    long long _logIntValue; // +0x80
    long long _elapsedTimeSinceFirstLog; // +0x88
    long long _samplingRate; // +0x90
}
+ (id)LiteAppReportDataWithLogType:(long long)arg1 logAction:(long long)arg2 sessionId:(id)arg3 sequenceId:(long long)arg4 appId:(id)arg5 version:(id)arg6 scene:(long long)arg7 uri:(id)arg8 logStringValue:(id)arg9 logUIntValue:(long long)arg10 localTimeStamps:(long long)arg11 extInfo:(id)arg12 expandDimension1:(id)arg13 expandDimension2:(id)arg14 expandDimension3:(id)arg15 logIntValue:(long long)arg16 elapsedTimeSinceFirstLog:(long long)arg17 samplingRate:(long long)arg18;
- (id)initWithLogType:(long long)arg1 logAction:(long long)arg2 sessionId:(id)arg3 sequenceId:(long long)arg4 appId:(id)arg5 version:(id)arg6 scene:(long long)arg7 uri:(id)arg8 logStringValue:(id)arg9 logUIntValue:(long long)arg10 localTimeStamps:(long long)arg11 extInfo:(id)arg12 expandDimension1:(id)arg13 expandDimension2:(id)arg14 expandDimension3:(id)arg15 logIntValue:(long long)arg16 elapsedTimeSinceFirstLog:(long long)arg17 samplingRate:(long long)arg18;
- (id)description;
- (long long)logType;
- (long long)logAction;
- (id)sessionId;
- (long long)sequenceId;
- (id)appId;
- (id)version;
- (long long)scene;
- (id)uri;
- (id)logStringValue;
- (long long)logUIntValue;
- (long long)localTimeStamps;
- (id)extInfo;
- (id)expandDimension1;
- (id)expandDimension2;
- (id)expandDimension3;
- (long long)logIntValue;
- (long long)elapsedTimeSinceFirstLog;
- (long long)samplingRate;
- (void).cxx_destruct;
@end
