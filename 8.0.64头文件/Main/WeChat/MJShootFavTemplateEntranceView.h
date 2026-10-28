@interface MJShootFavTemplateEntranceView : MMUIView
{
    id <MJShootFavTemplateEntranceViewDelegate> _delegate; // +0x8
    MMWebImageView * _authorIconView; // +0x10
    MMUILabel * _authorNoteLabel; // +0x18
    MMUILabel * _authorNameLabel; // +0x20
    MMUIButton * _authorContainerButton; // +0x28
    MJToolbarButton * _favButton; // +0x30
    UIImpactFeedbackGenerator * _feedbackGenerator; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupViews;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)updateWithFavTemplateItem:(id)arg1;
- (void)authorContainerButtonDidTouchUpInside:(id)arg1;
- (void)favButtonDidTouchUpInside:(id)arg1;
- (void)updateWithIsFavorite:(BOOL)arg1;
- (id)authorIconView;
- (id)authorNoteLabel;
- (id)authorNameLabel;
- (id)authorContainerButton;
- (id)favButton;
- (id)feedbackGenerator;
- (CGSize)favIconSize;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setAuthorIconView:(id)arg1;
- (void)setAuthorNoteLabel:(id)arg1;
- (void)setAuthorNameLabel:(id)arg1;
- (void)setAuthorContainerButton:(id)arg1;
- (void)setFavButton:(id)arg1;
- (void)setFeedbackGenerator:(id)arg1;
- (void).cxx_destruct;
@end
