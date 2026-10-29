@interface WCCustomNavigationBarItemContentView : UIControl
{
    BOOL _applyingHostedViewLayout; // +0x8
    UINavigationItem * _navigationItem; // +0x10
    NSArray * _appliedItemState; // +0x18
    UILabel * _titleLabel; // +0x20
    UIView * _hostedTitleView; // +0x28
    NSArray * _leadingViews; // +0x30
    NSArray * _trailingViews; // +0x38
    NSMapTable * _hostContainers; // +0x40
    NSHashTable * _detachedHostedViews; // +0x48
    unsigned long long _hostedViewReplacementGeneration; // +0x50
    double _titleTransitionTranslationX; // +0x58
}
- (id)initWithNavigationItem:(id)arg1 backItem:(id)arg2 tintColor:(id)arg3;
- (void)updateWithNavigationItem:(id)arg1 backItem:(id)arg2 tintColor:(id)arg3;
- (void)updateTitleForNavigationItem:(id)arg1;
- (void)finishHostedViewReplacement;
- (void)applyTitleTextAttributes:(id)arg1;
- (id)hostContainerForView:(id)arg1 createIfNeeded:(BOOL)arg2;
- (void)attachHostedView:(id)arg1;
- (void)setFrame:(CGRect)arg1 forHostedView:(id)arg2;
- (id)hostedViews;
- (void)layoutSubviews;
- (void)layoutHostedViews;
- (void)updateHostedViewFrames;
- (double)trailingTitleTranslation;
- (void)updateTitleTransitionTranslationX:(double)arg1;
- (id)navigationItem;
- (void)setNavigationItem:(id)arg1;
- (id)appliedItemState;
- (void)setAppliedItemState:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)hostedTitleView;
- (void)setHostedTitleView:(id)arg1;
- (id)leadingViews;
- (void)setLeadingViews:(id)arg1;
- (id)trailingViews;
- (void)setTrailingViews:(id)arg1;
- (id)hostContainers;
- (void)setHostContainers:(id)arg1;
- (id)detachedHostedViews;
- (void)setDetachedHostedViews:(id)arg1;
- (BOOL)applyingHostedViewLayout;
- (void)setApplyingHostedViewLayout:(BOOL)arg1;
- (unsigned long long)hostedViewReplacementGeneration;
- (void)setHostedViewReplacementGeneration:(unsigned long long)arg1;
- (double)titleTransitionTranslationX;
- (void)setTitleTransitionTranslationX:(double)arg1;
- (void).cxx_destruct;
@end
