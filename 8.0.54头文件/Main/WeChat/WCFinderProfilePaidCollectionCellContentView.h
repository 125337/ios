@interface WCFinderProfilePaidCollectionCellContentView : UIView <WCFinderPaidCollectionExt>
{
    MMWebImageView * _coverImgView; // +0x8
    RichTextView * _titleView; // +0x10
    UILabel * _descLabel; // +0x18
    MMUIButton * _priceLabel; // +0x20
    FinderPaidCollectionInfo * _paidCollection; // +0x28
    CGSize _layoutSize; // +0x30
}
+ (double)titleMaxWidthWithWidth:(double)arg1;
+ (double)viewHeightWithPaidCollection:(id)arg1 width:(double)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)prepareForReuse;
- (void)updateWithPaidCollection:(id)arg1;
- (id)priceTextWithPrice:(unsigned long long)arg1 purchased:(BOOL)arg2;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updatePriceText:(id)arg1;
- (void)onPaidCollectionTopicID:(id)arg1 purchaseStateChanged:(BOOL)arg2;
- (id)coverImgView;
- (void)setCoverImgView:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg1;
- (id)paidCollection;
- (void)setPaidCollection:(id)arg1;
- (CGSize)layoutSize;
- (void)setLayoutSize:(CGSize)arg1;
- (void).cxx_destruct;
@end

