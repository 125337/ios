@interface GameController : NSObject
+ (BOOL)isJSBMd5:(id)arg1;
+ (BOOL)isDiceMd5:(id)arg1;
+ (id)getMD5ByGameContent:(unsigned int)arg1;
+ (void)SetGameContentForMsgWrap:(id)arg1;
+ (id)GameEmoticonMsgForEmoticonWrap:(id)arg1;
- (id)init;
@end

