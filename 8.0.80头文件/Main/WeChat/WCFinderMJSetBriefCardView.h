@interface WCFinderMJSetBriefCardView : MMUIView
{
    UIView * _line; // +0x8
    UIImageView * _mediaBkgImage; // +0x10
    RichTextView * _titleTextView; // +0x18
    UILabel * _subTitleLabel; // +0x20
    MMUIButton * _button; // +0x28
    WCFinderMJSetFavoriteButton * _favoriteButton; // +0x30
}
+ (id)buildTitleTextView:(double)arg1;
+ (double)height;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)line;
- (id)button;
- (id)favoriteButton;
- (id)mediaBkgImage;
- (id)titleTextView;
- (id)subTitleLabel;
- (void)layoutAllSubviews;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)updateWithVM:(id)arg1 clickBlock:(id /* block */)arg2 favoriteClickBlock:(id /* block */)arg3;
- (void)updateFavoriteButtonWithItem:(id)arg1;
- (void)setLine:(id)arg1;
- (void)setMediaBkgImage:(id)arg1;
- (void)setTitleTextView:(id)arg1;
- (void)setSubTitleLabel:(id)arg1;
- (void)setButton:(id)arg1;
- (void)setFavoriteButton:(id)arg1;
- (void).cxx_destruct;
@end
