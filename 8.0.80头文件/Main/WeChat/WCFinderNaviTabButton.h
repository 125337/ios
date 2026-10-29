@interface WCFinderNaviTabButton : MMUIButton
{
    WCFinderNaviTabItem * _item; // +0x8
    WCFinderAnimationLoadingView * _loadingView; // +0x10
    UIView * _badgeView; // +0x18
    UITapGestureRecognizer * _singleTap; // +0x20
    WCFinderShortTapGestureRecognizer * _doubleTap; // +0x28
}
- (id)initWithItem:(id)arg1;
- (void)applyItem:(id)arg1;
- (void)updateBadge;
- (void)layoutSubviews;
- (id)item;
- (void)setItem:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)badgeView;
- (void)setBadgeView:(id)arg1;
- (id)singleTap;
- (void)setSingleTap:(id)arg1;
- (id)doubleTap;
- (void)setDoubleTap:(id)arg1;
- (void).cxx_destruct;
@end
