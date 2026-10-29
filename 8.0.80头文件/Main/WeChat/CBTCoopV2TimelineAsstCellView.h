@interface CBTCoopV2TimelineAsstCellView : MMUIView
{
    BOOL _contentDirty; // +0x8
    id <CBTCoopV2TimelineAsstCellViewDelegate> _delegate; // +0x10
    double _renderedHeight; // +0x18
    double _highlightHorizontalOutset; // +0x20
    WCDataItem * _dataItem; // +0x28
    UIControl * _tapOverlayView; // +0x30
    UIView * _itemHighlightView; // +0x38
    double _highlightBeganTime; // +0x40
    MMHeadImageView * _headImageView; // +0x48
    UrlLabel * _nickLabel; // +0x50
    RichTextView * _contentDescView; // +0x58
    UIView * _mediaView; // +0x60
    UILabel * _locationLabel; // +0x68
    UILabel * _sourceLabel; // +0x70
    UILabel * _timeLabel; // +0x78
    double _lastLayoutWidth; // +0x80
    UILabel * _contentFullTextLabel; // +0x88
}
+ (double)renderedHeightForDataItem:(id)arg1 width:(double)arg2;
+ (id)createContentTextView;
- (void)layoutSubviews;
- (BOOL)shouldUseCompactTextLayoutForDataItem:(id)arg1;
- (BOOL)shouldUseCompactPhotoLayoutForDataItem:(id)arg1;
- (BOOL)isCompactNativeMusicContentTypeForDataItem:(id)arg1;
- (BOOL)shouldUseCompactNativeMusicLayoutForDataItem:(id)arg1;
- (BOOL)shouldUseCompactTingCategoryLayoutForDataItem:(id)arg1;
- (BOOL)isCompactArticleContentTypeForDataItem:(id)arg1;
- (BOOL)isCompactMiniProgramContentTypeForDataItem:(id)arg1;
- (BOOL)isCompactEmotionContentTypeForDataItem:(id)arg1;
- (BOOL)shouldUseCompactMiniProgramLayoutForDataItem:(id)arg1;
- (BOOL)shouldUseCompactEmotionLayoutForDataItem:(id)arg1;
- (BOOL)isCompactFavoriteContentTypeForDataItem:(id)arg1;
- (BOOL)shouldUseCompactFavoriteLayoutForDataItem:(id)arg1;
- (BOOL)shouldUseCompactChatBotShareLayoutForDataItem:(id)arg1;
- (BOOL)shouldUseCompactBrandFeedLayoutForDataItem:(id)arg1;
- (BOOL)isCompactPhotoAccountForDataItem:(id)arg1;
- (BOOL)shouldUseCompactExternalMusicLayoutForDataItem:(id)arg1;
- (BOOL)shouldUseCompactArticleLayoutForDataItem:(id)arg1;
- (BOOL)isCompactPhotoContentTypeForDataItem:(id)arg1;
- (BOOL)shouldUseCompactPhotoWithTextLayoutForDataItem:(id)arg1;
- (BOOL)isCompactVideoContentTypeForDataItem:(id)arg1;
- (BOOL)isCompactFinderContentTypeForDataItem:(id)arg1;
- (BOOL)isCompactLiveContentTypeForDataItem:(id)arg1;
- (BOOL)shouldUseCompactVideoLayoutForDataItem:(id)arg1;
- (BOOL)shouldUseCompactFinderLayoutForDataItem:(id)arg1;
- (BOOL)shouldUseCompactLiveLayoutForDataItem:(id)arg1;
- (id)compactLocationText;
- (BOOL)shouldShowCompactLocation;
- (id)compactArticleSourceText;
- (BOOL)shouldShowCompactArticleSource;
- (void)updateWithDataItem:(id)arg1;
- (void)rebuildWithDataItem:(id)arg1;
- (void)layoutCompactTextItemWithContentX:(double)arg1 contentWidth:(double)arg2;
- (void)layoutCompactMusicItemWithContentX:(double)arg1 contentWidth:(double)arg2 externalStyle:(BOOL)arg3;
- (void)layoutCompactTingCategoryItemWithContentX:(double)arg1 contentWidth:(double)arg2;
- (void)layoutCompactArticleItemWithContentX:(double)arg1 contentWidth:(double)arg2;
- (void)layoutCompactBrandFeedItemWithContentX:(double)arg1 contentWidth:(double)arg2;
- (void)layoutCompactChatBotShareItemWithContentX:(double)arg1 contentWidth:(double)arg2;
- (void)layoutCompactPhotoItemWithContentX:(double)arg1 contentWidth:(double)arg2;
- (void)layoutCompactPhotoWithTextItemWithContentX:(double)arg1 contentWidth:(double)arg2;
- (void)layoutCompactVideoItemWithContentX:(double)arg1 contentWidth:(double)arg2;
- (void)layoutCompactFinderItemWithContentX:(double)arg1 contentWidth:(double)arg2;
- (void)layoutCompactLiveItemWithContentX:(double)arg1 contentWidth:(double)arg2;
- (double)compactTopRowHeightForFont:(id)arg1;
- (double)outerTextLineHeightForFont:(id)arg1;
- (double)outerTextLineSpacingForFont:(id)arg1;
- (void)setOuterText:(id)arg1 forLabel:(id)arg2;
- (double)layoutCompactHeaderWithContentX:(double)arg1 contentWidth:(double)arg2;
- (double)layoutCompactArticleMetaWithContentX:(double)arg1 startY:(double)arg2 contentWidth:(double)arg3;
- (double)compactMetaHeightForText:(id)arg1 font:(id)arg2 width:(double)arg3 maxLines:(long long)arg4;
- (double)layoutCompactLocationWithContentX:(double)arg1 startY:(double)arg2 contentWidth:(double)arg3;
- (double)textHeightForText:(id)arg1 font:(id)arg2 width:(double)arg3 maxLines:(long long)arg4;
- (void)setupHeadImage;
- (void)setupNickLabel;
- (void)setupTapOverlay;
- (void)setupItemHighlightViewIfNeeded;
- (void)updateItemHighlightVisible:(BOOL)arg1;
- (void)onTapOverlayTouchDown:(id)arg1 event:(id)arg2;
- (void)onTapOverlayTouchDragEnter:(id)arg1 event:(id)arg2;
- (void)onTapOverlayTouchDragExit:(id)arg1 event:(id)arg2;
- (void)onTapOverlayTouchCancel:(id)arg1 event:(id)arg2;
- (void)onTapOverlayTouchUpOutside:(id)arg1 event:(id)arg2;
- (void)onTapOverlayTouchUpInside:(id)arg1 event:(id)arg2;
- (double)layoutCompactFullTextIndicatorIfNeededAtX:(double)arg1 y:(double)arg2 width:(double)arg3;
- (void)setupContentFullTextLabel;
- (void)setupCompactContentDescView:(id)arg1 contentWidth:(double)arg2;
- (void)setupCompactImageMediaViewAtOrigin:(CGPoint)arg1 contentWidth:(double)arg2;
- (void)setupCompactVideoMediaViewAtOrigin:(CGPoint)arg1 contentWidth:(double)arg2;
- (void)setupCompactFinderMediaViewAtOrigin:(CGPoint)arg1;
- (void)setupCompactLiveMediaViewAtOrigin:(CGPoint)arg1;
- (void)setupCompactArticleMediaViewAtOrigin:(CGPoint)arg1 contentWidth:(double)arg2;
- (void)setupCompactMusicMediaViewAtOrigin:(CGPoint)arg1 contentWidth:(double)arg2 externalStyle:(BOOL)arg3;
- (void)setupCompactTingCategoryMediaViewAtOrigin:(CGPoint)arg1 contentWidth:(double)arg2;
- (void)setupCompactBrandFeedMediaViewAtOrigin:(CGPoint)arg1;
- (void)setupCompactChatBotShareMediaViewAtOrigin:(CGPoint)arg1;
- (void)setupLocationLabel;
- (void)setupLocationLabelWithMaxLines:(long long)arg1;
- (void)setupSourceLabelWithMaxLines:(long long)arg1;
- (void)setupTimeLabel;
- (void)onHeadImageTapped;
- (void)onCardTapped;
- (void)onTapOverlayLongPress:(id)arg1;
- (void)onLocationTapped;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)renderedHeight;
- (void)setRenderedHeight:(double)arg1;
- (double)highlightHorizontalOutset;
- (void)setHighlightHorizontalOutset:(double)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)tapOverlayView;
- (void)setTapOverlayView:(id)arg1;
- (id)itemHighlightView;
- (void)setItemHighlightView:(id)arg1;
- (double)highlightBeganTime;
- (void)setHighlightBeganTime:(double)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)nickLabel;
- (void)setNickLabel:(id)arg1;
- (id)contentDescView;
- (void)setContentDescView:(id)arg1;
- (id)mediaView;
- (void)setMediaView:(id)arg1;
- (id)locationLabel;
- (void)setLocationLabel:(id)arg1;
- (id)sourceLabel;
- (void)setSourceLabel:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (double)lastLayoutWidth;
- (void)setLastLayoutWidth:(double)arg1;
- (BOOL)contentDirty;
- (void)setContentDirty:(BOOL)arg1;
- (id)contentFullTextLabel;
- (void)setContentFullTextLabel:(id)arg1;
- (void).cxx_destruct;
@end
