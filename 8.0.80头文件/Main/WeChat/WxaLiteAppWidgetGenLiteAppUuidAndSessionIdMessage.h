@interface WxaLiteAppWidgetGenLiteAppUuidAndSessionIdMessage : NSObject
{
    NSNumber * _appUuid; // +0x8
    NSString * _sessionId; // +0x10
}
+ (id)makeWithAppUuid:(id)arg1 sessionId:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)appUuid;
- (void)setAppUuid:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (void).cxx_destruct;
@end
