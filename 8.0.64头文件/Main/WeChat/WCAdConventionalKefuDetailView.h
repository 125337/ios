@interface WCAdConventionalKefuDetailView : MMUIView
{
    BOOL _isInHalfScreenMode; // +0x8
    WCAdCustomerServiceConfirmInfo * _confirmInfo; // +0x10
    CContact * _contact; // +0x18
    UILabel * _kefuTitle; // +0x20
    UILabel * _kefuDesc; // +0x28
    MMHeadImageView * _kefuIconView; // +0x30
    UILabel * _kefuNickname; // +0x38
    UILabel * _kefuTailName; // +0x40
    ColorGradientView * _bottomMaskView; // +0x48
}
- (id)initWithFrame:(CGRect)arg1 confirmInfo:(id)arg2 contact:(id)arg3 isInHalfScreenMode:(BOOL)arg4;
- (void)layoutSubviews;
- (id)kefuTitle;
- (id)kefuDesc;
- (id)kefuIconView;
- (id)kefuNickname;
- (id)kefuTailName;
- (id)generateSimpleLabelWithFont:(id)arg1 textColor:(id)arg2 text:(id)arg3;
- (id)generateComplicatedLabelWithFont:(id)arg1 textColor:(id)arg2 text:(id)arg3;
- (id)bottomMaskView;
- (void)setupUIContents;
- (void)layoutUIContents;
- (void)updateTailNameWithAppid:(id)arg1;
- (id)confirmInfo;
- (void)setConfirmInfo:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (BOOL)isInHalfScreenMode;
- (void)setIsInHalfScreenMode:(BOOL)arg1;
- (void)setKefuTitle:(id)arg1;
- (void)setKefuDesc:(id)arg1;
- (void)setKefuIconView:(id)arg1;
- (void)setKefuNickname:(id)arg1;
- (void)setKefuTailName:(id)arg1;
- (void)setBottomMaskView:(id)arg1;
- (void).cxx_destruct;
@end
