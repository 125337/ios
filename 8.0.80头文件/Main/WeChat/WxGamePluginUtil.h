@interface WxGamePluginUtil : NSObject
+ (BOOL)isWxGameJumpLiteApp;
+ (id)parseWxGameMessageXML:(id)arg1 localId:(unsigned int)arg2 createTime:(unsigned int)arg3 type:(unsigned int)arg4;
+ (void)setGamePluginLastMsg:(unsigned int)arg1 createTime:(unsigned int)arg2 leftCount:(unsigned int)arg3 msgCountToLoad:(unsigned int)arg4;
+ (id)getGamePluginLastMsg;
+ (BOOL)is24HourFormat;
@end
