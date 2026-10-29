@interface WxpayKitFrameWindow : NSObject
{
    long long _windowStartMs; // +0x8
    unsigned long long _basePresented; // +0x10
    unsigned long long _baseDropped; // +0x18
    unsigned long long _baseRetainedHits; // +0x20
    unsigned long long _presented; // +0x28
    unsigned long long _dropped; // +0x30
    unsigned long long _retainedHits; // +0x38
    BOOL _started; // +0x40
    unsigned long long _callId; // +0x48
    NSString * _route; // +0x50
    NSString * _pendingDetail; // +0x58
    id /* block */ _retainedHitsProvider; // +0x60
}
- (id)init;
- (void)observeCall:(unsigned long long)arg1 route:(id)arg2 presented:(unsigned long long)arg3 dropped:(unsigned long long)arg4;
- (void)flush;
- (void)annotateNextRow:(id)arg1;
- (void)emit;
- (void)rebase;
- (id /* block */)retainedHitsProvider;
- (void)setRetainedHitsProvider:(id /* block */)arg1;
- (void).cxx_destruct;
@end
