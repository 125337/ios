@interface WCAdExpParamsElementInfo : NSObject <NSCoding>
{
    BOOL _report; // +0x8
    NSString * _expId; // +0x10
    NSString * _expValue; // +0x18
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)expId;
- (void)setExpId:(id)arg1;
- (id)expValue;
- (void)setExpValue:(id)arg1;
- (BOOL)report;
- (void)setReport:(BOOL)arg1;
- (void).cxx_destruct;
@end

