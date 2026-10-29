@interface WxpayStoreContainerEvent : NSObject
+ (BOOL)isStoreEvent:(id)arg1;
+ (id)validationReasonForEvent:(id)arg1;
+ (id)commandForEvent:(id)arg1 sceneAppId:(id)arg2 sceneSessionId:(id)arg3 dropReason:(id *)arg4;
+ (id)encodeResult:(id)arg1;
@end
