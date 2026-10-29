@interface WCFinderObseverViewHiddenView : UIView
{
    NSMutableArray * _observedViews; // +0x8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (BOOL)ignoreView:(id)arg1;
- (void)addSubview:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void *)observerKey;
- (void)onSubviewHiddenChanged:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)observedViews;
- (void)setObservedViews:(id)arg1;
- (void).cxx_destruct;
@end

