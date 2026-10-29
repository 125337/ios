@interface WCAdCardActionButton : MMUIButton
{
    long long _enabledStyle; // +0x8
    WCAdCardBtnInfo * _buttonInfo; // +0x10
    long long _animationState; // +0x18
    UIView * _highlightedCoverView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1 buttonInfo:(id)arg2;
- (void)dealloc;
- (void)layoutSubviews;
- (void)initialContentsWithInfo:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (id)highlightedCoverView;
- (void)setEnabledStyle:(long long)arg1;
- (id)fetchNormalBgColorWithInfo:(id)arg1;
- (id)fetchDisabledBgColor;
- (id)fetchNormalTitleColorWithInfo:(id)arg1;
- (id)fetchDisabledTitleColor;
- (void)startToAnimate;
- (void)stopAnimating;
- (void)asyncStartToAnimate;
- (long long)enabledStyle;
- (id)buttonInfo;
- (void)setButtonInfo:(id)arg1;
- (long long)animationState;
- (void)setAnimationState:(long long)arg1;
- (void)setHighlightedCoverView:(id)arg1;
- (void).cxx_destruct;
@end
