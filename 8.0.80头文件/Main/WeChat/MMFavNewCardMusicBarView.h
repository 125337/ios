@interface MMFavNewCardMusicBarView : UIView <MMImageLoaderObserver>
{
    BOOL _isMusic; // +0x8
    UIImageView * _coverImageView; // +0x10
    MMUILabel * _titleLabel; // +0x18
    MMUILabel * _subtitleLabel; // +0x20
    TingSharePlayButton * _playButton; // +0x28
}
+ (CGSize)preferredSize;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)configureWithImageComData:(id)arg1;
- (void)dealloc;
- (void)applyStyleForMusic:(BOOL)arg1;
- (void)loadCoverForImageComData:(id)arg1 tingItem:(id)arg2;
- (void)updateCoverImage:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)applySearchHighlightKeywords:(id)arg1;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)playButton;
- (void)setPlayButton:(id)arg1;
- (BOOL)isMusic;
- (void)setIsMusic:(BOOL)arg1;
- (void).cxx_destruct;
@end
