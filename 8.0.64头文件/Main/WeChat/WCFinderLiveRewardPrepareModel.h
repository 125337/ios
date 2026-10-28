@interface WCFinderLiveRewardPrepareModel : NSObject
{
    unsigned long long _scene; // +0x8
    FinderLiveGiftRandomCtx * _randomCtx; // +0x10
    FinderLiveGiftAttackCtx * _attackCtx; // +0x18
    FinderLivePkValueExtraCtx * _pkValueCtx; // +0x20
    NSDictionary * _bufferMap; // +0x28
    NSMutableDictionary * _mBufferMap; // +0x30
}
+ (id)CreatePrepareModelWithScene:(unsigned long long)arg1 sceneFlag:(unsigned long long)arg2 rewardPrepareResp:(id)arg3;
- (id)init;
- (id)bufferMap;
- (id)prepareBuf;
- (id)ctxBuf;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)randomCtx;
- (void)setRandomCtx:(id)arg1;
- (id)attackCtx;
- (void)setAttackCtx:(id)arg1;
- (id)pkValueCtx;
- (void)setPkValueCtx:(id)arg1;
- (void)setBufferMap:(id)arg1;
- (id)mBufferMap;
- (void)setMBufferMap:(id)arg1;
- (void).cxx_destruct;
@end
