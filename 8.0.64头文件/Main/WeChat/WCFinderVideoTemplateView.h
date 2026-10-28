@interface WCFinderVideoTemplateView : MMUIView
{
    id <WCFinderVideoTemplateViewDelegate> _delegate; // +0x8
    UILabel * _titleLabel; // +0x10
    MMWebImageView * _mediaBkgImage; // +0x18
    RichTextView * _songNameTextView; // +0x20
    UILabel * _songDescLabel; // +0x28
    UILabel * _nicknameLabel; // +0x30
    WCFinderAuthInfoIconView * _authIconView; // +0x38
    UIImageView * _arrowImageView; // +0x40
}
+ (id)buildTitleTextView:(double)arg1;
+ (double)height;
- (id)initWithFrame:(CGRect)arg1;
- (id)titleLabel;
- (id)songDescLabel;
- (id)arrowImageView;
- (id)mediaBkgImage;
- (id)songNameTextView;
- (id)nicknameLabel;
- (id)authIconView;
- (void)updateWithMusicTopicInfo:(id)arg1;
- (void)layoutAllSubviews;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setMediaBkgImage:(id)arg1;
- (void)setSongNameTextView:(id)arg1;
- (void)setSongDescLabel:(id)arg1;
- (void)setNicknameLabel:(id)arg1;
- (void)setAuthIconView:(id)arg1;
- (void)setArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end
