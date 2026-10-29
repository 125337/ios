@interface MFRItemReportInfo : NSObject
{
    BOOL _isExposed; // +0x8
    BOOL _isFinalUnexposureReason; // +0x9
    unsigned long long _sessionIndex; // +0x10
    WCMomentsFinderRecommendationInfo * _finderRecommendationInfo; // +0x18
    long long _unexposureReason; // +0x20
}
- (unsigned long long)sessionIndex;
- (void)setSessionIndex:(unsigned long long)arg1;
- (id)finderRecommendationInfo;
- (void)setFinderRecommendationInfo:(id)arg1;
- (BOOL)isExposed;
- (void)setIsExposed:(BOOL)arg1;
- (long long)unexposureReason;
- (void)setUnexposureReason:(long long)arg1;
- (BOOL)isFinalUnexposureReason;
- (void)setIsFinalUnexposureReason:(BOOL)arg1;
- (void).cxx_destruct;
@end

