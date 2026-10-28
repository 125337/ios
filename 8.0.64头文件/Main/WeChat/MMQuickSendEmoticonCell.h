@interface MMQuickSendEmoticonCell : UICollectionViewCell <IStoreEmotionSingleDownloadMgrExt>
{
    UIView * m_backgroundView; // +0x8
    BOOL _needPlayGif; // +0x10
    MMEmoticonView * _emoticonView; // +0x18
    MMWebImageView * _thumbView; // +0x20
    CEmoticonWrap * _emoticonWrap; // +0x28
    SightIconView * _sightIconView; // +0x30
    UILabel * _descLabel; // +0x38
    MMQuickSendEmoticonSearchCellView * _searchView; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)showBackgroundView;
- (void)setHighlighted:(BOOL)arg1;
- (void)setEmoticonWrap:(id)arg1 PlayGif:(BOOL)arg2;
- (void)setupForSearch;
- (void)showRecommendIdentifyIfNeeded;
- (void)updateEmoticonView;
- (void)layoutSubviews;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (id)emoticonView;
- (void)setEmoticonView:(id)arg1;
- (id)thumbView;
- (void)setThumbView:(id)arg1;
- (id)emoticonWrap;
- (void)setEmoticonWrap:(id)arg1;
- (id)sightIconView;
- (void)setSightIconView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (BOOL)needPlayGif;
- (void)setNeedPlayGif:(BOOL)arg1;
- (id)searchView;
- (void)setSearchView:(id)arg1;
- (void).cxx_destruct;
@end
