@interface WCCoinResignTaxCutTipsDetailView : UIView <ILinkEventExt>
{
    WecoinTaxReConfirmHalfPageInfo * _taxReconfirmInfo; // +0x8
    WCCoinResignTaxCutTipsView * _parentView; // +0x10
}
- (void)layout;
- (void)layoutSubviews;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)taxReconfirmInfo;
- (void)setTaxReconfirmInfo:(id)arg1;
- (id)parentView;
- (void)setParentView:(id)arg1;
- (void).cxx_destruct;
@end
