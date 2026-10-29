@interface TingSharedAudioView : UIControl <MMImageLoaderObserver>
{
    BOOL _usesChatStyle; // +0x8
    BOOL _ignoreTouchesExceptPlayButton; // +0x9
    BOOL _chatBubbleIsSender; // +0xa
    UIImageView * _imageView; // +0x10
    MMUILabel * _titleLabel; // +0x18
    MMUILabel * _subtitleLabel; // +0x20
    TingSharePlayButton * _playButton; // +0x28
    MMListenCategoryItem * _categoryItem; // +0x30
    UIView * _contentView; // +0x38
    UIImageView * _highlightedMaskView; // +0x40
    UIImageView * _chatBubbleView; // +0x48
    double _chatBubbleMargin; // +0x50
    UIImageView * _arrowView; // +0x58
    UIImageView * _reviewBadgeView; // +0x60
    UIView * _reviewBadgeGradientMask; // +0x68
}
+ (CGSize)cardSizeForChatWithContainerWidth:(double)arg1;
+ (CGSize)cardSizeForMomentWithContainerWidth:(double)arg1 maxContentWidth:(double)arg2;
- (id)contentView;
- (id)highlightedMaskView;
- (id)chatBubbleView;
- (id)imageView;
- (id)titleLabel;
- (id)subtitleLabel;
- (id)playButton;
- (id)arrowView;
- (id)reviewBadgeView;
- (id)reviewBadgeGradientMask;
- (int)fontModule;
- (id)initWithFrame:(CGRect)arg1;
- (void)configureLayout;
- (void)configureChatLayoutWithTextLayout:(id)arg1;
- (void)configureLegacyLayoutWithTextLayout:(id)arg1;
- (void)setUsesChatStyle:(BOOL)arg1;
- (void)setChatBubbleImage:(id)arg1 margin:(double)arg2 isSender:(BOOL)arg3;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (void)updateDisplayWith:(id)arg1;
- (void)updateTextAndLayoutWith:(id)arg1;
- (void)_updateReviewBadgeWithReviewInfo:(id)arg1;
- (void)reloadTingItemCover;
- (void)updateThumbnail:(id)arg1;
- (void)updateTitle:(id)arg1 subtitle:(id)arg2 isMusic:(BOOL)arg3;
- (void)_updateTitle:(id)arg1 subtitle:(id)arg2 isMusic:(BOOL)arg3;
- (void)setCategoryItem:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (BOOL)usesChatStyle;
- (void)setImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setPlayButton:(id)arg1;
- (id)categoryItem;
- (BOOL)ignoreTouchesExceptPlayButton;
- (void)setIgnoreTouchesExceptPlayButton:(BOOL)arg1;
- (void)setContentView:(id)arg1;
- (void)setHighlightedMaskView:(id)arg1;
- (void)setChatBubbleView:(id)arg1;
- (double)chatBubbleMargin;
- (void)setChatBubbleMargin:(double)arg1;
- (BOOL)chatBubbleIsSender;
- (void)setChatBubbleIsSender:(BOOL)arg1;
- (void)setArrowView:(id)arg1;
- (void)setReviewBadgeView:(id)arg1;
- (void)setReviewBadgeGradientMask:(id)arg1;
- (void).cxx_destruct;
@end
