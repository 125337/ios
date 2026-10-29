@interface BizPrivateMsgContext : NSObject
{
    long long _pageType; // +0x8
    long long _serviceType; // +0x10
    NSString * _bizUsername; // +0x18
}
+ (id)contextWithPageType:(long long)arg1 brandContact:(id)arg2 bizUsername:(id)arg3;
+ (id)contextWithPageType:(long long)arg1 fansContact:(id)arg2 bizUsername:(id)arg3;
- (id)initWithPageType:(long long)arg1 serviceType:(long long)arg2 bizUsername:(id)arg3;
- (long long)pageType;
- (long long)serviceType;
- (id)bizUsername;
- (void).cxx_destruct;
@end
