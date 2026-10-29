@interface WAGameDirectPlayBoxGameItem : NSObject
{
    BOOL _isEphemeralPin; // +0x8
    NSString * _appId; // +0x10
    NSString * _appName; // +0x18
    NSString * _icon; // +0x20
    NSString * _sourceType; // +0x28
    NSDictionary * _extraInfo; // +0x30
}
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (id)sourceType;
- (void)setSourceType:(id)arg1;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (BOOL)isEphemeralPin;
- (void)setIsEphemeralPin:(BOOL)arg1;
- (void).cxx_destruct;
@end
