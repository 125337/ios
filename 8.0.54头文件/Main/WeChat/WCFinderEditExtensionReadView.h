@interface WCFinderEditExtensionReadView : WCActionSheet <MMGrowTextViewDelegate>
{
    long long _supportType; // +0x8
    id <WCFinderEditExtensionReadViewDelegate> _m_delegate; // +0x10
    id <WCFinderEditExtensionReadViewDataSource> _dataSource; // +0x18
    UIView * _tipsView; // +0x20
    UIButton * _closeButton; // +0x28
    UILabel * _titleLabel; // +0x30
    UIButton * _addButton; // +0x38
    MMGrowTextView * _growTextView; // +0x40
    NSString * _urlString; // +0x48
    MMUILabel * _guidePasteBoardLabel; // +0x50
    UIImageView * _triangleBView; // +0x58
    UIView * _guidePasteBoardBGView; // +0x60
    NSArray * _extensionLinkAllowedList; // +0x68
    UIView * _textBackgroundView; // +0x70
    NSString * _pasteBoardString; // +0x78
    double _fKeyboardHeight; // +0x80
    UILabel * _bottomWarningLabel; // +0x88
}
- (double)heightOfWholeSheet;
- (double)getCustomView:(double)arg1;
- (id)getTipsActionSheetView;
- (void)setUpBottomWarningView;
- (void)layoutComponents;
- (id)extensionLinkAllowedList;
- (id)tipsView;
- (id)closeButton;
- (id)addButton;
- (id)titleLabel;
- (id)bottomWarningLabel;
- (id)getTitleTips;
- (id)getGrowTextPlaceHolder;
- (id)growTextView;
- (void)setUpPasteBoardGuideBubble;
- (void)removePasteBoardGuideBubble;
- (void)clickPasteBoardStringLabel;
- (void)tapForBecomeFirstResponder;
- (void)showInView:(id)arg1;
- (void)setAddButtonEnable:(BOOL)arg1;
- (void)onClose;
- (void)onAdd;
- (void)TextDidChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)keyboardWillShow:(double)arg1;
- (long long)supportType;
- (void)setSupportType:(long long)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (void)setTipsView:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setAddButton:(id)arg1;
- (void)setGrowTextView:(id)arg1;
- (id)urlString;
- (void)setUrlString:(id)arg1;
- (id)guidePasteBoardLabel;
- (void)setGuidePasteBoardLabel:(id)arg1;
- (id)triangleBView;
- (void)setTriangleBView:(id)arg1;
- (id)guidePasteBoardBGView;
- (void)setGuidePasteBoardBGView:(id)arg1;
- (void)setExtensionLinkAllowedList:(id)arg1;
- (id)textBackgroundView;
- (void)setTextBackgroundView:(id)arg1;
- (id)pasteBoardString;
- (void)setPasteBoardString:(id)arg1;
- (double)fKeyboardHeight;
- (void)setFKeyboardHeight:(double)arg1;
- (void)setBottomWarningLabel:(id)arg1;
- (void).cxx_destruct;
@end

