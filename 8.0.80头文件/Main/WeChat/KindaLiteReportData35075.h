@interface KindaLiteReportData35075 : NSObject
{
    NSString * _uuid; // +0x8
    long long _reportType; // +0x10
    long long _usecase; // +0x18
    long long _scene; // +0x20
    long long _duration; // +0x28
    long long _isReg; // +0x30
    NSString * _transactionid; // +0x38
    NSString * _reqKey; // +0x40
    long long _price; // +0x48
    long long _channel; // +0x50
    long long _reportComponent; // +0x58
    long long _reportAction; // +0x60
    long long _reportActionResult; // +0x68
    long long _routeType; // +0x70
    long long _pageDidBackType; // +0x78
    long long _cmdType; // +0x80
    long long _cmdId; // +0x88
    NSString * _appId; // +0x90
    NSString * _currentRoute; // +0x98
    NSString * _query; // +0xa0
    NSString * _liteappVersion; // +0xa8
    NSString * _baseLibVersion; // +0xb0
    NSString * _routeInfo; // +0xb8
    NSString * _extraString; // +0xc0
    long long _extraNumber; // +0xc8
    NSString * _valueString; // +0xd0
    NSString * _usecaseUrl; // +0xd8
    long long _sequence; // +0xe0
    long long _localTime; // +0xe8
    NSString * _env; // +0xf0
    NSString * _uatId; // +0xf8
    NSString * _nativeReportSessionId; // +0x100
}
+ (id)create;
- (id)init;
- (id)copy;
- (id)uuid;
- (void)setUuid:(id)arg1;
- (long long)reportType;
- (void)setReportType:(long long)arg1;
- (long long)usecase;
- (void)setUsecase:(long long)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (long long)duration;
- (void)setDuration:(long long)arg1;
- (long long)isReg;
- (void)setIsReg:(long long)arg1;
- (id)transactionid;
- (void)setTransactionid:(id)arg1;
- (id)reqKey;
- (void)setReqKey:(id)arg1;
- (long long)price;
- (void)setPrice:(long long)arg1;
- (long long)channel;
- (void)setChannel:(long long)arg1;
- (long long)reportComponent;
- (void)setReportComponent:(long long)arg1;
- (long long)reportAction;
- (void)setReportAction:(long long)arg1;
- (long long)reportActionResult;
- (void)setReportActionResult:(long long)arg1;
- (long long)routeType;
- (void)setRouteType:(long long)arg1;
- (long long)pageDidBackType;
- (void)setPageDidBackType:(long long)arg1;
- (long long)cmdType;
- (void)setCmdType:(long long)arg1;
- (long long)cmdId;
- (void)setCmdId:(long long)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)currentRoute;
- (void)setCurrentRoute:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)liteappVersion;
- (void)setLiteappVersion:(id)arg1;
- (id)baseLibVersion;
- (void)setBaseLibVersion:(id)arg1;
- (id)routeInfo;
- (void)setRouteInfo:(id)arg1;
- (id)extraString;
- (void)setExtraString:(id)arg1;
- (long long)extraNumber;
- (void)setExtraNumber:(long long)arg1;
- (id)valueString;
- (void)setValueString:(id)arg1;
- (id)usecaseUrl;
- (void)setUsecaseUrl:(id)arg1;
- (long long)sequence;
- (void)setSequence:(long long)arg1;
- (long long)localTime;
- (void)setLocalTime:(long long)arg1;
- (id)env;
- (void)setEnv:(id)arg1;
- (id)uatId;
- (void)setUatId:(id)arg1;
- (id)nativeReportSessionId;
- (void)setNativeReportSessionId:(id)arg1;
- (void).cxx_destruct;
@end
