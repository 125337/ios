@interface WXKBMessageAction : NSObject
{
    unsigned int _messageType; // +0x8
    unsigned int _actionType; // +0xc
    NSString * _sessionId; // +0x10
    WXKBMessageActionContext * _context; // +0x18
    id /* block */ _completion; // +0x20
    WXKBMessageActionReportObject * _reportObject; // +0x28
}
+ (id)messageActionWithDictionary:(id)arg1;
- (BOOL)precheck;
- (void)privatePerform;
- (id)getLoadingString;
- (id)getErrorString;
- (id)initWithDictionary:(id)arg1;
- (void)initReportObject;
- (void)performWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned int)messageType;
- (void)setMessageType:(unsigned int)arg1;
- (unsigned int)actionType;
- (void)setActionType:(unsigned int)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id)reportObject;
- (void)setReportObject:(id)arg1;
- (void).cxx_destruct;
@end

