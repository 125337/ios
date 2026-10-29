@interface SequenceAnimationObject : NSObject
{
    BOOL _m_isAnimating; // +0x8
    unsigned long long _maxCount; // +0x10
    NSMutableArray * _m_animations; // +0x18
}
- (id)init;
- (void)addAnimationWithDuration:(double)arg1 delay:(double)arg2 options:(unsigned long long)arg3 animations:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)checkMaxCount;
- (void)doNextAnimation;
- (unsigned long long)maxCount;
- (void)setMaxCount:(unsigned long long)arg1;
- (BOOL)m_isAnimating;
- (void)setM_isAnimating:(BOOL)arg1;
- (id)m_animations;
- (void)setM_animations:(id)arg1;
- (void).cxx_destruct;
@end

