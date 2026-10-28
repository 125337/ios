@interface WCFinderLiveCompleteDataPageCell : UICollectionViewCell
{
    BOOL _clickEnable; // +0x8
    id /* block */ _itemSelectBlock; // +0x10
    AnchorCloseLivePageDataItem * _pageDataItem; // +0x18
    MMUILabel * _titleLabel; // +0x20
    MMUILabel * _numberLabel; // +0x28
    MMUILabel * _subTitleLabel; // +0x30
    UIButton * _clickButton; // +0x38
}
+ (id)identifier;
- (void)updateWithePageDataItem:(id)arg1 clickEnable:(BOOL)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (id)titleLabel;
- (id)numberLabel;
- (id)subTitleLabel;
- (id)clickButton;
- (void)dataViewClick;
- (void)configViewAccessibility;
- (unsigned long long)accessibilityTraits;
- (void)updateViewAccessibilityInfo;
- (id /* block */)itemSelectBlock;
- (void)setItemSelectBlock:(id /* block */)arg1;
- (id)pageDataItem;
- (void)setPageDataItem:(id)arg1;
- (BOOL)clickEnable;
- (void)setClickEnable:(BOOL)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setNumberLabel:(id)arg1;
- (void)setSubTitleLabel:(id)arg1;
- (void)setClickButton:(id)arg1;
- (void).cxx_destruct;
@end
