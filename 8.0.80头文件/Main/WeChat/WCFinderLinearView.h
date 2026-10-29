@interface WCFinderLinearView : UIView
{
    BOOL _hasContent; // +0x8
    BOOL _dirty; // +0x9
    BOOL _objectReleasing; // +0xa
    double _contentPadding; // +0x10
    id /* block */ _onSizeChanged; // +0x18
    WCFinderLinearView * _rootLinearView; // +0x20
    WCFinderLinearView * _parentLinearView; // +0x28
    UIView * _rootYogaView; // +0x30
    UIEdgeInsets _contentInsets; // +0x38
}
+ (id)linearViewBuilder:(id /* block */)arg1;
+ (id)verticalLayoutView;
+ (id)horizontalLayoutView;
- (void)addSubHorizontalLayout:(id /* block */)arg1;
- (void)addSubVerticalLayout:(id /* block */)arg1;
- (id)addSpacer;
- (id)initWithLayoutVertical:(BOOL)arg1;
- (id)init;
- (void)dealloc;
- (BOOL)layoutVertical;
- (void)setLayoutVertical:(BOOL)arg1;
- (void)setMaxWidth:(double)arg1;
- (double)maxWidth;
- (void)setContentPadding:(double)arg1;
- (void)setContentInsets:(UIEdgeInsets)arg1;
- (void)setRootLinearView:(id)arg1;
- (void)updateViewsPadding;
- (void)updatePaddingThenSizeToFit;
- (void)doUpdateViewPadding;
- (void)addSubview:(id)arg1;
- (void)didMoveToSuperview;
- (void *)observeContext;
- (void)willRemoveSubview:(id)arg1;
- (void)addObservers:(id)arg1;
- (void)removeObservers:(id)arg1;
- (void)onSubviewHiddenChange:(id)arg1 object:(id)arg2;
- (void)onSublabelTextChange:(id)arg1 object:(id)arg2;
- (void)onSubImageViewImageChange:(id)arg1 object:(id)arg2;
- (void)markDirty;
- (void)markYogaDirty;
- (void)delaySizeToFit;
- (void)_delaySizeToFit;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)sizeToFit;
- (void)layoutSubviews;
- (double)contentPadding;
- (UIEdgeInsets)contentInsets;
- (BOOL)hasContent;
- (void)setHasContent:(BOOL)arg1;
- (BOOL)dirty;
- (void)setDirty:(BOOL)arg1;
- (id /* block */)onSizeChanged;
- (void)setOnSizeChanged:(id /* block */)arg1;
- (BOOL)objectReleasing;
- (void)setObjectReleasing:(BOOL)arg1;
- (id)rootLinearView;
- (id)parentLinearView;
- (void)setParentLinearView:(id)arg1;
- (id)rootYogaView;
- (void)setRootYogaView:(id)arg1;
- (void).cxx_destruct;
@end
