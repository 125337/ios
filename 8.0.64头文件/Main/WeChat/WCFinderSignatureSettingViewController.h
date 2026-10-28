@interface WCFinderSignatureSettingViewController : MMUIViewController <MMGrowTextViewDelegate, WCFinderMentionUserListViewControllerDelegate>
{
    BOOL _updateTextByMentionVC; // +0x70
    BOOL _showSafePanelAlready; // +0x71
    WCFinderContact * _contact; // +0x78
    id <WCFinderSignatureSettingViewControllerDelegate> _m_delegate; // +0x80
    UIScrollView * _scrollView; // +0x88
    UILabel * _titleLabel; // +0x90
    UILabel * _editTitleLabel; // +0x98
    UILabel * _wordTips; // +0xa0
    UIButton * _confirmButton; // +0xa8
    UIView * _topLine; // +0xb0
    UIView * _bottomLine; // +0xb8
    MMGrowTextView * _textView; // +0xc0
    double _keyboardHeight; // +0xc8
    unsigned long long _currentTextLength; // +0xd0
}
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)OnCancel;
- (void)OnReturn;
- (id)modUserSignaturePromise;
- (id)signatureValidCheckPromise:(id)arg1;
- (void)setupSelectRange;
- (void)layoutView;
- (void)setupView;
- (void)pushMentionVC;
- (void)keyboardWillShow:(double)arg1;
- (void)keyboardWillHide:(BOOL)arg1;
- (void)TextViewHeightDidChanged:(id)arg1;
- (void)TextDidChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)cutLimitLineNumber:(long long)arg1 forTextView:(id)arg2;
- (void)updateAttributeStr;
- (void)TextViewDidEnter:(id)arg1;
- (id)_onTextView:(id)arg1 shouldChangeRange:(_NSRange)arg2 byReplaceText:(id)arg3;
- (id)contactAttrAtTextView:(id)arg1 atIndex:(long long)arg2 effectiveRange:(_NSRange *)arg3;
- (void)didSelectedMentionUserWith:(id)arg1 userContact:(id)arg2;
- (void)onMentionContact:(id)arg1;
- (void)cancelSelectedMentionUserWith:(id)arg1;
- (void)showError:(id)arg1;
- (void)updateWordCountTipsLabel:(int)arg1;
- (id)scrollView;
- (id)titleLabel;
- (id)confirmButton;
- (id)bottomLine;
- (id)topLine;
- (id)wordTips;
- (id)textView;
- (BOOL)triggerSafePanelActionSheetByTitle:(id)arg1 subTitle:(id)arg2 clickSubTitleAction:(id /* block */)arg3 acceptMsg:(id)arg4 clickAcceptBlock:(id /* block */)arg5 cancelMsg:(id)arg6 clickCancelBlock:(id /* block */)arg7 buttonModelArray:(id)arg8;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)editTitleLabel;
- (void)setEditTitleLabel:(id)arg1;
- (void)setWordTips:(id)arg1;
- (void)setConfirmButton:(id)arg1;
- (void)setTopLine:(id)arg1;
- (void)setBottomLine:(id)arg1;
- (void)setTextView:(id)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (unsigned long long)currentTextLength;
- (void)setCurrentTextLength:(unsigned long long)arg1;
- (BOOL)updateTextByMentionVC;
- (void)setUpdateTextByMentionVC:(BOOL)arg1;
- (BOOL)showSafePanelAlready;
- (void)setShowSafePanelAlready:(BOOL)arg1;
- (void).cxx_destruct;
@end
