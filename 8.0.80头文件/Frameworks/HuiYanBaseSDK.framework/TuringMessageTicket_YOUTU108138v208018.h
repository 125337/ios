@interface TuringMessageTicket_YOUTU108138v208018 : TuringAnalysisPrediction_YOUTU108138v208018 <NSCopying, NSSecureCoding>
{
    float _confidence; // +0x20
    NSString * _ticket; // +0x28
    long long _condition; // +0x30
    NSString * _analysisTicket; // +0x38
    NSDate * _outdateDate; // +0x40
}
+ (BOOL)supportsSecureCoding;
- (id)initWithTicket:(id)arg1 confidence:(float)arg2;
- (id)initWithError:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)ticket;
- (void)setTicket:(id)arg1;
- (float)posibility;
- (void)setPosibility:(float)arg1;
- (long long)condition;
- (void)setCondition:(long long)arg1;
- (id)analysisTicket;
- (void)setAnalysisTicket:(id)arg1;
- (id)outdateDate;
- (void)setOutdateDate:(id)arg1;
- (void).cxx_destruct;
@end
