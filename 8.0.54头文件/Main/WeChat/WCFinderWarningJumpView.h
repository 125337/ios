@interface WCFinderWarningJumpView : UIView <WCFinderJumpInfoViewProtocol>
{
    int _showPosition; // +0x8
    id <WCFinderWarningJumpViewDelegate> _delegate; // +0x10
    WCFinderJumpInfoIconView * _iconView; // +0x18
    RichTextView * _textView; // +0x20
    FinderJumpInfo_Style * _style; // +0x28
    WCFinderJumpInfo * _jumpInfo; // +0x30
    WCFinderFeedContentVM * _contentVM; // +0x38
}
- (id)initWithFrame:(CGRect)arg1 contentVM:(id)arg2;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)updateUIInfo;
- (void)layoutViewByPosition;
- (void)setMaxWidth:(double)arg1 maxTextAreaWidth:(double)arg2;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)style;
- (void)setStyle:(id)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (int)showPosition;
- (void)setShowPosition:(int)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (void).cxx_destruct;
@end

