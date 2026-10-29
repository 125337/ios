@interface WCLiveScrollActionSheet : MMScrollActionSheet <MMLiveActionSheetFlowLayoutViewDelegate, UIGestureRecognizerDelegate, WCFinderLiveShareSceneProvider>
{
    BOOL _isInStopState; // +0x8
    BOOL _isAnchorShare; // +0x9
    BOOL _isConnectMicEnabled; // +0xa
    BOOL _isCameraClosed; // +0xb
    id /* block */ _redDotQueryBlock; // +0x10
    id /* block */ _redDotCtrlInfoQueryBlock; // +0x18
    WCFinderLiveAnchorLogReporter * _anchorReporter; // +0x20
    unsigned long long _showType; // +0x28
    WCLiveScrollActionSheetViewModel * _sheetVM; // +0x30
    long long _liveShareScene; // +0x38
    MMFinderLiveTaskId * _liveTaskId; // +0x40
    MMLiveActionSheetFlowLayoutView * _anchorOrAssistantFlowLayoutView; // +0x48
    NSArray * _sctionTitleArray; // +0x50
    UIPanGestureRecognizer * _panGesture; // +0x58
    MMLiveShopShelfDragBar * _dragBar; // +0x60
    MMFinderLiveTask * _finderLiveTask; // +0x68
    MMScrollActionSheetItemView * _firstItemViewWithRedDot; // +0x70
}
- (id)initWithLiveTask:(id)arg1;
- (id)initWithLiveTaskId:(id)arg1;
- (id)initWithLiveTaskId:(id)arg1 showType:(unsigned long long)arg2;
- (id)initWithLiveTaskId:(id)arg1 showType:(unsigned long long)arg2 redDotQueryBlock:(id /* block */)arg3 redDotCtrlInfoQueryBlock:(id /* block */)arg4 isAnchorShare:(BOOL)arg5;
- (id)initWithLiveTaskId:(id)arg1 showType:(unsigned long long)arg2 redDotQueryBlock:(id /* block */)arg3 redDotCtrlInfoQueryBlock:(id /* block */)arg4 isAnchorShare:(BOOL)arg5 liveShareScene:(long long)arg6;
- (void)changeFlowLayoutView;
- (void)updateWithAnchorShare:(BOOL)arg1;
- (void)reloadMenuData;
- (void)loadData;
- (id)loadActivityItemArray;
- (id)loadItemArrayForAudience;
- (id)loadItemArrayForAnchor;
- (id)loadItemArrayForAssistant;
- (id)getChangeAppSceneItem;
- (void)setSubPath:(id)arg1;
- (BOOL)shouldShowAnchorTaskGuide:(id)arg1;
- (id)transparentViewBackgroundColor;
- (id)bottomPadddingViewBackgroundColor;
- (id)titleLabelColor;
- (id)cancelButtonTitleColor;
- (id)cancelButtonBackgroundColor;
- (id)containerViewBlurBackgroundColor;
- (id)seperatorBackgroundColor;
- (double)getMaxHeight;
- (BOOL)disableScrollSheetItem:(long long)arg1;
- (BOOL)handleConnectMic;
- (id)getClarityItemSubTitleWithCdnStreamList:(id)arg1 andLiveTask:(id)arg2;
- (id)liveTask;
- (void)reportAnchorActionSheetItems:(id)arg1;
- (void)reportNewAnchorTaskSubPathWithType:(unsigned int)arg1;
- (id)mmLiveActionSheetFlowLayoutView:(id)arg1 getRedDotShowInfoAtPath:(id)arg2;
- (void)onActionSheetItemClicked:(id)arg1 senderView:(id)arg2;
- (void)showInView:(id)arg1;
- (void)dismissAnimated:(BOOL)arg1;
- (id)itemArray;
- (void)reportForChangeAppSceneItemExpose;
- (void)configItemView:(id)arg1 withItem:(id)arg2;
- (double)extraItemViewSpacingForScrollView:(id)arg1;
- (void)reportForSensitiveItemExpose;
- (void)reportForSensitiveItemSelect;
- (BOOL)hasShowAudienceMoreFunction;
- (void)setUpEdgePanGesture;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)getCurrentSctionTitleArray;
- (BOOL)showNewStyle;
- (void)setIsInStopState:(BOOL)arg1;
- (id)sheetVM;
- (void)handlePopPanGesture:(id)arg1;
- (id)getHeaderView;
- (void)handleContentGestureChangeTo:(double)arg1;
- (void)handleContentGestureEnd;
- (BOOL)shouldShowMoreRedDotAtPath:(id)arg1 type:(unsigned long long)arg2 moreFuncItems:(id)arg3;
- (BOOL)shouldShowMoreRedDotForAssistantAtPath:(id)arg1 type:(unsigned long long)arg2;
- (BOOL)shouldShowMoreRedDotForAudienceAtPath:(id)arg1 type:(unsigned long long)arg2;
- (BOOL)shouldShowMoreRedDotForAnchorAtPath:(id)arg1 type:(unsigned long long)arg2;
- (void)reportShareExposeWithEid:(id)arg1;
- (void)reportAudienceOperation:(id)arg1 isClick:(BOOL)arg2;
- (id)audienceLogReporter;
- (id /* block */)redDotQueryBlock;
- (void)setRedDotQueryBlock:(id /* block */)arg1;
- (id /* block */)redDotCtrlInfoQueryBlock;
- (void)setRedDotCtrlInfoQueryBlock:(id /* block */)arg1;
- (BOOL)isInStopState;
- (id)anchorReporter;
- (void)setAnchorReporter:(id)arg1;
- (unsigned long long)showType;
- (void)setShowType:(unsigned long long)arg1;
- (BOOL)isAnchorShare;
- (void)setIsAnchorShare:(BOOL)arg1;
- (void)setSheetVM:(id)arg1;
- (long long)liveShareScene;
- (void)setLiveShareScene:(long long)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (BOOL)isConnectMicEnabled;
- (BOOL)isCameraClosed;
- (id)anchorOrAssistantFlowLayoutView;
- (void)setAnchorOrAssistantFlowLayoutView:(id)arg1;
- (id)sctionTitleArray;
- (void)setSctionTitleArray:(id)arg1;
- (id)panGesture;
- (void)setPanGesture:(id)arg1;
- (id)dragBar;
- (void)setDragBar:(id)arg1;
- (id)finderLiveTask;
- (void)setFinderLiveTask:(id)arg1;
- (id)firstItemViewWithRedDot;
- (void)setFirstItemViewWithRedDot:(id)arg1;
- (void).cxx_destruct;
@end

