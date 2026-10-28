@interface MMWebTopBar : UIView
{
    BOOL _canShow; // +0x8
    id <MMWebTopBarDelegate> _delegate; // +0x10
    NSMutableArray * _applyingStyles; // +0x18
    MMWebTopBarStyleConfig * _currentStyle; // +0x20
    MMUILabel * _label; // +0x28
    SightIconView * _loadView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubView;
- (void)layoutSubviews;
- (void)startShowStyle:(id)arg1;
- (void)endShowStyle:(id)arg1;
- (void)updateCurrentShowStyle;
- (void)setText:(id)arg1 withHideLoad:(BOOL)arg2;
- (void)updateWithCurrentStyle;
- (BOOL)haveStyleToShow;
- (BOOL)isLoadingShowing;
- (BOOL)canShow;
- (void)setCanShow:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)applyingStyles;
- (void)setApplyingStyles:(id)arg1;
- (id)currentStyle;
- (void)setCurrentStyle:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)loadView;
- (void)setLoadView:(id)arg1;
- (void).cxx_destruct;
@end
