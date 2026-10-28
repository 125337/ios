@interface MMLiveAudienceChoiceCell : UICollectionViewCell <MMLiveVoteViewModelObserver>
{
    BOOL _animating; // +0x8
    float _voteProgress; // +0xc
    MMUIView * _background; // +0x10
    MMUILabel * _titleLabel; // +0x18
    MMUILabel * _selectCountLabel; // +0x20
    MMUIView * _voteProgressView; // +0x28
}
+ (id)ReuseIdentifier;
+ (id)createLayoutWithSize;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupView;
- (void)performAnimateToProgress:(float)arg1;
- (void)updateWithChoice:(id)arg1 progress:(float)arg2 showProgress:(BOOL)arg3;
- (void)updateWithChoice:(id)arg1 showProgress:(BOOL)arg2;
- (void)layoutSubviews;
- (void)addShadowToLabel:(id)arg1;
- (void)removeLabelShadow:(id)arg1;
- (id)background;
- (id)titleLabel;
- (id)selectCountLabel;
- (id)voteProgressView;
- (float)voteProgress;
- (void)setVoteProgress:(float)arg1;
- (BOOL)animating;
- (void)setAnimating:(BOOL)arg1;
- (void)setBackground:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSelectCountLabel:(id)arg1;
- (void)setVoteProgressView:(id)arg1;
- (void).cxx_destruct;
@end
