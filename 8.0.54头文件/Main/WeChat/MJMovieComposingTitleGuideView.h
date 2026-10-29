@interface MJMovieComposingTitleGuideView : MMUIView
{
    BOOL _hasBeenTouched; // +0x8
    MMUIButton * _closeButton; // +0x10
    UILabel * _titleLabel; // +0x18
    id <MJMovieComposingTitleGuideViewDelegate> _delegate; // +0x20
    UITapGestureRecognizer * _tapGR; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupViews;
- (id)closeButton;
- (id)titleLabel;
- (void)layoutViews;
- (void)updateLayoutToNoraml;
- (void)updateLayoutToShirnked;
- (void)closeButtonTouchUpInside:(id)arg1;
- (void)tapGRAction:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)hasBeenTouched;
- (void)setHasBeenTouched:(BOOL)arg1;
- (id)tapGR;
- (void)setTapGR:(id)arg1;
- (void).cxx_destruct;
@end

