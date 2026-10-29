@interface WCBaseKeyboardToolBar : NSObject <UIGestureRecognizerDelegate, MMTableViewInfoDelegate>
{
    UIBarButtonItem * m_PreviousButtonItem; // +0x8
    UIBarButtonItem * m_NextButtonItem; // +0x10
    UIBarButtonItem * m_SpaceButtonItem; // +0x18
    UIBarButtonItem * m_FinishButtonItem; // +0x20
    UIToolbar * m_toolBar; // +0x28
    UIScrollView * m_scrollView; // +0x30
    double m_keyboardHeight; // +0x38
    NSMutableArray * m_arrItem; // +0x40
    long long m_uiCurrentItemIndex; // +0x48
    BOOL m_bTouchHide; // +0x50
    BOOL m_bNoAutoPostion; // +0x51
    BOOL m_bScrollChangedResignFirstResponder; // +0x52
    SEL m_scrollChangedAction; // +0x58
    id m_scrollChangedTarget; // +0x60
    BOOL _bNeedManualKeyboardFrameChange; // +0x68
    SEL _manualSetAction; // +0x70
    id _manualSetTarget; // +0x78
}
- (id)init;
- (void)setTouchHide:(BOOL)arg1;
- (void)setNoAutoPostion:(BOOL)arg1;
- (void)setScrollChangedResignFirstResponder:(BOOL)arg1 Action:(SEL)arg2 Target:(id)arg3;
- (void)dealloc;
- (void)initToolBar;
- (id)getView;
- (void)removeAllItem;
- (void)addItem:(id)arg1;
- (void)setScrollView:(id)arg1;
- (BOOL)findCurrentActiveItem;
- (BOOL)setCurrentActiveItem:(id)arg1;
- (void)initBtnItem;
- (void)initNotification;
- (void)changeKeyBoardSize:(id)arg1;
- (void)sizeWhenBecameFirstResponder;
- (void)positionWhenBecameFirstResponder:(id)arg1 withAnimated:(BOOL)arg2;
- (void)setNeedManualKeyboardFrameChange:(BOOL)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidChangeFrame:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)UpdateBarButtonItem;
- (void)OnPreviousItem;
- (void)OnNextItem;
- (void)done;
- (void)mmTableView:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)bNeedManualKeyboardFrameChange;
- (void)setBNeedManualKeyboardFrameChange:(BOOL)arg1;
- (SEL)manualSetAction;
- (void)setManualSetAction:(SEL)arg1;
- (id)manualSetTarget;
- (void)setManualSetTarget:(id)arg1;
- (void).cxx_destruct;
@end

