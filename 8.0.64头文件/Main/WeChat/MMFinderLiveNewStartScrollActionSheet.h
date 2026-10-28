@interface MMFinderLiveNewStartScrollActionSheet : MMScrollActionSheet <MMLiveActionSheetFlowLayoutViewDelegate, UIGestureRecognizerDelegate>
{
    MMFinderLiveChooseModeView * _chooseModeView; // +0x8
    id <MMFinderLiveNewStartScrollActionSheetDelegate> _controllerDelegate; // +0x10
    id /* block */ _redDotQueryBlock; // +0x18
    id /* block */ _redDotCtrlInfoQueryBlock; // +0x20
    WCLiveStarterScrollActionSheetViewModel * _sheetVM; // +0x28
    MMFinderLiveTaskId * _liveTaskId; // +0x30
    WCFinderStarterLiveViewModel * _startVM; // +0x38
    MMFinderLiveModeModel * _modeModel; // +0x40
    UIPanGestureRecognizer * _panGesture; // +0x48
    double _previousPanPositionY; // +0x50
    MMLiveShopShelfDragBar * _dragBar; // +0x58
    UIScrollView * _bodyView; // +0x60
    UIView * _chooseModeHeader; // +0x68
    UILabel * _chooseModeHeaderLabel; // +0x70
    NSArray * _actionSheetItems; // +0x78
    NSArray * _sctionTitleArray; // +0x80
    MMLiveActionSheetFlowLayoutView * _anchorFlowLayoutView; // +0x88
    WCFinderLiveAnchorLogReporter * _reporter; // +0x90
    WCFinderLiveStarterReporter * _starterReporter; // +0x98
    MMScrollActionSheetItemView * _firstItemViewWithRedDot; // +0xa0
}
- (id)initWithLiveTaskId:(id)arg1 startVM:(id)arg2;
- (void)relayoutView;
- (void)onModeModelRefreshed;
- (void)loadItemArray;
- (void)poiItem:(id)arg1;
- (void)tagItem:(id)arg1;
- (void)gameStickerItem:(id)arg1;
- (void)visibilityItem:(id)arg1;
- (void)videoItem:(id)arg1;
- (void)noticeItem:(id)arg1;
- (void)promotionItem:(id)arg1;
- (void)addReplaySettingItemIntoRow:(id)arg1;
- (void)prizeItem:(id)arg1;
- (void)musicItem:(id)arg1;
- (void)connectMicItem:(id)arg1;
- (void)fansGroupItem:(id)arg1;
- (void)rewardWishItem:(id)arg1;
- (void)playTogetherItem:(id)arg1;
- (void)anchorOpPromotionCardItem:(id)arg1;
- (void)shoppingItem:(id)arg1;
- (void)trafficItemToRow:(id)arg1;
- (void)customizeRewardItem:(id)arg1;
- (void)moreFunctionItem:(id)arg1;
- (void)creatorCenterItem:(id)arg1;
- (void)anchorFeedbackEntrance:(id)arg1;
- (BOOL)shouldShowMoreRedDotForPath:(id)arg1 type:(unsigned long long)arg2;
- (void)onActionSheetItemClicked:(id)arg1 senderView:(id)arg2;
- (id)mmLiveActionSheetFlowLayoutView:(id)arg1 getRedDotShowInfoAtPath:(id)arg2;
- (void)reportNewAnchorTaskSubPathWithType:(unsigned int)arg1;
- (id)itemArray;
- (void)showInView:(id)arg1;
- (id)liveTask;
- (void)configItemView:(id)arg1 withItem:(id)arg2;
- (id)sheetVM;
- (id)anchorFlowLayoutView;
- (id)dragBar;
- (id)chooseModeHeader;
- (id)chooseModeHeaderLabel;
- (id)chooseModeView;
- (id)bodyView;
- (void)reportQuickReplyExpose;
- (void)reportForSensitiveItemExpose;
- (void)reportForSensitiveItemSelect;
- (void)setUpEdgePanGesture;
- (void)handlePopPanGesture:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleContentGestureChangeTo:(double)arg1;
- (void)handleContentGestureEnd;
- (void)setChooseModeView:(id)arg1;
- (id)controllerDelegate;
- (void)setControllerDelegate:(id)arg1;
- (id /* block */)redDotQueryBlock;
- (void)setRedDotQueryBlock:(id /* block */)arg1;
- (id /* block */)redDotCtrlInfoQueryBlock;
- (void)setRedDotCtrlInfoQueryBlock:(id /* block */)arg1;
- (void)setSheetVM:(id)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)startVM;
- (void)setStartVM:(id)arg1;
- (id)modeModel;
- (void)setModeModel:(id)arg1;
- (id)panGesture;
- (void)setPanGesture:(id)arg1;
- (double)previousPanPositionY;
- (void)setPreviousPanPositionY:(double)arg1;
- (void)setDragBar:(id)arg1;
- (void)setBodyView:(id)arg1;
- (void)setChooseModeHeader:(id)arg1;
- (void)setChooseModeHeaderLabel:(id)arg1;
- (id)actionSheetItems;
- (void)setActionSheetItems:(id)arg1;
- (id)sctionTitleArray;
- (void)setSctionTitleArray:(id)arg1;
- (void)setAnchorFlowLayoutView:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)starterReporter;
- (void)setStarterReporter:(id)arg1;
- (id)firstItemViewWithRedDot;
- (void)setFirstItemViewWithRedDot:(id)arg1;
- (void).cxx_destruct;
@end
