@interface EmoticonBoardIPMergeTipView : MMUIView
{
    id <EmoticonBoardIPMergeTipViewDelegate> _delegate; // +0x8
    double _bottomInset; // +0x10
    UILabel * _tipsLabel; // +0x18
    NSMutableArray * _iconViewArray; // +0x20
    UIImageView * _arrowView; // +0x28
    MMWebImageView * _ipIconView; // +0x30
    UIButton * _confirmButton; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateOriginPackages:(id)arg1 ipSetKey:(id)arg2;
- (void)setBottomInset:(double)arg1;
- (id)tipsLabel;
- (id)arrowView;
- (id)genConfirmButtonWithDarkMode;
- (id)genIconViewFromPageWrap:(id)arg1;
- (id)genIconViewFromIPSetKey:(id)arg1;
- (void)layoutSubviews;
- (void)createOrUpdateLayout;
- (void)onTapConfirm;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)bottomInset;
- (void)setTipsLabel:(id)arg1;
- (id)iconViewArray;
- (void)setIconViewArray:(id)arg1;
- (void)setArrowView:(id)arg1;
- (id)ipIconView;
- (void)setIpIconView:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (void).cxx_destruct;
@end
