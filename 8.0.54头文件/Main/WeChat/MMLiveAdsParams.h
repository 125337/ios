@interface MMLiveAdsParams : NSObject
{
    BOOL _isAdsLive; // +0x8
    BOOL _hasReportAction; // +0x9
    NSString * _feedbackUrl; // +0x10
    id /* block */ _adsSuccess; // +0x18
    NSMutableArray * _feedbackInfoArray; // +0x20
    unsigned long long _originExposeTimeStamp; // +0x28
    unsigned long long _lastReportActionTimeStamp; // +0x30
    unsigned long long _viewableExposeTimeStamp; // +0x38
    NSDictionary * _reportInfo; // +0x40
    NSString * _expReportLink; // +0x48
    NSString * _clkReportLink; // +0x50
    unsigned long long _rewardTime; // +0x58
}
- (id)init;
- (BOOL)isAdsLive;
- (void)setIsAdsLive:(BOOL)arg1;
- (id)feedbackUrl;
- (void)setFeedbackUrl:(id)arg1;
- (id /* block */)adsSuccess;
- (void)setAdsSuccess:(id /* block */)arg1;
- (id)feedbackInfoArray;
- (void)setFeedbackInfoArray:(id)arg1;
- (unsigned long long)originExposeTimeStamp;
- (void)setOriginExposeTimeStamp:(unsigned long long)arg1;
- (unsigned long long)lastReportActionTimeStamp;
- (void)setLastReportActionTimeStamp:(unsigned long long)arg1;
- (unsigned long long)viewableExposeTimeStamp;
- (void)setViewableExposeTimeStamp:(unsigned long long)arg1;
- (BOOL)hasReportAction;
- (void)setHasReportAction:(BOOL)arg1;
- (id)reportInfo;
- (void)setReportInfo:(id)arg1;
- (id)expReportLink;
- (void)setExpReportLink:(id)arg1;
- (id)clkReportLink;
- (void)setClkReportLink:(id)arg1;
- (unsigned long long)rewardTime;
- (void)setRewardTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

