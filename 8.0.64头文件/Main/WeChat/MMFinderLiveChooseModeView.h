@interface MMFinderLiveChooseModeView : UIView <MMFinderLiveMgrExt, UICollectionViewDelegate, UICollectionViewDataSource>
{
    id <MMFinderLiveChooseModeViewDelegate> _delegate; // +0x8
    MMFinderLiveTaskId * _taskId; // +0x10
    MMFinderLiveModeModel * _modeModel; // +0x18
    NSIndexPath * _selectedModeIndexPath; // +0x20
    UICollectionView * _modePanel; // +0x28
    UIView * _modeGreenBG; // +0x30
    UIView * _separatorLine; // +0x38
    UIView * _subModePanel; // +0x40
    UIButton * _verticalModeItem; // +0x48
    UIButton * _horizontalModeItem; // +0x50
    MMWebImageView * _gameIcon; // +0x58
    UILabel * _gameLabel; // +0x60
    UIImageView * _arrowImage; // +0x68
}
+ (double)getSubModePanelHeight:(id)arg1;
+ (double)totalHeight:(id)arg1;
- (id)initWithTaskId:(id)arg1 modeModel:(id)arg2;
- (void)onModeModelRefreshed;
- (void)layoutSubviews;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)layoutUI;
- (void)layoutSubModePanelElement;
- (void)setSelectedModeIndexPath:(id)arg1 completion:(id /* block */)arg2;
- (id)modePanel;
- (id)separatorLine;
- (id)subModePanel;
- (id)modeGreenBG;
- (id)verticalModeItem;
- (id)horizontalModeItem;
- (id)gameIcon;
- (id)gameLabel;
- (id)arrowImage;
- (void)refreshHorizontalItem;
- (void)onVerticalModeSelected;
- (void)onHorizontalModeSelected;
- (void)onVideoSubModeSelected:(BOOL)arg1;
- (void)onSubModePanelTapped;
- (id)liveTask;
- (double)cellWidth;
- (id)getSelectedModeIndexPath;
- (CGRect)getModeBGFrame;
- (void)refreshVideoButtonState;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)modeModel;
- (void)setModeModel:(id)arg1;
- (id)selectedModeIndexPath;
- (void)setSelectedModeIndexPath:(id)arg1;
- (void)setModePanel:(id)arg1;
- (void)setModeGreenBG:(id)arg1;
- (void)setSeparatorLine:(id)arg1;
- (void)setSubModePanel:(id)arg1;
- (void)setVerticalModeItem:(id)arg1;
- (void)setHorizontalModeItem:(id)arg1;
- (void)setGameIcon:(id)arg1;
- (void)setGameLabel:(id)arg1;
- (void)setArrowImage:(id)arg1;
- (void).cxx_destruct;
@end
