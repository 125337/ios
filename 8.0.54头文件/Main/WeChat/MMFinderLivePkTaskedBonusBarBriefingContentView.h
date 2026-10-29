@interface MMFinderLivePkTaskedBonusBarBriefingContentView : UIView <MMFinderLivePkTaskedBonusBarContentView>
{
    UIView * _contentContainer; // +0x8
    UILabel * _contentLabel; // +0x10
    MMFinderLivePkTaskedBonusBarBriefingContentMaskingView * _maskingView; // +0x18
    MMLiveDisplayLinkAnimator * _animator; // +0x20
    double _currentProgress; // +0x28
    MMFinderLivePkTaskedBonusModel * _model; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (id)contentShadowColor;
- (void)updateWithModel:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)startScrolling;
- (void)stopScrolling;
- (void)updateContentTransformWithProgress:(double)arg1;
- (id)contentContainer;
- (void)setContentContainer:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)maskingView;
- (void)setMaskingView:(id)arg1;
- (id)animator;
- (void)setAnimator:(id)arg1;
- (double)currentProgress;
- (void)setCurrentProgress:(double)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (void).cxx_destruct;
@end

