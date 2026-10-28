@interface MMLoadingView : UIView
{
    BOOL _loading; // +0x8
    BOOL _ignoreInteractionEventsWhenLoading; // +0x9
    BOOL _previousLoading; // +0xa
    BOOL _shouldResumeInteraction; // +0xb
    NSString * _text; // +0x10
    MMToastView * _loadingView; // +0x18
    double _toastDuration; // +0x20
    id /* block */ _completion; // +0x28
    CGPoint _showCenter; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)startLoading;
- (void)startLoadingAfterDelay:(double)arg1;
- (void)stopLoading;
- (void)stopLoadingAndShowOK:(id)arg1;
- (void)stopLoadingAndShowOK:(id)arg1 duration:(double)arg2;
- (void)stopLoadingAndShowOK:(id)arg1 duration:(double)arg2 completionBlock:(id /* block */)arg3;
- (void)stopLoadingAndShowError:(id)arg1;
- (void)stopLoadingAndShowError:(id)arg1 duration:(double)arg2;
- (void)stopLoadingAndShowError:(id)arg1 duration:(double)arg2 completionBlock:(id /* block */)arg3;
- (void)stopLoadingAndShowIcon:(id)arg1 text:(id)arg2 duration:(double)arg3;
- (void)stopLoadingAndShowIcon:(id)arg1 text:(id)arg2 duration:(double)arg3 completionBlock:(id /* block */)arg4;
- (void)updateLayout;
- (id)loadingView;
- (void)showLoadingView;
- (void)privateStopLoading;
- (void)privateCheckLoadingAction;
- (void)privateEndToast;
- (void)privateRealStartLoading;
- (void)privateRealStopLoading;
- (id)privateText;
- (void)privateCheckLoadingViewCenter;
- (void)didMoveToSuperview;
- (void)setFrame:(CGRect)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)isLoading;
- (void)setLoading:(BOOL)arg1;
- (BOOL)ignoreInteractionEventsWhenLoading;
- (void)setIgnoreInteractionEventsWhenLoading:(BOOL)arg1;
- (CGPoint)showCenter;
- (void)setShowCenter:(CGPoint)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (BOOL)previousLoading;
- (void)setPreviousLoading:(BOOL)arg1;
- (void)setLoadingView:(id)arg1;
- (double)toastDuration;
- (void)setToastDuration:(double)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (BOOL)shouldResumeInteraction;
- (void)setShouldResumeInteraction:(BOOL)arg1;
- (void).cxx_destruct;
@end
