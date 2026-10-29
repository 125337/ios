@interface MMFinderLiveAudienceFolderActionSheet : MMScrollActionSheet <UIGestureRecognizerDelegate, MMLiveActionSheetFlowLayoutViewDelegate>
{
    id /* block */ _didExposeButtonType; // +0x8
    UIPanGestureRecognizer * _panGesture; // +0x10
    MMLivePageSheetDragBar * _dragBar; // +0x18
    MMLiveActionSheetFlowLayoutView * _flowLayoutView; // +0x20
    NSArray * _realItemArray; // +0x28
    NSMutableSet * _reportedButtonTypes; // +0x30
}
- (id)init;
- (void)commonInit;
- (id)containerViewBlurBackgroundColor;
- (void)setItemArray:(id)arg1;
- (void)showInView:(id)arg1;
- (void)didMoveToWindow;
- (double)getMaxHeight;
- (id)mmLiveActionSheetFlowLayoutView:(id)arg1 getRedDotShowInfoAtPath:(id)arg2;
- (void)onActionSheetItemClicked:(id)arg1 senderView:(id)arg2;
- (void)mmLiveActionSheetFlowLayoutViewDidScroll:(id)arg1;
- (void)reportVisibleButtonItemsIfNeeded;
- (void)handlePopPanGesture:(id)arg1;
- (id)getHeaderView;
- (void)handleContentGestureChangeTo:(double)arg1;
- (void)handleContentGestureEnd;
- (id)seperatorBackgroundColor;
- (void)configScrollActionSheet:(id)arg1 rowIndex:(unsigned long long)arg2;
- (double)customIconMargin;
- (id /* block */)didExposeButtonType;
- (void)setDidExposeButtonType:(id /* block */)arg1;
- (id)panGesture;
- (void)setPanGesture:(id)arg1;
- (id)dragBar;
- (void)setDragBar:(id)arg1;
- (id)flowLayoutView;
- (void)setFlowLayoutView:(id)arg1;
- (id)realItemArray;
- (void)setRealItemArray:(id)arg1;
- (id)reportedButtonTypes;
- (void)setReportedButtonTypes:(id)arg1;
- (void).cxx_destruct;
@end
