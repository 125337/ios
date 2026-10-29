@interface MJShootFavTemplateEntranceView : MMUIView
{
    id <MJShootFavTemplateEntranceViewDelegate> _delegate; // +0x8
    MJShootFavTemplateAuthorButton * _authorButton; // +0x10
    MMUIButton * _favButton; // +0x18
    UIImpactFeedbackGenerator * _feedbackGenerator; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupViews;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)updateWithFavTemplateItem:(id)arg1;
- (void)favButtonDidTouchUpInside:(id)arg1;
- (void)updateWithIsFavorite:(BOOL)arg1;
- (id)authorButton;
- (id)favButton;
- (id)feedbackGenerator;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setAuthorButton:(id)arg1;
- (void)setFavButton:(id)arg1;
- (void)setFeedbackGenerator:(id)arg1;
- (void).cxx_destruct;
@end

