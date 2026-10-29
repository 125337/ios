@interface MMFinderLiveBatchRewardWeVisionRenderTask : NSObject
{
    BOOL _started; // +0x8
    unsigned int _animationImgNum; // +0xc
    long long _renderScriptId; // +0x10
    NSString * _rewardProductId; // +0x18
    NSString * _comboId; // +0x20
    NSString * _resourceId; // +0x28
    NSString * _animationImgPath; // +0x30
}
- (long long)renderScriptId;
- (void)setRenderScriptId:(long long)arg1;
- (id)rewardProductId;
- (void)setRewardProductId:(id)arg1;
- (id)comboId;
- (void)setComboId:(id)arg1;
- (id)resourceId;
- (void)setResourceId:(id)arg1;
- (unsigned int)animationImgNum;
- (void)setAnimationImgNum:(unsigned int)arg1;
- (id)animationImgPath;
- (void)setAnimationImgPath:(id)arg1;
- (BOOL)started;
- (void)setStarted:(BOOL)arg1;
- (void).cxx_destruct;
@end
