@interface MMFinderLiveMemberShipZoneAnchorPromoteTableViewCell : MMFinderLiveAnchorPromoteTableViewCell
{
    MMWebImageView * _titleImgView; // +0x40
    MMUILabel * _companyLabel; // +0x48
    MMUILabel * _descLabel; // +0x50
    MMFinderLiveMemberShipZoneAnchorPromoteInfo * _memberShipZonePromoteInfo; // +0x58
}
+ (id)identifier;
- (void)layoutUI;
- (void)updatePromoteInfo:(id)arg1;
- (id)promoteInfo;
- (BOOL)enableMenuAction;
- (void)layoutTitleImgView;
- (void)layoutCompanyLabel;
- (void)layoutDescLabel;
- (void)updateLabelsOriginY;
- (id)titleImgView;
- (void)setTitleImgView:(id)arg1;
- (id)companyLabel;
- (void)setCompanyLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)memberShipZonePromoteInfo;
- (void)setMemberShipZonePromoteInfo:(id)arg1;
- (void).cxx_destruct;
@end
