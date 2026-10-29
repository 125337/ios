@interface MMLocationPoiHeadView : UIView <ILinkEventExt>
{
    POIInfo * _poiInfo; // +0x8
    TakeCarServiceDataLogic * _takeCarDataLogic; // +0x10
    BOOL _isExpand; // +0x18
    unsigned int _reportExpandStatus; // +0x1c
    BOOL _isLoading; // +0x20
    BOOL _isFromNearbyLife; // +0x21
    BOOL _shouldShowForwardBtn; // +0x22
    BOOL _showTakeCarBtn; // +0x23
    BOOL _shouldHiddenNaviBtn; // +0x24
    BOOL _showPoiDetail; // +0x25
    BOOL _shouldHiddenAddress; // +0x26
    id <MMLocationPoiHeadViewDelegate> _delegate; // +0x28
    MMUIActivityIndicatorView * _activityIndicatorView; // +0x30
    MMUILabel * _addressMainLabel; // +0x38
    MMUILabel * _addressSubLabel; // +0x40
    UIView * _addressMsgView; // +0x48
    MMUIButton * _topRectangeView; // +0x50
    FixTitleColorButton * _forwardBtn; // +0x58
    MMUIButton * _navMapBtn; // +0x60
    MMUILabel * _navMapLabel; // +0x68
    MMUIButton * _takeCarBtn; // +0x70
    MMUILabel * _takeCarLabel; // +0x78
    MMUIButton * _privatTipsView; // +0x80
    FixTitleColorButton * _favBtn; // +0x88
    double _animationPercent; // +0x90
}
- (id)initWithFrame:(CGRect)arg1 poiInfo:(id)arg2;
- (void)dealloc;
- (void)initSubviews;
- (void)updateLayout;
- (void)layoutSubviews;
- (void)setFrame:(CGRect)arg1;
- (void)updateWithPoiInfo;
- (void)updateFavSelected:(BOOL)arg1;
- (void)layoutBtnGroups;
- (double)buttonGroupLeft;
- (void)setIsLoading:(BOOL)arg1;
- (void)setSubAddress:(id)arg1;
- (id)topRectangeView;
- (id)addressMsgView;
- (id)addressMainLabel;
- (id)addressSubLabel;
- (id)navMapBtn;
- (id)navMapLabel;
- (id)takeCarBtn;
- (id)takeCarLabel;
- (id)forwardBtn;
- (id)favBtn;
- (id)privatTipsView;
- (id)activityIndicatorView;
- (void)setIsFromNearbyLife:(BOOL)arg1;
- (void)onDragProgressChanged:(double)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)onTapForwardBtn:(id)arg1;
- (void)onTapNavMapBtn:(id)arg1;
- (void)onTapSwitchBtn:(id)arg1;
- (void)onTapFavBtn:(id)arg1;
- (void)onLongPressFavBtn:(id)arg1;
- (void)onLongPressAddressLabel:(id)arg1;
- (void)onTapCopyMenuItem;
- (void)copyAddressString;
- (void)onMenuControllerWillShow;
- (void)onMenuControllerDidHide;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)setShouldShowForwardBtn:(BOOL)arg1;
- (void)setShouldHiddenNaviBtn:(BOOL)arg1;
- (void)setShouldHiddenAddress:(BOOL)arg1;
- (void)setShowTakeCarBtn:(BOOL)arg1;
- (void)setShowPoiDetail:(BOOL)arg1;
- (void)onTapTakeCarBtn:(id)arg1;
- (void)onPhoneClicked:(id)arg1 withRect:(CGRect)arg2;
- (double)contentHeight:(double)arg1 detailHeight:(double)arg2;
- (double)contentHeightWhenLoading:(double)arg1;
- (double)shrinkFavBtnNeedHeight;
- (BOOL)shouldShowFavButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isLoading;
- (BOOL)isFromNearbyLife;
- (BOOL)shouldShowForwardBtn;
- (BOOL)showTakeCarBtn;
- (BOOL)shouldHiddenNaviBtn;
- (BOOL)showPoiDetail;
- (BOOL)shouldHiddenAddress;
- (void)setActivityIndicatorView:(id)arg1;
- (void)setAddressMainLabel:(id)arg1;
- (void)setAddressSubLabel:(id)arg1;
- (void)setAddressMsgView:(id)arg1;
- (void)setTopRectangeView:(id)arg1;
- (void)setForwardBtn:(id)arg1;
- (void)setNavMapBtn:(id)arg1;
- (void)setNavMapLabel:(id)arg1;
- (void)setTakeCarBtn:(id)arg1;
- (void)setTakeCarLabel:(id)arg1;
- (void)setPrivatTipsView:(id)arg1;
- (void)setFavBtn:(id)arg1;
- (double)animationPercent;
- (void)setAnimationPercent:(double)arg1;
- (void).cxx_destruct;
@end

