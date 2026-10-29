@interface MMNewMsgContentNavBar : UIView <MMMsgTipsExpandViewDelegate, TipsViewDelegate>
{
    BOOL _hideBottomLine; // +0x8
    BOOL _tipsBarVisible; // +0x9
    BOOL _isShowingExpandView; // +0xa
    BOOL _isAddingMultipleTipsBar; // +0xb
    id <MMNewMsgContentNavBarDelegate> _delegate; // +0x10
    MsgNewTipsBarReporter * _reporter; // +0x18
    unsigned long long _closeScene; // +0x20
    double _navigationBarHeight; // +0x28
    NSMutableArray * _tipsBarInMixedList; // +0x30
    NSArray * _oldTipsBarInMixedList; // +0x38
    UIView * _separatorView; // +0x40
    UIView * _blurBgView; // +0x48
    UIView * _mixedListContainerView; // +0x50
    UITapGestureRecognizer * _mixedListTapGesture; // +0x58
    MMMsgCommonTipsView * _commonTipsView; // +0x60
    MMMsgContentTipsItem * _currentItem; // +0x68
    UIView * _mixedListFoldBottomView; // +0x70
    MMMsgTipsMixedListExpandView * _mixedListExpandView; // +0x78
    MMMsgTipsExpandView * _currentShowingExpandView; // +0x80
    UIView * _expandViewContainerView; // +0x88
    UIView * _expandBottomView; // +0x90
    MMUIButton * _closeButton; // +0x98
    UIButton * _bgMaskView; // +0xa0
    NSMutableArray * _exposedTipsItems; // +0xa8
    NSString * _nsUserName; // +0xb0
}
- (id)initWithFrame:(CGRect)arg1 navigationBarHeight:(double)arg2 userName:(id)arg3;
- (void)initData;
- (void)initView;
- (void)layoutSubviews;
- (void)setHideBottomLine:(BOOL)arg1;
- (void)setNavBarHeight:(double)arg1;
- (BOOL)isShowingTipsBar;
- (double)currentTipsBarHeight;
- (double)currentExpandNavBarHeight;
- (void)setTipsBarVisible:(BOOL)arg1;
- (id)currentItemInMixedListForType:(long long)arg1;
- (id)currentItemInMixedList;
- (CGRect)getRectInWindowWithTipsItem:(id)arg1;
- (void)addTipsBarInMixedListWithItem:(id)arg1;
- (void)removeTipsBarInMixedListWithType:(long long)arg1;
- (void)removeTipsBarDataInMixedListWithType:(long long)arg1;
- (void)removeAllTipsBarInMixedList;
- (void)addMultipleTipsBarInMixedListWithItem:(id)arg1;
- (void)updateMixedListTopTipsBar;
- (void)updateMixedListTopTipsBar:(BOOL)arg1;
- (void)sortTipsBarInMixedList;
- (void)reportTipsBarAddedOrRemoved;
- (void)onTapMixedList;
- (double)mixedListTop;
- (void)showExpandViewInMixedListAnimated:(BOOL)arg1;
- (void)hideExpandViewInMixedListAnimated:(BOOL)arg1;
- (void)hideExpandViewOfFirstTipsViewAnimated:(BOOL)arg1;
- (void)showExpandView:(id)arg1 animated:(BOOL)arg2;
- (void)hideExpandViewWithAnimated:(BOOL)arg1;
- (void)onExpandViewSizeChange:(CGSize)arg1 animateAction:(id /* block */)arg2 complete:(id /* block */)arg3;
- (void)onHideExpandView:(BOOL)arg1;
- (void)onCloseExpandButtonClick;
- (void)onMaskBgClick;
- (void)onTipsViewClick:(id)arg1;
- (void)onTipsViewClose:(id)arg1;
- (void)onPerformAction:(id)arg1;
- (void)onPerformExposeAction:(id)arg1;
- (void)onTipsViewDidShow:(id)arg1;
- (void)onTipsViewHideAtTimeout:(id)arg1;
- (id)tipsItemForTipsView:(id)arg1;
- (void)onTipsViewHeightChanged:(id)arg1;
- (void)onRightButtonWaitingForConfirm:(id)arg1;
- (void)onMenuControllerVisible:(id)arg1;
- (unsigned long long)reportIndexOfTipsItem:(id)arg1;
- (void)expandNavBarHeight:(double)arg1 animated:(BOOL)arg2 complete:(id /* block */)arg3;
- (void)expandNavBarHeight:(double)arg1 animated:(BOOL)arg2 showExpandView:(BOOL)arg3 complete:(id /* block */)arg4;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (unsigned long long)closeScene;
- (void)setCloseScene:(unsigned long long)arg1;
- (BOOL)hideBottomLine;
- (double)navigationBarHeight;
- (void)setNavigationBarHeight:(double)arg1;
- (BOOL)tipsBarVisible;
- (id)tipsBarInMixedList;
- (void)setTipsBarInMixedList:(id)arg1;
- (id)oldTipsBarInMixedList;
- (void)setOldTipsBarInMixedList:(id)arg1;
- (id)separatorView;
- (void)setSeparatorView:(id)arg1;
- (id)blurBgView;
- (void)setBlurBgView:(id)arg1;
- (id)mixedListContainerView;
- (void)setMixedListContainerView:(id)arg1;
- (id)mixedListTapGesture;
- (void)setMixedListTapGesture:(id)arg1;
- (id)commonTipsView;
- (void)setCommonTipsView:(id)arg1;
- (id)currentItem;
- (void)setCurrentItem:(id)arg1;
- (id)mixedListFoldBottomView;
- (void)setMixedListFoldBottomView:(id)arg1;
- (id)mixedListExpandView;
- (void)setMixedListExpandView:(id)arg1;
- (BOOL)isShowingExpandView;
- (void)setIsShowingExpandView:(BOOL)arg1;
- (id)currentShowingExpandView;
- (void)setCurrentShowingExpandView:(id)arg1;
- (id)expandViewContainerView;
- (void)setExpandViewContainerView:(id)arg1;
- (id)expandBottomView;
- (void)setExpandBottomView:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)bgMaskView;
- (void)setBgMaskView:(id)arg1;
- (BOOL)isAddingMultipleTipsBar;
- (void)setIsAddingMultipleTipsBar:(BOOL)arg1;
- (id)exposedTipsItems;
- (void)setExposedTipsItems:(id)arg1;
- (id)nsUserName;
- (void)setNsUserName:(id)arg1;
- (void).cxx_destruct;
@end

