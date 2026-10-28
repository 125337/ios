@interface WCCommentStrangerViewController : MMUIViewController <UITextViewDelegate>
{
    UIScrollView * m_scrollView; // +0x70
    UITextView * m_textView; // +0x78
    UILabel * m_labKF; // +0x80
    UIButton * m_btnPhone; // +0x88
    UIImageView * m_textBG; // +0x90
    float m_fTextBGDefaultHeight; // +0x98
    float m_fTextViewDefaultHeight; // +0x9c
    float m_fLabelKFDefaultY; // +0xa0
    float m_fBtnPhoneDefaultY; // +0xa4
    double m_fKeyboardHeight; // +0xa8
    WCDataItem * dataItem; // +0xb0
    unsigned int source; // +0xb8
    BOOL m_bSendTextOnly; // +0xbc
    id <WCCommentStrangerViewControllerDelegate> m_delegate; // +0xc0
    WCPasteTextLengthLogic * pastelogic; // +0xc8
    int m_commentWordLimit; // +0xd0
}
+ (id)openOldText;
+ (void)writeOldText:(id)arg1;
+ (void)removeOldText;
- (void)setTextViewContent:(id)arg1;
- (void)startLoading;
- (void)OnCancel;
- (void)OnReturn;
- (void)doSendMessage;
- (void)onSendMessage:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)initLeftBtn;
- (void)initRightBtn;
- (void)initTextView;
- (void)keyboardWillShow:(id)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)resizeViews;
- (id)init;
- (void)dealloc;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (unsigned int)source;
- (void)setSource:(unsigned int)arg1;
- (BOOL)isSendTextOnly;
- (void)setIsSendTextOnly:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
