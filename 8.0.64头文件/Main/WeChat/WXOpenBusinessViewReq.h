@interface WXOpenBusinessViewReq : BaseReq
{
    NSString * _businessType; // +0x18
    NSString * _query; // +0x20
    NSString * _extInfo; // +0x28
}
+ (id)object;
- (id)businessType;
- (void)setBusinessType:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (void).cxx_destruct;
@end
