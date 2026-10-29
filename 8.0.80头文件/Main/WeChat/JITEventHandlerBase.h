@interface JITEventHandlerBase : NSObject
{
    JITRuntime * _runtime; // +0x8
}
- (id)makeReturnObject:(id)arg1 errCode:(long long)arg2 errMsg:(id)arg3;
- (id)makeReturnObjectOk:(id)arg1;
- (id)makeReturnObjectFail:(long long)arg1 errMsg:(id)arg2;
- (shared_ptr<magicbrush::MagicBrushCore>)currentNativeRender:(id)arg1;
- (id)apiName;
- (id)runtime;
- (void)setRuntime:(id)arg1;
- (void).cxx_destruct;
@end
