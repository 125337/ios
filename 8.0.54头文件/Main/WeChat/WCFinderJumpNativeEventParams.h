@interface WCFinderJumpNativeEventParams : NSObject
{
    NSString * _eventIdStr; // +0x8
    NSString * _byPassInfoString; // +0x10
    NSData * _byPassInfo; // +0x18
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (unsigned long long)eventId;
- (id)byPassInfo;
- (id)eventIdStr;
- (void)setEventIdStr:(id)arg1;
- (id)byPassInfoString;
- (void)setByPassInfoString:(id)arg1;
- (void)setByPassInfo:(id)arg1;
- (void).cxx_destruct;
@end

