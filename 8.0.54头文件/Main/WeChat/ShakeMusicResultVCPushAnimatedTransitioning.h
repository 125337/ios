@interface ShakeMusicResultVCPushAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning>
{
    id /* block */ _onFinishBlock; // +0x8
    unsigned long long _scene; // +0x10
    UIView * _musicCardView; // +0x18
}
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id /* block */)onFinishBlock;
- (void)setOnFinishBlock:(id /* block */)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)musicCardView;
- (void)setMusicCardView:(id)arg1;
- (void).cxx_destruct;
@end

