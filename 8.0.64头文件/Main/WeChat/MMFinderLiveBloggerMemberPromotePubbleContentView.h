@interface MMFinderLiveBloggerMemberPromotePubbleContentView : MMFinderLivePromotePubbleContentView
{
    MMWebImageView * _titleImgView; // +0x8
    MMUILabel * _companyLabel; // +0x10
    MMUILabel * _descLabel; // +0x18
    MMUIButton * _actionButton; // +0x20
    FinderMemberZonePromoteInfo * _memberZonePromoteInfo; // +0x28
}
- (void)convertPromoteMsgInfo:(id)arg1;
- (void)layoutUI;
- (void)refreshData;
- (void)handleSingleTapGesture:(id)arg1;
- (BOOL)isCurrentPromoteItem:(id)arg1;
- (void)updatePromoteItem:(id)arg1;
- (void)updateFromSyncPromoteResp:(id)arg1;
- (void)updatepromoteBuffer:(id)arg1;
- (id)getCurrentPromoteBuffer;
- (void)layoutActionButton;
- (void)layoutTitleImgView;
- (void)layoutCompanyLabel;
- (void)layoutDescLabel;
- (void)updateLabelsOriginY;
- (void)onHandleAction;
- (void)gotoMemberZone;
- (double)rightWidgetLeft;
- (void)onShowed;
- (void)onClosed;
- (id)onPromoteBubbleActionExtraInfo;
- (id)titleImgView;
- (void)setTitleImgView:(id)arg1;
- (id)companyLabel;
- (void)setCompanyLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (id)memberZonePromoteInfo;
- (void)setMemberZonePromoteInfo:(id)arg1;
- (void).cxx_destruct;
@end
