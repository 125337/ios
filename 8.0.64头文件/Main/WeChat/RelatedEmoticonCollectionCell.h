@interface RelatedEmoticonCollectionCell : UICollectionViewCell <IStoreEmotionSingleDownloadMgrExt>
{
    BOOL _needPurchase; // +0x8
    BOOL _needPlayGif; // +0x9
    BOOL _needShowDesc; // +0xa
    CEmoticonWrap * _emoticonWrap; // +0x10
    WSEmoticonModel * _similarEmoticon; // +0x18
    double _padding; // +0x20
    MMWebImageView * _thumbView; // +0x28
    MMEmoticonView * _emoticonView; // +0x30
    UILabel * _descLabel; // +0x38
    UILabel * _purchaseLabel; // +0x40
    SightIconView * _sightIconView; // +0x48
    CGSize _emoticonSize; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setEmoticonSize:(CGSize)arg1;
- (void)setNeedShowDesc:(BOOL)arg1;
- (void)setNeedPurchase:(BOOL)arg1;
- (void)setPadding:(double)arg1;
- (void)setNeedPlayGif:(BOOL)arg1;
- (void)setSimilarEmoticon:(id)arg1;
- (void)updateEmoticonView;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (id)emoticonWrap;
- (void)setEmoticonWrap:(id)arg1;
- (BOOL)needPurchase;
- (id)similarEmoticon;
- (BOOL)needPlayGif;
- (BOOL)needShowDesc;
- (double)padding;
- (CGSize)emoticonSize;
- (id)thumbView;
- (void)setThumbView:(id)arg1;
- (id)emoticonView;
- (void)setEmoticonView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)purchaseLabel;
- (void)setPurchaseLabel:(id)arg1;
- (id)sightIconView;
- (void)setSightIconView:(id)arg1;
- (void).cxx_destruct;
@end
