@interface VoIPMessageUtils : NSObject
+ (id)wordingWithType:(int)arg1 isSender:(BOOL)arg2 duration:(unsigned int)arg3;
+ (void)supplementLocalBubbleMessageWrapToUsername:(id)arg1 withWordingType:(int)arg2 isVideo:(BOOL)arg3 roomID:(unsigned long long)arg4 roomKey:(unsigned long long)arg5 inviteID:(unsigned int)arg6 duration:(unsigned int)arg7 isCaller:(BOOL)arg8 needRedDot:(BOOL)arg9 needFixTime:(BOOL)arg10 createTime:(unsigned int)arg11 exceptionType:(unsigned long long)arg12 status:(unsigned int)arg13 isIlink:(BOOL)arg14;
@end

