@interface MMFinderLiveCommentContentView : MMFinderLiveCommentBaseContentView <UIGestureRecognizerDelegate>
{
    id /* block */ _getIsShowingInputViewCallback; // +0x8
    id /* block */ _getIsEnableChangeContentStateCallback; // +0x10
    id /* block */ _getEnableShowContentTabBarCallback; // +0x18
    id /* block */ _onNotifyAreaHeightChangedCallback; // +0x20
    NSArray * _redDotList; // +0x28
    unsigned long long _startDisplayTime; // +0x30
    UITapGestureRecognizer * _commentTableTapGesRecognizer; // +0x38
    double _previousNotifyAreaHeight; // +0x40
}
- (BOOL)getEnableShowContentTabBar;
- (BOOL)getIsShowingInputView;
- (BOOL)getIsEnableChangeContentState;
- (void)updateRedDotList:(id)arg1;
- (void)checkHasRedDot;
- (double)getNotifyAreaHeight;
- (void)checkNotifyAreaHeightIsChanged;
- (id)createTopCommentContainerViewIfNeeded;
- (id)createHotWordsCommentContainerViewIfNeeded;
- (id)commentDataMgr;
- (void)reportForDisplay;
- (void)reportForUnDisplay;
- (void)handleScrollConflicts:(id)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)checkSelfHasConsumeTouch:(CGPoint)arg1 withEvent:(id)arg2;
- (id)redirectHitTestIfNeeded:(CGPoint)arg1 event:(id)arg2 originHitView:(id)arg3;
- (id)redirectHitTouchIfNeeded:(CGPoint)arg1 touchInView:(id)arg2;
- (BOOL)checkSelfHasConsumePivotCollectionTapGesture:(id)arg1;
- (BOOL)checkSelfDidScrollToBottom;
- (double)commentTableWidth:(id)arg1;
- (double)commentTableWidthPortrait:(id)arg1;
- (double)commentTableWidthLandScape:(id)arg1;
- (double)currentCommentTableWidth:(id)arg1;
- (id)createUnReadCountLabel;
- (BOOL)isUnReadCntLabelPanNeedScrollCommentTable;
- (id)createCommentTableView;
- (void)handleCommentTableTapGesture:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id /* block */)getIsShowingInputViewCallback;
- (void)setGetIsShowingInputViewCallback:(id /* block */)arg1;
- (id /* block */)getIsEnableChangeContentStateCallback;
- (void)setGetIsEnableChangeContentStateCallback:(id /* block */)arg1;
- (id /* block */)getEnableShowContentTabBarCallback;
- (void)setGetEnableShowContentTabBarCallback:(id /* block */)arg1;
- (id /* block */)onNotifyAreaHeightChangedCallback;
- (void)setOnNotifyAreaHeightChangedCallback:(id /* block */)arg1;
- (id)redDotList;
- (void)setRedDotList:(id)arg1;
- (unsigned long long)startDisplayTime;
- (void)setStartDisplayTime:(unsigned long long)arg1;
- (id)commentTableTapGesRecognizer;
- (void)setCommentTableTapGesRecognizer:(id)arg1;
- (double)previousNotifyAreaHeight;
- (void)setPreviousNotifyAreaHeight:(double)arg1;
- (void).cxx_destruct;
@end
