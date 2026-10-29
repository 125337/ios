@interface EditImageAnimatedLayer : CALayer
{
    CAKeyframeAnimation * m_contentsAnimation; // +0x8
    id <CAMediaTiming> _timingObj; // +0x10
}
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)removeAnimationForKey:(id)arg1;
- (void)layoutIfNeeded;
- (void)layoutSublayers;
- (id)timingObj;
- (void)setTimingObj:(id)arg1;
- (void).cxx_destruct;
@end

