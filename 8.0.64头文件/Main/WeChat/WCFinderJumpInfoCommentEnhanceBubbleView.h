@interface WCFinderJumpInfoCommentEnhanceBubbleView : WCFinderJumpInfoView <WCFinderJumpInfoInteractable>
{
    id <WCFinderJumpInfoInteractDelegate> _interactDelegate; // +0x8
    double _containerWidth; // +0x10
    WCFinderJumpInfoCommentEnhanceBubbleViewModel * _model; // +0x18
    UIView * _backgroundView; // +0x20
    UILabel * _descriptionLabel; // +0x28
    UILabel * _linkLabel; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupView;
- (void)__updateView;
- (void)__updateLayout;
- (void)didTapBackgroundView;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (int)showPosition;
- (void)setMaxWidth:(double)arg1 maxTextAreaWidth:(double)arg2;
- (double)mediaWidth;
- (id)backgroundView;
- (id)descriptionLabel;
- (id)linkLabel;
- (id)interactDelegate;
- (void)setInteractDelegate:(id)arg1;
- (double)containerWidth;
- (void)setContainerWidth:(double)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setDescriptionLabel:(id)arg1;
- (void)setLinkLabel:(id)arg1;
- (void).cxx_destruct;
@end
