@interface FTSFeatureWeShopCell : FTSFeatureCell
{
    MMHeadImageView * _shopHeadImageView; // +0x30
    AttributeLabel * _shopTitleLabel; // +0x38
    MMWebImageView * _shopRIconImageView; // +0x40
    MMUILabel * _shopTagLabel; // +0x48
    AttributeLabel * _shopDetailLabel; // +0x50
    BOOL _bIsTopHit; // +0x58
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupWeShopViews;
- (void)prepareForReuse;
- (void)updateStatus:(BOOL)arg1;
- (void)updateFeatureItem:(id)arg1 matchTip:(id)arg2;
- (void)updateFeatureItem:(id)arg1 matchTip:(id)arg2 asTopHit:(BOOL)arg3;
- (void)layoutSubviews;
- (id)resolveHighlightKeywordsForShopName:(id)arg1;
- (id)tagTextForTagType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
