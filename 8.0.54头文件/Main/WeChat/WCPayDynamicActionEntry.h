@interface WCPayDynamicActionEntry : NSObject
{
    int _entrance_type; // +0x8
    NSString * _dialogId; // +0x10
    NSString * _wording; // +0x18
    NSString * _color; // +0x20
    long long _type; // +0x28
    NSString * _nativeUrl; // +0x30
    NSString * _webUrl; // +0x38
    NSString * _tinyAppUsername; // +0x40
    NSString * _tinyAppPath; // +0x48
}
+ (id)genFromDict:(id)arg1;
- (id)dialogId;
- (void)setDialogId:(id)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)nativeUrl;
- (void)setNativeUrl:(id)arg1;
- (id)webUrl;
- (void)setWebUrl:(id)arg1;
- (id)tinyAppUsername;
- (void)setTinyAppUsername:(id)arg1;
- (id)tinyAppPath;
- (void)setTinyAppPath:(id)arg1;
- (int)entrance_type;
- (void)setEntrance_type:(int)arg1;
- (void).cxx_destruct;
@end

