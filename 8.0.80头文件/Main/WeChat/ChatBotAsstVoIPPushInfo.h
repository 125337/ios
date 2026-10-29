@interface ChatBotAsstVoIPPushInfo : NSObject
{
    BOOL _isFromChatBotAsst; // +0x8
    NSString * _callId; // +0x10
    NSString * _callerUserName; // +0x18
    NSString * _ringTone; // +0x20
    NSString * _displayName; // +0x28
}
+ (id)pushInfoWithDictionary:(id)arg1;
+ (id)stringForKey:(id)arg1 inDict:(id)arg2;
- (void)parseCgContent:(id)arg1;
- (id)resolveCallIdFromIlinkctx:(id)arg1;
- (BOOL)isFromChatBotAsst;
- (void)setIsFromChatBotAsst:(BOOL)arg1;
- (id)callId;
- (void)setCallId:(id)arg1;
- (id)callerUserName;
- (void)setCallerUserName:(id)arg1;
- (id)ringTone;
- (void)setRingTone:(id)arg1;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (void).cxx_destruct;
@end
