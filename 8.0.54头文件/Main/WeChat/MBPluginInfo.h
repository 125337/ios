@interface MBPluginInfo : NSObject
{
    NSString * _alias; // +0x8
    NSString * _provider; // +0x10
    NSString * _version; // +0x18
}
- (id)description;
- (id)alias;
- (void)setAlias:(id)arg1;
- (id)provider;
- (void)setProvider:(id)arg1;
- (id)version;
- (void)setVersion:(id)arg1;
- (void).cxx_destruct;
@end

