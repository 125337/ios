@interface WCMktCardItemView : UIView
{
    id <WCMktCardItemViewDelegate> _delegate; // +0x8
    NSArray * _couponList; // +0x10
}
- (void)updateCardItemViewWithCouponListData:(id)arg1 displayCount:(unsigned int)arg2;
- (void)setupContentView:(unsigned int)arg1;
- (id)genGeneralCouponsView:(id)arg1 index:(long long)arg2;
- (id)genGeneralCardView:(id)arg1 index:(long long)arg2;
- (id)genTagButtonWithTagData:(id)arg1 isCard:(BOOL)arg2;
- (void)clickGeneralCouponTagListBtn:(id)arg1;
- (void)clickGeneralCardTagListBtn:(id)arg1;
- (void)handleTagBtnClick:(id)arg1;
- (void)cardBtnClick:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)couponList;
- (void)setCouponList:(id)arg1;
- (void).cxx_destruct;
@end

