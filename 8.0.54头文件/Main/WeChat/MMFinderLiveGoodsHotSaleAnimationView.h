@interface MMFinderLiveGoodsHotSaleAnimationView : UIView <CAAnimationDelegate>
{
    PAGFile * _backgroundPAG; // +0x8
    UILabel * _hotSaleLabel; // +0x10
    UILabel * _hotSaleCountLabel; // +0x18
    PAGView * _hotSaleBackgroundView; // +0x20
    id /* block */ _salesUpdatingCompletion; // +0x28
}
- (double)ratio;
- (void)hotSaleBackgroundViewAppear:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)hotSaleLabelAppear:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)hotSaleLabelFirstAnimation:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)updateHotSaleAnimation:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)countLabelDanceAnimation:(double)arg1;
- (void)finishHotSaleAnimation:(id /* block */)arg1;
- (double)hotSaleTextAnimationDuration;
- (double)hotSaleAnimationLastPartDuration;
- (double)hotSaleAnimationFirstPartDuration;
- (id)backgroundPAG;
- (void)setBackgroundPAG:(id)arg1;
- (id)hotSaleLabel;
- (void)setHotSaleLabel:(id)arg1;
- (id)hotSaleCountLabel;
- (void)setHotSaleCountLabel:(id)arg1;
- (id)hotSaleBackgroundView;
- (void)setHotSaleBackgroundView:(id)arg1;
- (id /* block */)salesUpdatingCompletion;
- (void)setSalesUpdatingCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end

