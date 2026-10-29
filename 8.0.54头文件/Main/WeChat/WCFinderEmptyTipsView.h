@interface WCFinderEmptyTipsView : UIView <ILinkEventExt>
{
    id <WCFinderEmptyTipsViewDelegate> _delegate; // +0x8
    unsigned long long _state; // +0x10
    UIImageView * _stateImageView; // +0x18
    RichTextView * _stateTipsTextView; // +0x20
    double _loadingSize; // +0x28
    UIGestureRecognizer * _tapRecognizer; // +0x30
}
+ (unsigned long long)defaultStyleFlagOfState:(unsigned long long)arg1;
+ (id)defaultIconImageOfState:(unsigned long long)arg1;
+ (id)defaultTipsWordingOfState:(unsigned long long)arg1;
- (id)init;
- (void)setState:(unsigned long long)arg1;
- (void)setState:(unsigned long long)arg1 withConfig:(id)arg2;
- (unsigned long long)getState;
- (void)resumeLoadingAnimationIfNeed;
- (void)updateLayout;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (void)onEmptyTipsViewDidClick;
- (void)setEmptyTipsViewColor:(id)arg1;
- (id)stateImageView;
- (id)stateTipsTextView;
- (id)tapRecognizer;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)state;
- (void)setStateImageView:(id)arg1;
- (void)setStateTipsTextView:(id)arg1;
- (double)loadingSize;
- (void)setLoadingSize:(double)arg1;
- (void)setTapRecognizer:(id)arg1;
- (void).cxx_destruct;
@end

