@interface ContactsViewTagListCollectionViewCell : UICollectionViewCell
{
    BOOL _isChosen; // +0x8
    double _tagViewCornerRadius; // +0x10
    UIColor * _tagButtonTextColor; // +0x18
    UIFont * _tagButtonTextFont; // +0x20
    NSNumber * _tagImageType; // +0x28
    NSString * _createTagSpecifyName; // +0x30
}
+ (id)getCreateTagCellTitle:(id)arg1;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (void)makeCell:(id)arg1;
- (void)makeCreateTagCell:(CGSize)arg1;
- (BOOL)isChosen;
- (void)setIsChosen:(BOOL)arg1;
- (double)tagViewCornerRadius;
- (void)setTagViewCornerRadius:(double)arg1;
- (id)tagButtonTextColor;
- (void)setTagButtonTextColor:(id)arg1;
- (id)tagButtonTextFont;
- (void)setTagButtonTextFont:(id)arg1;
- (id)tagImageType;
- (void)setTagImageType:(id)arg1;
- (id)createTagSpecifyName;
- (void)setCreateTagSpecifyName:(id)arg1;
- (void).cxx_destruct;
@end
