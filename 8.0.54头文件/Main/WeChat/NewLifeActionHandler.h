@interface NewLifeActionHandler : NSObject
{
    BOOL _running; // +0x8
    NewLifePlugin * _plugin; // +0x10
    NSString * _commandId; // +0x18
    id /* block */ _completion; // +0x20
    NSString * _handlerId; // +0x28
}
+ (id)generateHandlerIdForCommand:(id)arg1;
- (id)initWithCommandId:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (void)handleRequest:(id)arg1;
- (void)endActionWithError:(id)arg1;
- (void)endActionWithResponse:(id)arg1;
- (void)endActionWithEmptyResponse;
- (BOOL)isEqualToHandler:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)plugin;
- (void)setPlugin:(id)arg1;
- (id)commandId;
- (void)setCommandId:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id)handlerId;
- (void)setHandlerId:(id)arg1;
- (BOOL)isRunning;
- (void)setRunning:(BOOL)arg1;
- (void).cxx_destruct;
@end

