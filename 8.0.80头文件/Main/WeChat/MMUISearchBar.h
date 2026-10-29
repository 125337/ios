@interface MMUISearchBar : UISearchBar
{
    BOOL m_bForceAdjustFrame; // +0x8
    BOOL m_bNonControllerBind; // +0x9
    UIView * _innerCursor; // +0x10
    UIView * _bottomLine; // +0x18
    NSNumber * _oIconDefaultWidth; // +0x20
    CGSize _iconDefaultSize; // +0x28
    BOOL _bForbidAdjustIconSize; // +0x38
    BOOL _bForceFixHeight; // +0x39
    BOOL _bNeedCheckTopLeak; // +0x3a
    BOOL _bForbidAdjustCursor; // +0x3b
    BOOL _bMagnifierTipsCenter; // +0x3c
    BOOL _forbidBecomeFirstResponder; // +0x3d
    UIColor * _cancelButtonColor; // +0x40
    UIColor * _placeHolderIconColor; // +0x48
    UIImage * _placeHolderIcon; // +0x50
    UIColor * _textFieldColor; // +0x58
    unsigned long long _bottomLineStyle; // +0x60
    UISearchController * _weakSearchController; // +0x68
    unsigned long long _eControlState; // +0x70
    UILabel * _tipsLabel; // +0x78
    UIImageView * _rightLoadingView; // +0x80
    CGSize _sizeForNoCancelButtonTextField; // +0x88
}
- (void)internalInitTipsLabel;
- (void)setTipsLabelText:(id)arg1;
- (void)setCustomTipsLabelHidden:(BOOL)arg1;
- (void)setTagAttributeText:(id)arg1;
- (void)textFieldAddSubView:(id)arg1;
- (id)getTextField;
- (void)resetTextAttributes;
- (void)resetAttributes;
- (void)showTextLoadingView;
- (void)removeTextLoadingView;
- (void)layoutTagView;
- (void)animateFakeCursor;
- (id)genFakeCursor;
- (void)removeFakeCursor;
- (BOOL)handleCursorObserveForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)setFrame:(CGRect)arg1;
- (void)setEControlState:(unsigned long long)arg1;
- (void)onControlStateChangeTo:(unsigned long long)arg1;
- (void)setPlaceHolderIconColor:(id)arg1;
- (void)setPlaceHolderIcon:(id)arg1;
- (void)setImageForSearchIcon;
- (BOOL)isViewOfUISearchController:(id)arg1;
- (id)findUISearchBarTextFieldLabel:(id)arg1;
- (id)findUISearchBarImage:(id)arg1;
- (id)findPlaceHolderIcon:(id)arg1;
- (id)internalFindPlaceHolderIcon;
- (id)findCancelButton;
- (id)recursiveFindCancelButton:(id)arg1;
- (id)findTextFieldActionButton;
- (id)recursiveFindTextFieldActionButton:(id)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)fixSearchIconSize;
- (void)fixLayoutOnActiveSearch;
- (void)fixOrientationBug;
- (void)setPlaceholder:(id)arg1;
- (double)textFieldWidthWhenResignResponder;
- (CGSize)sizeForNoCancelButtonTextField;
- (void)resetCachedValues;
- (void)fixTipsCenterAlign;
- (void)fixTipsLeftAlign;
- (void)fixPlaceLabelCenterAlign;
- (void)fixSearchBarBackgroundWhenActive;
- (id)getSearchBarBackground;
- (void)updateBottomLineStyle;
- (void)fixTextField;
- (id)textFieldColor;
- (void)fixPlaceHolderColor;
- (void)fixIOS13Issue;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)cacheCursorAddress;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)fixCursorAnimation;
- (void)resetCursorAnimation;
- (void)setCancelButtonText;
- (BOOL)m_bForceAdjustFrame;
- (void)setM_bForceAdjustFrame:(BOOL)arg1;
- (BOOL)m_bNonControllerBind;
- (void)setM_bNonControllerBind:(BOOL)arg1;
- (BOOL)bForbidAdjustIconSize;
- (void)setBForbidAdjustIconSize:(BOOL)arg1;
- (BOOL)bForceFixHeight;
- (void)setBForceFixHeight:(BOOL)arg1;
- (id)cancelButtonColor;
- (void)setCancelButtonColor:(id)arg1;
- (id)placeHolderIconColor;
- (id)placeHolderIcon;
- (void)setTextFieldColor:(id)arg1;
- (unsigned long long)bottomLineStyle;
- (void)setBottomLineStyle:(unsigned long long)arg1;
- (BOOL)bNeedCheckTopLeak;
- (void)setBNeedCheckTopLeak:(BOOL)arg1;
- (id)weakSearchController;
- (void)setWeakSearchController:(id)arg1;
- (unsigned long long)eControlState;
- (BOOL)bForbidAdjustCursor;
- (void)setBForbidAdjustCursor:(BOOL)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)rightLoadingView;
- (void)setRightLoadingView:(id)arg1;
- (BOOL)bMagnifierTipsCenter;
- (void)setBMagnifierTipsCenter:(BOOL)arg1;
- (BOOL)forbidBecomeFirstResponder;
- (void)setForbidBecomeFirstResponder:(BOOL)arg1;
- (void)setSizeForNoCancelButtonTextField:(CGSize)arg1;
- (void).cxx_destruct;
@end
