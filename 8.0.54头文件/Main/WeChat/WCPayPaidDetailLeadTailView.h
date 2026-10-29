@interface WCPayPaidDetailLeadTailView : UIView
{
    BOOL _bIsSettled; // +0x8
    WCPayPaidDetailLeadTailViewData * _viewData; // +0x10
    id <WCPayPaidDetailLeadTailViewDelegate> _delegate; // +0x18
    WCPayWebImageView * _logoImgView; // +0x20
    MMUILabel * _descLabel; // +0x28
    UIImageView * _arrowImgView; // +0x30
    MMUIButton * _coverBtn; // +0x38
    NSString * _settledContent; // +0x40
}
- (id)initWithLeadTailViewWithViewData:(id)arg1 delegate:(id)arg2;
- (void)refreshContentView;
- (void)coverBtnClick;
- (void)refreshViewAfterSettledResult:(BOOL)arg1 resultContent:(id)arg2;
- (id)viewData;
- (void)setViewData:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)logoImgView;
- (void)setLogoImgView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)arrowImgView;
- (void)setArrowImgView:(id)arg1;
- (id)coverBtn;
- (void)setCoverBtn:(id)arg1;
- (BOOL)bIsSettled;
- (void)setBIsSettled:(BOOL)arg1;
- (id)settledContent;
- (void)setSettledContent:(id)arg1;
- (void).cxx_destruct;
@end

