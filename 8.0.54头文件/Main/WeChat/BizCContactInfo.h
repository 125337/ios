@interface BizCContactInfo : NSObject
{
    BOOL _fromStrange; // +0x8
    CContact * _contact; // +0x10
}
+ (id)generateBizCContactInfo:(id)arg1 fromStrange:(BOOL)arg2;
- (id)contact;
- (void)setContact:(id)arg1;
- (BOOL)fromStrange;
- (void)setFromStrange:(BOOL)arg1;
- (void).cxx_destruct;
@end

