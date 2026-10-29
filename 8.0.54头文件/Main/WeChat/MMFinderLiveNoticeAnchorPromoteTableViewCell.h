@interface MMFinderLiveNoticeAnchorPromoteTableViewCell : MMFinderLiveAnchorPromoteTableViewCell
{
    MMWebImageView * _titleImgView; // +0x40
    MMUILabel * _titleLabel; // +0x48
    MMUILabel * _introLabel; // +0x50
    MMFinderLiveNoticeAnchorPromoteInfo * _noticePromoteInfo; // +0x58
    MMPaddingView * _couponsTitleLabel; // +0x60
    ZZLabelChainModel * _couponsStateModel; // +0x68
}
+ (id)identifier;
- (void)layoutUI;
- (void)updatePromoteInfo:(id)arg1;
- (id)promoteInfo;
- (BOOL)enableMenuAction;
- (void)layoutTitleImgView;
- (void)layoutTitleLabel;
- (void)layoutIntroLabel;
- (void)layoutCouponView;
- (void)updateLabelsOriginY;
- (id)titleImgView;
- (void)setTitleImgView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)introLabel;
- (void)setIntroLabel:(id)arg1;
- (id)noticePromoteInfo;
- (void)setNoticePromoteInfo:(id)arg1;
- (id)couponsTitleLabel;
- (void)setCouponsTitleLabel:(id)arg1;
- (id)couponsStateModel;
- (void)setCouponsStateModel:(id)arg1;
- (void).cxx_destruct;
@end

