@interface WCFinderLiteAppStore : NSObject <MMLiteAppStoreExt>
{
    id /* block */ _complectionBlock; // +0x8
    unsigned long long _callBackID; // +0x10
    id _context; // +0x18
    MMTimer * _overTimeCheck; // +0x20
}
+ (void)dispatchStore:(id)arg1 actionName:(id)arg2 json:(id)arg3 complection:(id /* block */)arg4;
- (void)setCallBackID:(unsigned long long)arg1;
- (void)checkOverTime;
- (void)dealloc;
- (void)onStoreSendResult:(id)arg1 callbackId:(int)arg2 resultType:(id)arg3 result:(id)arg4;
- (void)onStoreSetData:(id)arg1 changes:(id)arg2;
- (id /* block */)complectionBlock;
- (void)setComplectionBlock:(id /* block */)arg1;
- (unsigned long long)callBackID;
- (id)context;
- (void)setContext:(id)arg1;
- (id)overTimeCheck;
- (void)setOverTimeCheck:(id)arg1;
- (void).cxx_destruct;
@end
