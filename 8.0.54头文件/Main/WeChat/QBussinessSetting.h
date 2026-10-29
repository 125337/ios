@interface QBussinessSetting : NSObject
{
    NSString * _sdk_protocol; // +0x8
    NSString * __private_partner; // +0x10
    QBusinessConf * _business_conf; // +0x18
    NSDictionary * _services; // +0x20
}
+ (BOOL)validateDict:(id)arg1 withAPIKey:(id)arg2;
- (id)initWithDict:(id)arg1;
- (id)sdk_protocol;
- (void)setSdk_protocol:(id)arg1;
- (id)_private_partner;
- (void)set_private_partner:(id)arg1;
- (id)business_conf;
- (void)setBusiness_conf:(id)arg1;
- (id)services;
- (void)setServices:(id)arg1;
- (void).cxx_destruct;
@end

