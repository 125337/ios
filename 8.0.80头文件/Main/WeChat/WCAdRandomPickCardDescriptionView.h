@interface WCAdRandomPickCardDescriptionView : MMUIView <CAAnimationDelegate>
{
    WCAdRandomPickCardInfo * _randomPickCardInfo; // +0x8
    id <WCAdRandomPickCardDescriptionViewDelegate> _delegate; // +0x10
    long long _viewStatus; // +0x18
    WCAdURLImageView * _titleIconView; // +0x20
    UILabel * _titleLabel; // +0x28
    WCAdURLImageView * _introduceTitleIconView; // +0x30
    UILabel * _introduceTitleLabel; // +0x38
    UILabel * _descLabel; // +0x40
    UILabel * _introduceDescLabel; // +0x48
    UILabel * _doneTitleLabel; // +0x50
    UILabel * _doneDescLabel; // +0x58
}
+ (double)calcViewHeightForPickCardInfo:(id)arg1 maxWidth:(double)arg2;
- (id)initWithFrame:(CGRect)arg1 randomPickCardInfo:(id)arg2 delegate:(id)arg3;
- (void)generateSubviews;
- (void)layoutSubviews;
- (id)titleIconView;
- (id)titleLabel;
- (id)introduceTitleIconView;
- (id)introduceTitleLabel;
- (id)descLabel;
- (id)introduceDescLabel;
- (id)doneTitleLabel;
- (id)doneDescLabel;
- (id)fetchIntroduceDescText;
- (id)fetchDoneDescText;
- (id)generateSimpleLabelWithFont:(id)arg1 textColor:(id)arg2 text:(id)arg3;
- (void)updateRandomPickCardInfo:(id)arg1;
- (void)resetDescriptionView;
- (void)updateViewStateForAnimation;
- (void)updateViewWithStatus:(long long)arg1;
- (id)generateSimpleOpacityAnimationFrom:(double)arg1 mid:(double)arg2 to:(double)arg3 duration:(double)arg4 completionBlock:(id /* block */)arg5;
- (void)removeAllLayersAnimations;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)randomPickCardInfo;
- (void)setRandomPickCardInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)viewStatus;
- (void)setViewStatus:(long long)arg1;
- (void)setTitleIconView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setIntroduceTitleIconView:(id)arg1;
- (void)setIntroduceTitleLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setIntroduceDescLabel:(id)arg1;
- (void)setDoneTitleLabel:(id)arg1;
- (void)setDoneDescLabel:(id)arg1;
- (void).cxx_destruct;
@end
