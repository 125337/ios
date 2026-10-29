@interface TingSharedAudioView : UIControl <MMImageLoaderObserver>
{
    BOOL _ignoreTouchesExceptPlayButton; // +0x8
    UIImageView * _imageView; // +0x10
    MMUILabel * _titleLabel; // +0x18
    MMUILabel * _subtitleLabel; // +0x20
    TingSharePlayButton * _playButton; // +0x28
    MMListenCategoryItem * _categoryItem; // +0x30
    UIView * _contentView; // +0x38
    UIView * _highlightedMaskView; // +0x40
    UIImageView * _arrowView; // +0x48
}
+ (double)cardHeight;
+ (CGSize)cardSizeForChat;
+ (CGSize)cardSizeForMoment;
- (id)contentView;
- (id)highlightedMaskView;
- (id)imageView;
- (id)titleLabel;
- (id)subtitleLabel;
- (id)playButton;
- (id)arrowView;
- (int)fontModule;
- (id)initWithFrame:(CGRect)arg1;
- (void)configureLayout;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (void)updateDisplayWith:(id)arg1;
- (void)updateTextAndLayoutWith:(id)arg1;
- (void)reloadTingItemCover;
- (void)updateThumbnail:(id)arg1;
- (void)updateTitle:(id)arg1 subtitle:(id)arg2 isMusic:(BOOL)arg3;
- (void)_updateTitle:(id)arg1 subtitle:(id)arg2 isMusic:(BOOL)arg3;
- (void)setCategoryItem:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)setImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setPlayButton:(id)arg1;
- (id)categoryItem;
- (BOOL)ignoreTouchesExceptPlayButton;
- (void)setIgnoreTouchesExceptPlayButton:(BOOL)arg1;
- (void)setContentView:(id)arg1;
- (void)setHighlightedMaskView:(id)arg1;
- (void)setArrowView:(id)arg1;
- (void).cxx_destruct;
@end

