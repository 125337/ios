@interface WAMainListReporter : WAReportBaseItem
{
    long long _opType; // +0x8
    long long _iconType; // +0x10
    long long _stayDuration; // +0x18
    long long _opLocation; // +0x20
    NSString * _appUin; // +0x28
    long long _appCount; // +0x30
    long long _reportSessionId; // +0x38
    NSMutableDictionary * _exposureItemMap; // +0x40
    long long _vcDidShowTime; // +0x48
}
+ (id)createWithOperateType:(long long)arg1 sessionId:(long long)arg2;
- (void)report;
- (void)markDidShowMainListVC;
- (void)markDidHiddenMainListVC;
- (void)markDidExposureItemByAppId:(id)arg1;
- (int)reportID;
- (id)reportString;
- (long long)opType;
- (void)setOpType:(long long)arg1;
- (long long)iconType;
- (void)setIconType:(long long)arg1;
- (long long)stayDuration;
- (long long)opLocation;
- (void)setOpLocation:(long long)arg1;
- (id)appUin;
- (void)setAppUin:(id)arg1;
- (long long)appCount;
- (long long)reportSessionId;
- (void)setReportSessionId:(long long)arg1;
- (id)exposureItemMap;
- (void)setExposureItemMap:(id)arg1;
- (long long)vcDidShowTime;
- (void)setVcDidShowTime:(long long)arg1;
- (void).cxx_destruct;
@end

