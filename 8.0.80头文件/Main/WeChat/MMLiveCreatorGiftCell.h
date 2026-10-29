@interface MMLiveCreatorGiftCell : UICollectionViewCell <MMFinderLiveGiftResourceMgrExt>
{
    BOOL _isPinned; // +0x8
    BOOL _isInSelectedState; // +0x9
    BOOL _isPlayingAnimation; // +0xa
    BOOL _isPendingPagPlay; // +0xb
    MMFinderLiveRewardGiftItem * _giftItem; // +0x10
    id /* block */ _actionCallback; // +0x18
    UIImageView * _thumbnailView; // +0x20
    UIImage * _thumbnailImg; // +0x28
    PAGView * _pagView; // +0x30
    MMUILabel * _displayNameLabel; // +0x38
    UIView * _priceContainer; // +0x40
    UIImageView * _coinIconView; // +0x48
    MMUILabel * _priceLabel; // +0x50
    UIImageView * _pinnedIndicatorView; // +0x58
    MMUIView * _tagView; // +0x60
    MMUILabel * _tagLabel; // +0x68
    UIButton * _actionButton; // +0x70
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)updateWithGiftItem:(id)arg1 isPinned:(BOOL)arg2;
- (void)playSelectAnimation;
- (void)showStaticThumbnail;
- (void)initUI;
- (void)enterSelectedState;
- (void)exitSelectedState;
- (void)onActionButtonTapped;
- (void)layoutSubviews;
- (void)loadThumbnail;
- (id)defaultThumbnail;
- (void)updateTagWithGiftItem:(id)arg1;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 resType:(long long)arg2 productId:(id)arg3 downloadUrl:(id)arg4;
- (id)giftItem;
- (void)setGiftItem:(id)arg1;
- (BOOL)isPinned;
- (void)setIsPinned:(BOOL)arg1;
- (BOOL)isInSelectedState;
- (void)setIsInSelectedState:(BOOL)arg1;
- (id /* block */)actionCallback;
- (void)setActionCallback:(id /* block */)arg1;
- (id)thumbnailView;
- (void)setThumbnailView:(id)arg1;
- (id)thumbnailImg;
- (void)setThumbnailImg:(id)arg1;
- (id)pagView;
- (void)setPagView:(id)arg1;
- (id)displayNameLabel;
- (void)setDisplayNameLabel:(id)arg1;
- (id)priceContainer;
- (void)setPriceContainer:(id)arg1;
- (id)coinIconView;
- (void)setCoinIconView:(id)arg1;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg1;
- (id)pinnedIndicatorView;
- (void)setPinnedIndicatorView:(id)arg1;
- (id)tagView;
- (void)setTagView:(id)arg1;
- (id)tagLabel;
- (void)setTagLabel:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (BOOL)isPlayingAnimation;
- (void)setIsPlayingAnimation:(BOOL)arg1;
- (BOOL)isPendingPagPlay;
- (void)setIsPendingPagPlay:(BOOL)arg1;
- (void).cxx_destruct;
@end
