@interface MMStoreEmotionStoreListCell : UICollectionViewCell
{
    UIView * _baseViewContainer; // +0x8
    MMUILabel * _nameLabel; // +0x10
    MMUILabel * _introduceLabel; // +0x18
    MMWebImageView * _webImageView; // +0x20
    MMWebImageView * _tagImageView; // +0x28
    UIImageView * _imageViewNew; // +0x30
    UIImageView * _rightArrowImage; // +0x38
    UIView * _rightContentContainer; // +0x40
    UIView * _lineView; // +0x48
    UIView * _accessibilityView; // +0x50
    UIEdgeInsets _contentInsets; // +0x58
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initAccessibilityView;
- (void)setHighlighted:(BOOL)arg1;
- (void)initBaseViewContainer;
- (void)initLineView;
- (void)initWebImageView;
- (void)initRightContainer;
- (void)initNameLabel;
- (void)initIntroduceLabel;
- (void)loadTagImageView;
- (void)configRightArrowImage;
- (void)setNameLabelText:(id)arg1;
- (void)setNameLabelAttrText:(id)arg1 accessibilityName:(id)arg2;
- (void)setIntroduceLabelText:(id)arg1;
- (void)layoutSubviews;
- (void)setContentInsets:(UIEdgeInsets)arg1;
- (void)createOrUpdateLayout;
- (void)layoutContentView;
- (void)layoutBaseViewContainer;
- (void)layoutRightViewContainer;
- (void)updateAccessibilityLabel;
- (id)baseViewContainer;
- (void)setBaseViewContainer:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)introduceLabel;
- (void)setIntroduceLabel:(id)arg1;
- (id)webImageView;
- (void)setWebImageView:(id)arg1;
- (id)tagImageView;
- (void)setTagImageView:(id)arg1;
- (id)imageViewNew;
- (void)setImageViewNew:(id)arg1;
- (id)rightArrowImage;
- (void)setRightArrowImage:(id)arg1;
- (id)rightContentContainer;
- (void)setRightContentContainer:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (id)accessibilityView;
- (void)setAccessibilityView:(id)arg1;
- (UIEdgeInsets)contentInsets;
- (void).cxx_destruct;
@end
