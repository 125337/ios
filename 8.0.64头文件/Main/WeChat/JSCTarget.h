@interface JSCTarget : NSObject
{
    JSCProtocolAdapter * _adapter; // +0x8
    BOOL _isConnected; // +0x10
    BOOL _isNeedFilter; // +0x11
    NSMutableArray * _messageBuffer; // +0x18
    NSMutableDictionary * _messageFilters; // +0x20
    NSMutableDictionary * _toolRequestMap; // +0x28
    NSMutableDictionary * _adapterRequestMap; // +0x30
    int _requestId; // +0x38
    NSString * _id; // +0x40
    id /* block */ _sendToTargetImpl; // +0x48
    id /* block */ _sendToRemoteImpl; // +0x50
}
+ (id)sharedInstance;
+ (id)jsonString:(id)arg1;
+ (id)jsonParse:(id)arg1;
- (id)initWithTargetId:(id)arg1;
- (id)initWithTargetId:(id)arg1 needFilter:(BOOL)arg2;
- (void)addMessage:(id)arg1 filter:(id /* block */)arg2;
- (id)callTarget:(id)arg1 params:(id)arg2;
- (void)fireEventToRemote:(id)arg1 params:(id)arg2;
- (void)fireResultToRemote:(id)arg1 params:(id)arg2;
- (void)onMessageFromRemote:(id)arg1;
- (void)onMessageFromTarget:(id)arg1;
- (id /* block */)sendToTargetImpl;
- (void)setSendToTargetImpl:(id /* block */)arg1;
- (id /* block */)sendToRemoteImpl;
- (void)setSendToRemoteImpl:(id /* block */)arg1;
- (void).cxx_destruct;
@end
