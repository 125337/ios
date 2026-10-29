@interface WCAddressPickerHeadView : UIView
{
    id <WCAddressHeadViewDelegate> m_delegate; // +0x8
    int m_maxStageComponent; // +0x10
    unsigned long long _geoTag; // +0x18
    NSString * province; // +0x20
    NSString * city; // +0x28
    NSString * district; // +0x30
    NSString * street; // +0x38
    NSString * detail; // +0x40
    MMUIActivityIndicatorView * _loadingView; // +0x48
    UILabel * _placeholderLabel; // +0x50
    UILabel * _addressLabel; // +0x58
    UIView * _curMaskView; // +0x60
    MMUIButton * _rightButton; // +0x68
    MMLocatingCoordinateLogic * _locatingLogic; // +0x70
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (void)layoutSubviews;
- (void)setHeaderDelegate:(id)arg1;
- (void)setMaxStageComponent:(int)arg1;
- (id)locatingLogic;
- (void)startLocating;
- (BOOL)hasLocation;
- (void)onClickRightButton;
- (void)updateWithLocation;
- (void)updateWithLocatingError;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)placeholderLabel;
- (void)setPlaceholderLabel:(id)arg1;
- (id)addressLabel;
- (void)setAddressLabel:(id)arg1;
- (id)curMaskView;
- (void)setCurMaskView:(id)arg1;
- (id)rightButton;
- (void)setRightButton:(id)arg1;
- (void)setLocatingLogic:(id)arg1;
- (void).cxx_destruct;
@end
