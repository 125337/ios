@interface WCFinderJumpIconTitleView : UIView <WCFinderJumpInfoViewProtocol, WCFinderJumpInfoInteractable>
{
    int _showPosition; // +0x8
    WCFinderNetIconTextBtn * _iconTextBtn; // +0x10
    id <WCFinderJumpInfoInteractDelegate> _interactDelegate; // +0x18
    FinderJumpInfo_Style * _style; // +0x20
    WCFinderJumpInfo * _jumpInfo; // +0x28
    WCFinderFeedContentVM * _contentVM; // +0x30
}
- (id)initWithFrame:(CGRect)arg1 contentVM:(id)arg2;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)updateUIInfo;
- (void)layoutViewByPosition;
- (void)setMaxWidth:(double)arg1 maxTextAreaWidth:(double)arg2;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)iconTextBtn;
- (void)setIconTextBtn:(id)arg1;
- (id)interactDelegate;
- (void)setInteractDelegate:(id)arg1;
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

