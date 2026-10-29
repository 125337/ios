@interface WCFinderLiveCompleteDataPageReusableView : UICollectionReusableView
{
    id /* block */ _dataViewBlock; // +0x8
    AnchorCloseLivePageDataUnit * _pageDataUnit; // +0x10
    MMUIImageView * _iconImageView; // +0x18
    MMUIButton * _titleButton; // +0x20
    MMUIButton * _detailButton; // +0x28
    UIImageView * _arrowView; // +0x30
}
+ (id)identifier;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (id)iconImageView;
- (id)titleButton;
- (void)titleClick;
- (id)detailButton;
- (void)detailClick;
- (id)arrowView;
- (void)updateWithPageData:(id)arg1;
- (void)configViewAccessibility;
- (unsigned long long)accessibilityTraits;
- (void)updateViewAccessibilityInfo;
- (id /* block */)dataViewBlock;
- (void)setDataViewBlock:(id /* block */)arg1;
- (id)pageDataUnit;
- (void)setPageDataUnit:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setTitleButton:(id)arg1;
- (void)setDetailButton:(id)arg1;
- (void)setArrowView:(id)arg1;
- (void).cxx_destruct;
@end
