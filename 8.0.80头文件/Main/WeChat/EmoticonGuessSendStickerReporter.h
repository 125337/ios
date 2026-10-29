@interface EmoticonGuessSendStickerReporter : NSObject
+ (id)generateSessionId;
+ (id)contextSegResultJSONString:(id)arg1;
+ (void)reportModuleExposeWithData:(id)arg1;
+ (void)reportModuleClickWithSessionId:(id)arg1 reason:(unsigned long long)arg2 md5:(id)arg3 recOrder:(unsigned long long)arg4 panelPos:(unsigned long long)arg5;
@end
