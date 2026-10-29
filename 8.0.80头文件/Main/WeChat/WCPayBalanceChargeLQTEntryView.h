@interface WCPayBalanceChargeLQTEntryView : UIView
{
    id <WCPayBalanceChargeLQTEntryViewDelegate> _delegate; // +0x8
    WCPayBalanceChargeLQTInfo * _chargeInfoData; // +0x10
    UIImageView * _logoImgView; // +0x18
    MMUILabel * _titleLabel; // +0x20
    MMUILabel * _subTitleLabel; // +0x28
    UIImageView * _arrowImgView; // +0x30
    UIView * _topLineView; // +0x38
    UIView * _bottomLineView; // +0x40
    UIButton * _coverBtn; // +0x48
}
- (id)initContentViewWithContainerWidth:(double)arg1 delegate:(id)arg2;
- (void)refreshContentViewWithChargeInfo:(id)arg1 containerWidth:(double)arg2;
- (void)reloadContentView;
- (void)coverBtnClick;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)chargeInfoData;
- (void)setChargeInfoData:(id)arg1;
- (id)logoImgView;
- (void)setLogoImgView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)arrowImgView;
- (void)setArrowImgView:(id)arg1;
- (id)topLineView;
- (void)setTopLineView:(id)arg1;
- (id)bottomLineView;
- (void)setBottomLineView:(id)arg1;
- (id)coverBtn;
- (void)setCoverBtn:(id)arg1;
- (void).cxx_destruct;
@end
