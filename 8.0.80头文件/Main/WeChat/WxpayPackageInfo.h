@interface WxpayPackageInfo : NSObject
{
    NSString * _appId; // +0x8
    NSString * _version; // +0x10
    NSString * _type; // +0x18
}
+ (id)infoWithAppId:(id)arg1 version:(id)arg2 type:(id)arg3;
- (id)appId;
- (id)version;
- (id)type;
- (void).cxx_destruct;
@end
