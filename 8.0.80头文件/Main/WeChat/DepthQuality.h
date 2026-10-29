@interface DepthQuality : NSObject
{
    BOOL _isPass; // +0x8
    float _depthScore; // +0xc
    float _ep_thr; // +0x10
    float _np_thr; // +0x14
    float _mp_thr; // +0x18
    float _shake_thr; // +0x1c
    float _replaceScore; // +0x20
}
- (float)depthScore;
- (void)setDepthScore:(float)arg1;
- (BOOL)isPass;
- (void)setIsPass:(BOOL)arg1;
- (float)ep_thr;
- (void)setEp_thr:(float)arg1;
- (float)np_thr;
- (void)setNp_thr:(float)arg1;
- (float)mp_thr;
- (void)setMp_thr:(float)arg1;
- (float)shake_thr;
- (void)setShake_thr:(float)arg1;
- (float)replaceScore;
- (void)setReplaceScore:(float)arg1;
@end
