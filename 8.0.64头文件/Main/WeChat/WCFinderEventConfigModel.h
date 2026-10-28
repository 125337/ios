@interface WCFinderEventConfigModel : NSObject
{
    NSString * _finderNickname; // +0x8
    NSString * _eventName; // +0x10
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (BOOL)isValid;
- (id)finderNickname;
- (void)setFinderNickname:(id)arg1;
- (id)eventName;
- (void)setEventName:(id)arg1;
- (void).cxx_destruct;
@end
