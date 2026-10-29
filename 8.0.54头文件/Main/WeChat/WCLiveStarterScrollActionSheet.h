@interface WCLiveStarterScrollActionSheet : MMScrollActionSheet <MMLiveActionSheetFlowLayoutViewDelegate, UIGestureRecognizerDelegate>
{
    BOOL _isCommentEnable; // +0x8
    BOOL _isMicEnable; // +0x9
    BOOL _isRewardEnable; // +0xa
    BOOL _shouldHideRedPacketItem; // +0xb
    BOOL _shouldHideLinkItem; // +0xc
    BOOL _shouldHideFansGroupItem; // +0xd
    BOOL _shouldHideRewardWishItem; // +0xe
    id /* block */ _redDotQueryBlock; // +0x10
    id /* block */ _redDotCtrlInfoQueryBlock; // +0x18
    unsigned long long _hiddenItemsFlag; // +0x20
    WCLiveStarterScrollActionSheetViewModel * _sheetVM; // +0x28
    MMFinderLiveTaskId * _liveTaskId; // +0x30
    long long _currVisibilityMode; // +0x38
    MMLiveActionSheetFlowLayoutView * _anchorFlowLayoutView; // +0x40
    WCFinderLiveAnchorLogReporter * _reporter; // +0x48
    WCFinderLiveStarterReporter * _starterReporter; // +0x50
    MMScrollActionSheetItemView * _firstItemViewWithRedDot; // +0x58
    NSArray * _sctionTitleArray; // +0x60
    UIPanGestureRecognizer * _panGesture; // +0x68
    MMLiveShopShelfDragBar * _dragBar; // +0x70
}
- (id)initWithLiveTaskId:(id)arg1;
- (void)loadData;
- (BOOL)isGameLiveMode;
- (id)loadItemArray;
- (void)creatorCenterEntryTo:(id)arg1;
- (void)anchorOpPromotionCardItem:(id)arg1;
- (BOOL)shouldShowMoreRedDotForPath:(id)arg1 type:(unsigned long long)arg2;
- (void)anchorCommentManageItem:(id)arg1;
- (void)anchorMoreFunctionItem:(id)arg1;
- (void)anchorLiveNoticeItem:(id)arg1;
- (void)linkToRow:(id)arg1;
- (void)redPacketToRow:(id)arg1;
- (void)fansGroupItemToRow:(id)arg1;
- (void)customizeRewardItemToRow:(id)arg1;
- (void)trafficItemToRow:(id)arg1;
- (void)rewardWishItemToRow:(id)arg1;
- (void)connectMicItemToRow:(id)arg1;
- (void)anchorFeedbackEntrance:(id)arg1;
- (void)setSubPath:(id)arg1;
- (BOOL)shouldShowAnchorTaskGuide:(id)arg1;
- (long long)currVisibilityMode;
- (void)onActionSheetItemClicked:(id)arg1 senderView:(id)arg2;
- (id)mmLiveActionSheetFlowLayoutView:(id)arg1 getRedDotShowInfoAtPath:(id)arg2;
- (void)reportNewAnchorTaskSubPathWithType:(unsigned int)arg1;
- (id)itemArray;
- (void)showInView:(id)arg1;
- (id)finderLiveTask;
- (void)configItemView:(id)arg1 withItem:(id)arg2;
- (id)sheetVM;
- (void)setHiddenItemsFlag:(unsigned long long)arg1;
- (void)reportQuickReplyExpose;
- (void)reportForSensitiveItemExpose;
- (void)reportForSensitiveItemSelect;
- (void)setUpEdgePanGesture;
- (void)handlePopPanGesture:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)getHeaderView;
- (void)handleContentGestureChangeTo:(double)arg1;
- (void)handleContentGestureEnd;
- (id /* block */)redDotQueryBlock;
- (void)setRedDotQueryBlock:(id /* block */)arg1;
- (id /* block */)redDotCtrlInfoQueryBlock;
- (void)setRedDotCtrlInfoQueryBlock:(id /* block */)arg1;
- (unsigned long long)hiddenItemsFlag;
- (void)setSheetVM:(id)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (BOOL)isCommentEnable;
- (void)setIsCommentEnable:(BOOL)arg1;
- (BOOL)isMicEnable;
- (void)setIsMicEnable:(BOOL)arg1;
- (BOOL)isRewardEnable;
- (void)setIsRewardEnable:(BOOL)arg1;
- (void)setCurrVisibilityMode:(long long)arg1;
- (id)anchorFlowLayoutView;
- (void)setAnchorFlowLayoutView:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)starterReporter;
- (void)setStarterReporter:(id)arg1;
- (id)firstItemViewWithRedDot;
- (void)setFirstItemViewWithRedDot:(id)arg1;
- (id)sctionTitleArray;
- (void)setSctionTitleArray:(id)arg1;
- (id)panGesture;
- (void)setPanGesture:(id)arg1;
- (id)dragBar;
- (void)setDragBar:(id)arg1;
- (BOOL)shouldHideRedPacketItem;
- (BOOL)shouldHideLinkItem;
- (BOOL)shouldHideFansGroupItem;
- (BOOL)shouldHideRewardWishItem;
- (void).cxx_destruct;
@end

