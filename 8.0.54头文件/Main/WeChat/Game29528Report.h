@interface Game29528Report : NSObject
{
    BOOL _needReport; // +0x8
    BOOL _isLaunchApp; // +0x9
    int _reportStage; // +0xc
    int _reportResult; // +0x10
    NSString * _appId; // +0x18
    NSMutableDictionary * _errorInfoDict; // +0x20
    NSMutableDictionary * _externInfoDict; // +0x28
    NSString * _currentUrl; // +0x30
    NSString * _appStoreUrl; // +0x38
    GameLaunchReportInfo * _reportInfo; // +0x40
}
+ (id)reportModelWithAppId:(id)arg1 reportStage:(int)arg2 reportResult:(int)arg3 errorInfoDict:(id)arg4 externInfoDict:(id)arg5 needReport:(BOOL)arg6;
- (id)init;
- (void)report;
- (void)addExternInfo:(id)arg1;
- (void)addErrorInfo:(id)arg1;
- (id)toString;
- (id)appId;
- (void)setAppId:(id)arg1;
- (int)reportStage;
- (void)setReportStage:(int)arg1;
- (int)reportResult;
- (void)setReportResult:(int)arg1;
- (id)errorInfoDict;
- (void)setErrorInfoDict:(id)arg1;
- (id)externInfoDict;
- (void)setExternInfoDict:(id)arg1;
- (BOOL)needReport;
- (void)setNeedReport:(BOOL)arg1;
- (id)currentUrl;
- (void)setCurrentUrl:(id)arg1;
- (id)appStoreUrl;
- (void)setAppStoreUrl:(id)arg1;
- (BOOL)isLaunchApp;
- (void)setIsLaunchApp:(BOOL)arg1;
- (id)reportInfo;
- (void)setReportInfo:(id)arg1;
- (void).cxx_destruct;
@end

