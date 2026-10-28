@interface MMFinderLiveLotteryGetPrizeItemView : UIView
{
    FinderLivelotteryClaimInfo * _claimInfo; // +0x8
    MMUILabel * _titleLabel; // +0x10
    MMUILabel * _detailLabel; // +0x18
}
- (void)setClaimInfo:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutUI;
- (void)layoutTitleLabel;
- (void)layoutDetailLabel;
- (id)claimInfo;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)detailLabel;
- (void)setDetailLabel:(id)arg1;
- (void).cxx_destruct;
@end
