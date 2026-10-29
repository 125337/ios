@interface WCFinderJumpIconTitleView : WCFinderJumpInfoView <WCFinderJumpInfoInteractable>
{
    WCFinderNetIconTextBtn * _iconTextBtn; // +0x8
    id <WCFinderJumpInfoInteractDelegate> _interactDelegate; // +0x10
    WCFinderFeedContentVM * _contentVM; // +0x18
}
- (id)initWithFrame:(CGRect)arg1 contentVM:(id)arg2;
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
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (void).cxx_destruct;
@end
