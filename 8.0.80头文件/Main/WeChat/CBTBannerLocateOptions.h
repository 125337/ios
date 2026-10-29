@interface CBTBannerLocateOptions : NSObject
{
    unsigned long long _businessId; // +0x8
    NSString * _bannerId; // +0x10
    id _userInfo; // +0x18
}
- (unsigned long long)businessId;
- (void)setBusinessId:(unsigned long long)arg1;
- (id)bannerId;
- (void)setBannerId:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (void).cxx_destruct;
@end
