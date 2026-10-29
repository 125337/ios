@interface WCFinderPoiHeadView : UIView <WCFinderPoiDescViewDelegate, WCFinderPoiGroupBuyViewDelegate>
{
    BOOL _isFinderHalfScreen; // +0x8
    BOOL _shouldShowTakeCarButton; // +0x9
    id <WCFinderPoiHeadViewDelegate> _delegate; // +0x10
    double _maxWidth; // +0x18
    WCFinderPoiBasicInfo * _poiBasicInfo; // +0x20
    MMUILabel * _poiNameLabel; // +0x28
    MMUIButton * _forwardBtn; // +0x30
    MMUIButton * _favBtn; // +0x38
    NSMutableArray * _descViewArray; // +0x40
    UIView * _addressContainer; // +0x48
    UIView * _separateLine; // +0x50
    UILabel * _addressLabel; // +0x58
    UIImageView * _rightArrowView; // +0x60
    MMUIButton * _navMapBtn; // +0x68
    MMUILabel * _navMapLabel; // +0x70
    MMUIButton * _takeCarBtn; // +0x78
    MMUILabel * _takeCarLabel; // +0x80
    UIView * _bottomBlankView; // +0x88
    UIView * _dishesContainer; // +0x90
    UIView * _dishesTopBlankView; // +0x98
    MMUILabel * _dishesTitleLabel; // +0xa0
    MMUIButton * _dishesMoreButton; // +0xa8
    NSMutableArray * _dishesViewArray; // +0xb0
    UIView * _groupBuyContainer; // +0xb8
    UIView * _groupBuyTopBlankView; // +0xc0
    MMUILabel * _groupBuyTitleLabel; // +0xc8
    NSMutableArray * _groupBuyViewArray; // +0xd0
    MMUIButton * _groupBuyMoreButton; // +0xd8
}
+ (double)heightWith:(id)arg1 maxWidth:(double)arg2;
+ (double)heightWhenShrinkingWith:(id)arg1;
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)setDescView:(id)arg1 isExpanding:(BOOL)arg2;
- (void)updateWith:(id)arg1;
- (void)onDragProgressChanged:(double)arg1;
- (void)changeDetailViewsAlpha:(double)arg1;
- (void)changeMainViewsAlpha:(double)arg1;
- (void)updateFavSelected:(BOOL)arg1;
- (id)genRecommendDishView:(id)arg1;
- (id)genGroupBuyView:(id)arg1 isLast:(BOOL)arg2 hasGroupBuyMoreButton:(BOOL)arg3;
- (void)onTapGroupBuyView:(id)arg1;
- (void)onTapGroupBuyMoreButton;
- (void)groupBuyViewActionButtonDidClick:(id)arg1;
- (void)updateMainFlexLayput;
- (void)updateDetailFlexLayout;
- (void)onTapForwardBtn:(id)arg1;
- (void)onTapFavBtn:(id)arg1;
- (void)onTapNavMapBtn:(id)arg1;
- (void)onTapTakeCarBtn:(id)arg1;
- (void)onTapAddressEntrance;
- (void)onTapRecommendDishes;
- (void)setMaxWidth:(double)arg1;
- (id)poiNameLabel;
- (id)forwardBtn;
- (id)favBtn;
- (CGSize)favBtnSize;
- (id)descViewArray;
- (id)addressContainer;
- (id)separateLine;
- (id)addressLabel;
- (id)rightArrowView;
- (id)bottomBlankView;
- (id)navMapBtn;
- (id)navMapLabel;
- (id)takeCarBtn;
- (id)takeCarLabel;
- (id)dishesContainer;
- (id)dishesTitleLabel;
- (id)dishesMoreButton;
- (id)dishesTopBlankView;
- (id)dishesViewArray;
- (id)groupBuyContainer;
- (id)groupBuyTopBlankView;
- (id)groupBuyTitleLabel;
- (id)groupBuyViewArray;
- (id)groupBuyMoreButton;
- (void)onTapDescViewExpandButton:(id)arg1;
- (id)dataReportParamDict;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)maxWidth;
- (BOOL)isFinderHalfScreen;
- (void)setIsFinderHalfScreen:(BOOL)arg1;
- (BOOL)shouldShowTakeCarButton;
- (void)setShouldShowTakeCarButton:(BOOL)arg1;
- (id)poiBasicInfo;
- (void)setPoiBasicInfo:(id)arg1;
- (void)setPoiNameLabel:(id)arg1;
- (void)setForwardBtn:(id)arg1;
- (void)setFavBtn:(id)arg1;
- (void)setDescViewArray:(id)arg1;
- (void)setAddressContainer:(id)arg1;
- (void)setSeparateLine:(id)arg1;
- (void)setAddressLabel:(id)arg1;
- (void)setRightArrowView:(id)arg1;
- (void)setNavMapBtn:(id)arg1;
- (void)setNavMapLabel:(id)arg1;
- (void)setTakeCarBtn:(id)arg1;
- (void)setTakeCarLabel:(id)arg1;
- (void)setBottomBlankView:(id)arg1;
- (void)setDishesContainer:(id)arg1;
- (void)setDishesTopBlankView:(id)arg1;
- (void)setDishesTitleLabel:(id)arg1;
- (void)setDishesMoreButton:(id)arg1;
- (void)setDishesViewArray:(id)arg1;
- (void)setGroupBuyContainer:(id)arg1;
- (void)setGroupBuyTopBlankView:(id)arg1;
- (void)setGroupBuyTitleLabel:(id)arg1;
- (void)setGroupBuyViewArray:(id)arg1;
- (void)setGroupBuyMoreButton:(id)arg1;
- (void).cxx_destruct;
@end

