@interface WCFinderAdReportInfo : NSObject
{
    BOOL _hasReportAction; // +0x8
    NSString * _expReportLink; // +0x10
    NSString * _clkReportLink; // +0x18
    NSMutableDictionary * _reportInfo; // +0x20
    NSMutableDictionary * _clickPosMap; // +0x28
    NSString * _feedbackUrl; // +0x30
    unsigned long long _originExposeTimeStamp; // +0x38
    unsigned long long _viewableExposeTimeStamp; // +0x40
    NSMutableArray * _feedbackInfoArray; // +0x48
    unsigned long long _lastReportActionTimeStamp; // +0x50
}
- (id)initWithAdEntryView:(id)arg1 onPosition:(unsigned long long)arg2;
- (void)initFuncParamsWithAdEntryView:(id)arg1 onPosition:(unsigned long long)arg2;
- (id)feedbackInfoArray;
- (id)clickPosMap;
- (id)expReportLink;
- (void)setExpReportLink:(id)arg1;
- (id)clkReportLink;
- (void)setClkReportLink:(id)arg1;
- (id)reportInfo;
- (void)setReportInfo:(id)arg1;
- (void)setClickPosMap:(id)arg1;
- (id)feedbackUrl;
- (void)setFeedbackUrl:(id)arg1;
- (unsigned long long)originExposeTimeStamp;
- (void)setOriginExposeTimeStamp:(unsigned long long)arg1;
- (unsigned long long)viewableExposeTimeStamp;
- (void)setViewableExposeTimeStamp:(unsigned long long)arg1;
- (void)setFeedbackInfoArray:(id)arg1;
- (BOOL)hasReportAction;
- (void)setHasReportAction:(BOOL)arg1;
- (unsigned long long)lastReportActionTimeStamp;
- (void)setLastReportActionTimeStamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

