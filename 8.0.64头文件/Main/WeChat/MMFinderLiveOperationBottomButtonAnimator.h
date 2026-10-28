@interface MMFinderLiveOperationBottomButtonAnimator : NSObject <PAGViewListener>
{
    PAGView * _pagView; // +0x8
}
- (void)playPAGAnimationOnButton:(id)arg1 pagPath:(id)arg2 pagWebUrl:(id)arg3 completion:(id /* block */)arg4;
- (id)pagView;
- (id)createCommonPAGView;
- (id)getAddedPAGViewForButton:(id)arg1;
- (BOOL)isButtonRunningAnimation:(id)arg1;
- (void)stopButtonAnimation:(id)arg1;
- (id)getButtonRunningAnimationUrl:(id)arg1;
- (void)onAnimationEnd:(id)arg1;
- (void)replaceButtonIcon:(id)arg1 withImage:(id)arg2;
- (void)setPagView:(id)arg1;
- (void).cxx_destruct;
@end
