@interface MMFinderLivePkTaskedBonusBarView : UIView
{
    id <MMFinderLivePkTaskedBonusBarViewDelegate> _delegate; // +0x8
    UIView * _statefulViewsContainer; // +0x10
    UIView<MMFinderLivePkTaskedBonusBarBackgroundView> * _backgroundView; // +0x18
    UIView<MMFinderLivePkTaskedBonusBarContentView> * _contentView; // +0x20
    UIImageView * _rightChevronView; // +0x28
    MMFinderLivePkTaskedBonusModel * _model; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithModel:(id)arg1 stateDescriptor:(id)arg2;
- (void)layoutSubviews;
- (void)onBarViewTapped;
- (void)layoutContentView:(id)arg1;
- (void)layoutBackgroundView:(id)arg1 matchingContentView:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)statefulViewsContainer;
- (void)setStatefulViewsContainer:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)rightChevronView;
- (void)setRightChevronView:(id)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (void).cxx_destruct;
@end

