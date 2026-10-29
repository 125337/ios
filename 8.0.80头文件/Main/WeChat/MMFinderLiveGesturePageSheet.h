@interface MMFinderLiveGesturePageSheet : MMLandscapeDragBarPageSheet <UICollectionViewDataSource, MMFinderLiveGestureLogicExt>
{
    BOOL _showHint; // +0x8
    BOOL _isSubSheet; // +0x9
    id <MMFinderLiveGesturePageSheetDelegate> _delegate; // +0x10
    UIView * _switchSectionView; // +0x18
    UILabel * _switchTitleLabel; // +0x20
    UILabel * _switchSubtitleLabel; // +0x28
    UIView * _switchContainerView; // +0x30
    UISwitch * _switchView; // +0x38
    UICollectionView * _collectionView; // +0x40
    MMUIButton * _backButton; // +0x48
    UIView * _parentView; // +0x50
    UIView * _hintContainerView; // +0x58
    UIImageView * _hintIconView; // +0x60
    UILabel * _hintLabel; // +0x68
    unsigned long long _currentHintIndex; // +0x70
    MMFinderLiveTaskId * _taskId; // +0x78
    NSArray * _gestureItems; // +0x80
}
- (id)initWithTaskId:(id)arg1;
- (id)initWithTaskId:(id)arg1 isSubSheet:(BOOL)arg2;
- (id)backButton;
- (void)pageSheetDidAppear;
- (void)pageSheetDidDisappear;
- (void)layoutSubviews;
- (void)onSwitchToggled;
- (void)onBackButtonTapped;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)onGestureAnimationInvokedForGestureId:(id)arg1 taskId:(id)arg2;
- (void)setupPageSheetConfig;
- (id)liveTask;
- (void)showNextHint;
- (void)hideHint;
- (void)invalidateHint;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)switchSectionView;
- (void)setSwitchSectionView:(id)arg1;
- (id)switchTitleLabel;
- (void)setSwitchTitleLabel:(id)arg1;
- (id)switchSubtitleLabel;
- (void)setSwitchSubtitleLabel:(id)arg1;
- (id)switchContainerView;
- (void)setSwitchContainerView:(id)arg1;
- (id)switchView;
- (void)setSwitchView:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (void)setBackButton:(id)arg1;
- (BOOL)showHint;
- (void)setShowHint:(BOOL)arg1;
- (BOOL)isSubSheet;
- (void)setIsSubSheet:(BOOL)arg1;
- (id)parentView;
- (void)setParentView:(id)arg1;
- (id)hintContainerView;
- (void)setHintContainerView:(id)arg1;
- (id)hintIconView;
- (void)setHintIconView:(id)arg1;
- (id)hintLabel;
- (void)setHintLabel:(id)arg1;
- (unsigned long long)currentHintIndex;
- (void)setCurrentHintIndex:(unsigned long long)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)gestureItems;
- (void)setGestureItems:(id)arg1;
- (void).cxx_destruct;
@end
