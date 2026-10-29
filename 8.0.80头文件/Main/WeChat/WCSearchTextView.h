@interface WCSearchTextView : MMGrowTextView
{
    BOOL _isEditing; // +0xb8
    BOOL _isLargeInputBox; // +0xb9
    BOOL _lastLoggedLargeInputScrollPinned; // +0xba
    BOOL _lastLoggedLargeInputContentClipped; // +0xbb
    unsigned int _largeInputMaximumVisibleLines; // +0xbc
    unsigned int _lastMaxLines; // +0xc0
    unsigned int _lastLoggedLargeInputScrollLineCount; // +0xc4
    WCSearchTextViewForwardDelegate * _forwardDelegate; // +0xc8
}
- (id)initWithOriginHeight:(double)arg1;
- (id)initWithOriginHeight:(double)arg1 extConfig:(id)arg2;
- (void)setWcSearchDelegate:(id)arg1;
- (unsigned int)calculateLines;
- (void)layoutSubviews;
- (void)applyLargeInputContentInsets;
- (BOOL)isLargeInputSelectionAtTextTail;
- (void)handleLargeInputSelectionChange;
- (double)largeInputLineHeight;
- (double)largeInputWindowContentHeight;
- (void)refreshLargeInputScrollPositionWithSource:(id)arg1;
- (void)changeContentSize;
- (void)resetScrollPositionForIOS7;
- (id)selectedText;
- (id)confirmedText;
- (id)selectedAttributedText;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)isEditing;
- (void)setIsEditing:(BOOL)arg1;
- (BOOL)isLargeInputBox;
- (void)setIsLargeInputBox:(BOOL)arg1;
- (unsigned int)largeInputMaximumVisibleLines;
- (void)setLargeInputMaximumVisibleLines:(unsigned int)arg1;
- (unsigned int)lastMaxLines;
- (id)forwardDelegate;
- (void)setForwardDelegate:(id)arg1;
- (unsigned int)lastLoggedLargeInputScrollLineCount;
- (void)setLastLoggedLargeInputScrollLineCount:(unsigned int)arg1;
- (BOOL)lastLoggedLargeInputScrollPinned;
- (void)setLastLoggedLargeInputScrollPinned:(BOOL)arg1;
- (BOOL)lastLoggedLargeInputContentClipped;
- (void)setLastLoggedLargeInputContentClipped:(BOOL)arg1;
- (void).cxx_destruct;
@end
