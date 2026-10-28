@interface MsgImgFullScreenMinimizeTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    NSString * _taskBizName; // +0x8
    NSString * _taskBizKey; // +0x10
    double _maskAlpha; // +0x18
    UIView * _animateContentView; // +0x20
}
- (void)setupWithMaskAlpha:(double)arg1 animateContentView:(id)arg2;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)taskBizName;
- (void)setTaskBizName:(id)arg1;
- (id)taskBizKey;
- (void)setTaskBizKey:(id)arg1;
- (double)maskAlpha;
- (void)setMaskAlpha:(double)arg1;
- (id)animateContentView;
- (void)setAnimateContentView:(id)arg1;
- (void).cxx_destruct;
@end
