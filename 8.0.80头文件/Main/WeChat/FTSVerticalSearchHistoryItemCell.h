@interface FTSVerticalSearchHistoryItemCell : MMTableViewCell <UIGestureRecognizerDelegate>
{
    GeneralHStack * _hStack; // +0x8
    id <FTSVerticalSearchHistoryItemCellDelegate> _delegate; // +0x10
    WSNativeVerticalHistoryItem * _historyItem; // +0x18
}
+ (id)GenHStackWith:(id)arg1;
- (void)updateHistoryItem:(id)arg1 needLineView:(BOOL)arg2;
- (void)addDeleteAction;
- (void)addJumpAction;
- (void)addClearAction;
- (void)handleDelPressGesture:(id)arg1;
- (void)handleTitlePressGesture:(id)arg1;
- (void)handleClearPressGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)hStack;
- (void)setHStack:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)historyItem;
- (void)setHistoryItem:(id)arg1;
- (void).cxx_destruct;
@end
