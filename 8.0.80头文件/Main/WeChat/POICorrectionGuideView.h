@interface POICorrectionGuideView : MMPageSheetBaseView
{
    BOOL _isPoiPrivated; // +0x8
    NSString * _addr; // +0x10
    NSString * _name; // +0x18
    NSString * _phoneNumber; // +0x20
    NSString * _poiid; // +0x28
    id <POICorrectionGuideViewDelegate> _poiDelegate; // +0x30
    UIView * _contentView; // +0x38
    UIImageView * _iconView; // +0x40
    UIButton * _confirmButton; // +0x48
    MMUILabel * _titleLabel; // +0x50
    MMUILabel * _secTitleLabel; // +0x58
    CLLocationCoordinate2D _coordinate; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (double)contentHeight;
- (void)confrimButtonClicked;
- (BOOL)isPoiPrivated;
- (void)setIsPoiPrivated:(BOOL)arg1;
- (CLLocationCoordinate2D)coordinate;
- (void)setCoordinate:(CLLocationCoordinate2D)arg1;
- (id)addr;
- (void)setAddr:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)phoneNumber;
- (void)setPhoneNumber:(id)arg1;
- (id)poiid;
- (void)setPoiid:(id)arg1;
- (id)poiDelegate;
- (void)setPoiDelegate:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)secTitleLabel;
- (void)setSecTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
