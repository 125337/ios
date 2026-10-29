@interface SearchEmoticonCollectionCell : UICollectionViewCell <IStoreEmotionSingleDownloadMgrExt>
{
    BOOL _needPurchase; // +0x8
    BOOL _needPlayGif; // +0x9
    BOOL _isLocal; // +0xa
    unsigned long long _index; // +0x10
    CEmoticonWrap * _emoticonWrap; // +0x18
    EmoticonRecommendWrap * _recommendWrap; // +0x20
    MMWebImageView * _thumbView; // +0x28
    MMEmoticonView * _emoticonView; // +0x30
    UILabel * _descLabel; // +0x38
    UILabel * _purchaseLabel; // +0x40
    SightIconView * _sightIconView; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (id)thumbView;
- (id)emoticonView;
- (id)sightIconView;
- (id)purchaseLabel;
- (void)layoutSubviews;
- (void)setNeedPurchase:(BOOL)arg1;
- (void)setNeedPlayGif:(BOOL)arg1;
- (void)updateEmojiDataView:(id)arg1 isLocal:(BOOL)arg2;
- (void)updateEmoticonView;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (id)emoticonWrap;
- (void)setEmoticonWrap:(id)arg1;
- (BOOL)needPurchase;
- (id)recommendWrap;
- (void)setRecommendWrap:(id)arg1;
- (BOOL)needPlayGif;
- (void)setThumbView:(id)arg1;
- (void)setEmoticonView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (void)setPurchaseLabel:(id)arg1;
- (void)setSightIconView:(id)arg1;
- (BOOL)isLocal;
- (void)setIsLocal:(BOOL)arg1;
- (void).cxx_destruct;
@end

