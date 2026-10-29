@interface WXOpenBusinessViewResp : BaseResp
{
    NSString * _businessType; // +0x18
    NSString * _extMsg; // +0x20
}
- (id)businessType;
- (void)setBusinessType:(id)arg1;
- (id)extMsg;
- (void)setExtMsg:(id)arg1;
- (void).cxx_destruct;
@end

