@interface WCFinderEnterExtraReportInfoModel : NSObject
{
    NSString * _jsonInfoByAPI; // +0x8
    NSString * _redDotTipsUuid; // +0x10
    unsigned long long _isPIPEnter; // +0x18
    unsigned long long _pipEnterType; // +0x20
}
- (id)init;
- (id)genReportEnterInfo;
- (id)jsonInfoByAPI;
- (void)setJsonInfoByAPI:(id)arg1;
- (id)redDotTipsUuid;
- (void)setRedDotTipsUuid:(id)arg1;
- (unsigned long long)isPIPEnter;
- (void)setIsPIPEnter:(unsigned long long)arg1;
- (unsigned long long)pipEnterType;
- (void)setPipEnterType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

