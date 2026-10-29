@interface WCFinderLiveRewardPrepareBuffer : NSObject
{
    unsigned long long _sceneType; // +0x8
    NSData * _prepareBuf; // +0x10
    NSData * _ctxBuf; // +0x18
}
- (unsigned long long)sceneType;
- (void)setSceneType:(unsigned long long)arg1;
- (id)prepareBuf;
- (void)setPrepareBuf:(id)arg1;
- (id)ctxBuf;
- (void)setCtxBuf:(id)arg1;
- (void).cxx_destruct;
@end

