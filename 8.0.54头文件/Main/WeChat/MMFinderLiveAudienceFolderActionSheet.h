@interface MMFinderLiveAudienceFolderActionSheet : MMScrollActionSheet <UIGestureRecognizerDelegate, MMLiveActionSheetFlowLayoutViewDelegate>
{
    UIPanGestureRecognizer * _panGesture; // +0x8
    MMLiveShopShelfDragBar * _dragBar; // +0x10
    MMLiveActionSheetFlowLayoutView * _flowLayoutView; // +0x18
    NSArray * _realItemArray; // +0x20
}
- (id)init;
- (void)commonInit;
- (id)containerViewBlurBackgroundColor;
- (void)setItemArray:(id)arg1;
- (void)showInView:(id)arg1;
- (double)getMaxHeight;
- (id)mmLiveActionSheetFlowLayoutView:(id)arg1 getRedDotShowInfoAtPath:(id)arg2;
- (void)onActionSheetItemClicked:(id)arg1 senderView:(id)arg2;
- (void)handlePopPanGesture:(id)arg1;
- (id)getHeaderView;
- (void)handleContentGestureChangeTo:(double)arg1;
- (void)handleContentGestureEnd;
- (id)seperatorBackgroundColor;
- (void)configScrollActionSheet:(id)arg1 rowIndex:(unsigned long long)arg2;
- (double)customIconMargin;
- (id)panGesture;
- (void)setPanGesture:(id)arg1;
- (id)dragBar;
- (void)setDragBar:(id)arg1;
- (id)flowLayoutView;
- (void)setFlowLayoutView:(id)arg1;
- (id)realItemArray;
- (void)setRealItemArray:(id)arg1;
- (void).cxx_destruct;
@end

