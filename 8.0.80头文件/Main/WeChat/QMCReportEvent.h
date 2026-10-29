@interface QMCReportEvent : NSObject
{
    NSString * _eventName; // +0x8
    NSDictionary * _extraParams; // +0x10
    QMCReportConfig * _config; // +0x18
}
+ (id)eventWithName:(id)arg1 config:(id)arg2 extraParams:(id)arg3;
+ (id)eventWithCode:(id)arg1 config:(id)arg2 extraParams:(id)arg3;
+ (id)_deviceModel;
+ (id)_sdkVersion;
+ (id)_deviceID;
- (id)eventContentDictionary;
- (id)eventName;
- (void)setEventName:(id)arg1;
- (id)extraParams;
- (void)setExtraParams:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end
