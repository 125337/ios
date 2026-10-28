@interface WCFinderMJSetHeaderView : UICollectionReusableView
{
    double _horizontalPadding; // +0x8
    UIImageView * _coverView; // +0x10
    UILabel * _titleLabel; // +0x18
    UIButton * _contactLabel; // +0x20
    WCFinderAuthInfoIconView * _authIconView; // +0x28
    UILabel * _usedLabel; // +0x30
    UIButton * _takePhotoButton; // +0x38
    UIButton * _becomeCeatorButton; // +0x40
    WCFinderMJSetDesignerView * _designerView; // +0x48
}
+ (double)displayHeightWithVM:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)getTakePhotoBtn;
- (void)setupViews;
- (void)layoutSubviews;
- (void)doLayout;
- (void)update:(id)arg1;
- (void)addClickContactTarget:(id)arg1 action:(SEL)arg2;
- (void)addClickPostTarget:(id)arg1 action:(SEL)arg2;
- (void)addClickDesignerTarget:(id)arg1 action:(SEL)arg2;
- (double)horizontalPadding;
- (void)setHorizontalPadding:(double)arg1;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)contactLabel;
- (void)setContactLabel:(id)arg1;
- (id)authIconView;
- (void)setAuthIconView:(id)arg1;
- (id)usedLabel;
- (void)setUsedLabel:(id)arg1;
- (id)takePhotoButton;
- (void)setTakePhotoButton:(id)arg1;
- (id)becomeCeatorButton;
- (void)setBecomeCeatorButton:(id)arg1;
- (id)designerView;
- (void)setDesignerView:(id)arg1;
- (void).cxx_destruct;
@end
