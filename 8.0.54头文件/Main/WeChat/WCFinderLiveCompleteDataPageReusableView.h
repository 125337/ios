@interface WCFinderLiveCompleteDataPageReusableView : UICollectionReusableView
{
    AnchorCloseLivePageDataUnit * _pageDataUnit; // +0x8
    MMUIImageView * _iconImageView; // +0x10
    MMUILabel * _titleLabel; // +0x18
    MMUILabel * _detailLabel; // +0x20
    UIImageView * _arrowView; // +0x28
}
+ (id)identifier;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (id)iconImageView;
- (id)titleLabel;
- (id)detailLabel;
- (id)arrowView;
- (void)updateWithPageData:(id)arg1;
- (void)configViewAccessibility;
- (unsigned long long)accessibilityTraits;
- (void)updateViewAccessibilityInfo;
- (id)pageDataUnit;
- (void)setPageDataUnit:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDetailLabel:(id)arg1;
- (void)setArrowView:(id)arg1;
- (void).cxx_destruct;
@end

