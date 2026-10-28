@interface WCFinderRedDotBusinessReportModel : NSObject
{
    BOOL _isClick; // +0x8
    BOOL _isClickWithRedDot; // +0x9
    NSString * _path; // +0x10
    unsigned long long _businessType; // +0x18
    NSString * _redDotId; // +0x20
    long long _accRedDotExpStartTime; // +0x28
    long long _accRedDotExpCnt; // +0x30
    long long _accRedDotBanCnt; // +0x38
    long long _stayTimeMs; // +0x40
    long long _backStayTimeMs; // +0x48
    WCFinderRedDotFrequencyInfo * _frequencyInfo; // +0x50
    long long _cleanAccNType; // +0x58
    NSMutableDictionary * _extInfoDic; // +0x60
    double _ctrValue; // +0x68
}
+ (BOOL)enableReportLimitInfoFromPath:(id)arg1;
+ (long long)calcRemainAccNValueFromExptCnt:(long long)arg1 accStage:(long long)arg2 path:(id)arg3 businessType:(unsigned long long)arg4;
+ (long long)calcRemainPunishMValueFromBanCnt:(long long)arg1 punishStage:(long long)arg2 path:(id)arg3 businessType:(unsigned long long)arg4;
- (id)initWithPath:(id)arg1 businessType:(unsigned long long)arg2;
- (id)genReportInfo;
- (id)frequencyInfo;
- (BOOL)hasRedDot;
- (id)path;
- (void)setPath:(id)arg1;
- (unsigned long long)businessType;
- (void)setBusinessType:(unsigned long long)arg1;
- (id)redDotId;
- (void)setRedDotId:(id)arg1;
- (long long)accRedDotExpStartTime;
- (void)setAccRedDotExpStartTime:(long long)arg1;
- (long long)accRedDotExpCnt;
- (void)setAccRedDotExpCnt:(long long)arg1;
- (long long)accRedDotBanCnt;
- (void)setAccRedDotBanCnt:(long long)arg1;
- (BOOL)isClick;
- (void)setIsClick:(BOOL)arg1;
- (BOOL)isClickWithRedDot;
- (void)setIsClickWithRedDot:(BOOL)arg1;
- (long long)stayTimeMs;
- (void)setStayTimeMs:(long long)arg1;
- (long long)backStayTimeMs;
- (void)setBackStayTimeMs:(long long)arg1;
- (void)setFrequencyInfo:(id)arg1;
- (long long)cleanAccNType;
- (void)setCleanAccNType:(long long)arg1;
- (id)extInfoDic;
- (void)setExtInfoDic:(id)arg1;
- (double)ctrValue;
- (void)setCtrValue:(double)arg1;
- (void).cxx_destruct;
@end
