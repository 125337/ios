@interface TuringRiskToken_YOUTU108138v208018 : TuringAnalysisPrediction_YOUTU108138v208018 <NSCopying, NSSecureCoding>
{
    NSString * _message; // +0x20
    NSDate * _outdateDate; // +0x28
    long long _condition; // +0x30
    NSString * _signKey; // +0x38
    NSString * _wxToken; // +0x40
    NSData * _wxSharedKey; // +0x48
    NSDate * _wxOutdateDate; // +0x50
}
+ (BOOL)supportsSecureCoding;
- (id)initWithMessage:(id)arg1 expiredDate:(id)arg2 signKey:(id)arg3;
- (id)initWithError:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (id)outdateDate;
- (void)setOutdateDate:(id)arg1;
- (long long)condition;
- (void)setCondition:(long long)arg1;
- (id)signKey;
- (void)setSignKey:(id)arg1;
- (id)wxToken;
- (id)wxSharedKey;
- (id)wxOutdateDate;
- (void).cxx_destruct;
@end
