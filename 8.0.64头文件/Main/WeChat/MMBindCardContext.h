@interface MMBindCardContext : NSObject
{
    NSString * _bindCardUuid; // +0x8
    NSString * _deviceName; // +0x10
    NSString * _deviceType; // +0x18
}
+ (id)BindCardContextWithBindCardUuid:(id)arg1 deviceName:(id)arg2 deviceType:(id)arg3;
- (id)initWithBindCardUuid:(id)arg1 deviceName:(id)arg2 deviceType:(id)arg3;
- (id)description;
- (id)bindCardUuid;
- (id)deviceName;
- (id)deviceType;
- (void).cxx_destruct;
@end
