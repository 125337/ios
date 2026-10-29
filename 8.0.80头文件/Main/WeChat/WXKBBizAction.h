@interface WXKBBizAction : NSObject
{
    unsigned int _messageType; // +0x8
    unsigned int _actionType; // +0xc
    NSString * _sessionId; // +0x10
    id /* block */ _completion; // +0x18
}
+ (id)messageActionWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)perform:(id /* block */)arg1;
- (BOOL)precheck;
- (void)privatePerform;
- (id)getLoadingString;
- (id)getErrorString;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned int)messageType;
- (unsigned int)actionType;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
