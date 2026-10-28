@interface WCSearchTextView : MMGrowTextView
{
    BOOL _isEditing; // +0xb8
    unsigned int _lastMaxLines; // +0xbc
    WCSearchTextViewForwardDelegate * _forwardDelegate; // +0xc0
}
- (id)initWithOriginHeight:(double)arg1;
- (id)initWithOriginHeight:(double)arg1 extConfig:(id)arg2;
- (void)setWcSearchDelegate:(id)arg1;
- (unsigned int)calculateLines;
- (void)resetScrollPositionForIOS7;
- (id)selectedText;
- (id)confirmedText;
- (id)selectedAttributedText;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)isEditing;
- (void)setIsEditing:(BOOL)arg1;
- (unsigned int)lastMaxLines;
- (id)forwardDelegate;
- (void)setForwardDelegate:(id)arg1;
- (void).cxx_destruct;
@end
