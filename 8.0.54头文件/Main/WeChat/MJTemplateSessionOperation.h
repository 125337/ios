@interface MJTemplateSessionOperation : NSObject
{
    NSString * _sessionKey; // +0x8
    id /* block */ _completionHandler; // +0x10
    long long _status; // +0x18
    id /* block */ _statusChangedHandler; // +0x20
}
- (id)initWithSessionKey:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (void)clearCompletionHandler;
- (void)_updateStatus:(long long)arg1;
- (void)start;
- (void)didStop;
- (id)boundTemplateId;
- (id)sessionKey;
- (void)setSessionKey:(id)arg1;
- (id /* block */)completionHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (long long)status;
- (id /* block */)statusChangedHandler;
- (void)setStatusChangedHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end

