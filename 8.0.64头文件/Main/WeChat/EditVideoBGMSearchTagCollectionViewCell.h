@interface EditVideoBGMSearchTagCollectionViewCell : UICollectionViewCell
{
    NSString * _tagName; // +0x8
    UILabel * _tagLabel; // +0x10
}
+ (CGSize)sizeForItem:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)addTagNameLabel;
- (void)updataWithItem:(id)arg1;
- (id)tagName;
- (void)setTagName:(id)arg1;
- (id)tagLabel;
- (void)setTagLabel:(id)arg1;
- (void).cxx_destruct;
@end
