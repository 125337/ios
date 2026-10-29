@interface ActionMusic : NSObject <NSCoding>
{
    NSString * _name; // +0x8
    NSString * _desc; // +0x10
    NSString * _wifiUrl; // +0x18
    NSString * _wapUrl; // +0x20
    NSString * _webUrl; // +0x28
}
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)toXml;
- (id)name;
- (void)setName:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)wifiUrl;
- (void)setWifiUrl:(id)arg1;
- (id)wapUrl;
- (void)setWapUrl:(id)arg1;
- (id)webUrl;
- (void)setWebUrl:(id)arg1;
- (void).cxx_destruct;
@end

