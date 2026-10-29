@interface MMFinderLivePkTaskedBonusBarResultBackgroundView : UIView <MMFinderLivePkTaskedBonusBarBackgroundView>
{
    MMFinderLivePkTaskedBonusBarBackgroundHighView * _succeededBackgroundView; // +0x8
    MMFinderLivePkTaskedBonusBarBackgroundLowView * _failedBackgroundView; // +0x10
}
- (void)updateWithModel:(id)arg1;
- (void)layoutSubviews;
- (id)succeededBackgroundView;
- (void)setSucceededBackgroundView:(id)arg1;
- (id)failedBackgroundView;
- (void)setFailedBackgroundView:(id)arg1;
- (void).cxx_destruct;
@end

