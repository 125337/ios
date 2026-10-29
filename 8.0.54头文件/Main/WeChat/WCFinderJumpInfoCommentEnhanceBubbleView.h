@interface WCFinderJumpInfoCommentEnhanceBubbleView : UIView <WCFinderJumpInfoViewProtocol, WCFinderJumpInfoInteractable>
{
    double _mediaWidth; // +0x8
    id <WCFinderJumpInfoInteractDelegate> _interactDelegate; // +0x10
    double _containerWidth; // +0x18
    WCFinderJumpInfo * _jumpInfo; // +0x20
    WCFinderJumpInfoCommentEnhanceBubbleViewModel * _model; // +0x28
    UIView * _backgroundView; // +0x30
    UILabel * _descriptionLabel; // +0x38
    UILabel * _linkLabel; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupView;
- (void)__updateView;
- (void)__updateLayout;
- (void)didTapBackgroundView;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (int)showPosition;
- (void)setMaxWidth:(double)arg1 maxTextAreaWidth:(double)arg2;
- (id)backgroundView;
- (id)descriptionLabel;
- (id)linkLabel;
- (double)mediaWidth;
- (void)setMediaWidth:(double)arg1;
- (id)interactDelegate;
- (void)setInteractDelegate:(id)arg1;
- (double)containerWidth;
- (void)setContainerWidth:(double)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setDescriptionLabel:(id)arg1;
- (void)setLinkLabel:(id)arg1;
- (void).cxx_destruct;
@end

