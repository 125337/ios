@interface WCFinderFeedLiveToolBarView : UIView
{
    BOOL _allowForward; // +0x8
    id <WCFinderFeedToolbarActionDelegate> _delegate; // +0x10
    WCFinderFeedLiveToolBarItemButton * _shareBtn; // +0x18
}
+ (double)defaultWidth;
- (id)initWithFrame:(CGRect)arg1;
- (id)shareBtn;
- (void)setupSubView;
- (void)updateAllowForward:(BOOL)arg1;
- (void)updateShareContainer:(BOOL)arg1;
- (void)updateShareBtnVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutUI;
- (void)didClickShareBtn:(id)arg1;
- (void)layoutSubviews;
- (id)whiteColorWithAlphaComponent;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setShareBtn:(id)arg1;
- (BOOL)allowForward;
- (void)setAllowForward:(BOOL)arg1;
- (void).cxx_destruct;
@end

