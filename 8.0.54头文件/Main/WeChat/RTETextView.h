@interface RTETextView : UITextView <RTELayoutManagerDelegate, NSTextStorageDelegate>
{
    NSTextStorage * m_textStorage; // +0x8
    BOOL m_forBidSelectionChangeNotify; // +0x10
    BOOL m_onSetContent; // +0x11
    NSMutableArray * m_arrEditInfo; // +0x18
    Class m_containerViewClass; // +0x20
    BOOL _autoResize; // +0x28
    unsigned long long _sectionIndex; // +0x30
    id <RTETextViewSectionDelegate> _sectionDelegate; // +0x38
    id <RTETextViewDataDelegate> _dataDelegate; // +0x40
    RTEAttachmentViewProvider * _attachmentViewProvider; // +0x48
}
+ (void)initialize;
- (id)initWithFrame:(CGRect)arg1;
- (void)textStorage:(id)arg1 willProcessEditing:(unsigned long long)arg2 range:(_NSRange)arg3 changeInLength:(long long)arg4;
- (void)notifyTextViewDidChange;
- (void)reloadAttachment:(id)arg1;
- (id)layout;
- (void)getContainerViewClass;
- (void)reloadContentAtRange:(_NSRange)arg1;
- (id)getTextAttachmentForAttribute:(id)arg1;
- (void)removeAllAttachmentViews;
- (void)setFrame:(CGRect)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (void)setSelectedRange:(_NSRange)arg1;
- (void)addGestureRecognizer:(id)arg1;
- (void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2;
- (void)setContentOffset:(CGPoint)arg1;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)unmarkText;
- (void)applyEditInfo;
- (void)chectHeightChange;
- (void)invalidateAttachmentsInRange:(_NSRange)arg1;
- (id)attachmentsInRange:(_NSRange)arg1;
- (id)storage;
- (void)drawGlyphsForGlyphRect:(CGRect)arg1 atPoint:(CGPoint)arg2 attachment:(id)arg3;
- (id)findSelectionView;
- (id)findSelectionViewIn:(id)arg1;
- (BOOL)autoResize;
- (void)setAutoResize:(BOOL)arg1;
- (unsigned long long)sectionIndex;
- (void)setSectionIndex:(unsigned long long)arg1;
- (id)sectionDelegate;
- (void)setSectionDelegate:(id)arg1;
- (id)dataDelegate;
- (void)setDataDelegate:(id)arg1;
- (id)attachmentViewProvider;
- (void)setAttachmentViewProvider:(id)arg1;
- (void).cxx_destruct;
@end

