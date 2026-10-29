@interface WCAdConventionalKefuDetailView : MMUIView
{
    BOOL _isInHalfScreenMode; // +0x8
    WCAdCustomerServiceConfirmInfo * _confirmInfo; // +0x10
    CContact * _contact; // +0x18
    double _fullModeContentTop; // +0x20
    double _dynamicSizeReferenceWidth; // +0x28
    UILabel * _kefuTitle; // +0x30
    UILabel * _kefuDesc; // +0x38
    MMHeadImageView * _kefuIconView; // +0x40
    UILabel * _kefuNickname; // +0x48
    UILabel * _kefuTailName; // +0x50
    ColorGradientView * _bottomMaskView; // +0x58
}
- (id)initWithFrame:(CGRect)arg1 confirmInfo:(id)arg2 contact:(id)arg3 isInHalfScreenMode:(BOOL)arg4;
- (void)layoutSubviews;
- (void)setFullModeContentTop:(double)arg1;
- (double)dynamicSize:(double)arg1;
- (id)kefuTitleFont;
- (id)kefuDescFont;
- (id)kefuDescTextColor;
- (id)kefuNicknameFont;
- (id)kefuTailNameFont;
- (CGSize)kefuIconSize;
- (void)updateDynamicSizeIfNeeded;
- (id)kefuTitle;
- (id)kefuDesc;
- (id)kefuIconView;
- (id)kefuNickname;
- (id)kefuTailName;
- (id)generateSimpleLabelWithFont:(id)arg1 textColor:(id)arg2 text:(id)arg3;
- (id)generateComplicatedAttributedTextWithFont:(id)arg1 text:(id)arg2;
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
- (double)fullModeContentTop;
- (double)dynamicSizeReferenceWidth;
- (void)setDynamicSizeReferenceWidth:(double)arg1;
- (void)setKefuTitle:(id)arg1;
- (void)setKefuDesc:(id)arg1;
- (void)setKefuIconView:(id)arg1;
- (void)setKefuNickname:(id)arg1;
- (void)setKefuTailName:(id)arg1;
- (void)setBottomMaskView:(id)arg1;
- (void).cxx_destruct;
@end
