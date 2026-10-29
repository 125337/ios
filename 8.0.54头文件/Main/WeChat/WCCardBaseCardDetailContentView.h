@interface WCCardBaseCardDetailContentView : MMUIView <ILinkEventExt>
{
    BOOL _bIsSelectFollowContact; // +0x8
    WCCardDetailContentViewLogicController * _logicController; // +0x10
    MMTableView * _tableView; // +0x18
    UIButton * _deeplinkBtn; // +0x20
    UIColor * _cellColor; // +0x28
}
- (id)initConentViewWithFrame:(CGRect)arg1;
- (void)reloadContentData;
- (double)getCommonCellHeight;
- (double)getOneShopCellHeight;
- (void)onNearbyShopPhoneNumClick;
- (double)getTableViewCellSumHeight;
- (id)getCommonCellBkgColor;
- (id)bottomAdvertiseTipsColor;
- (void)realOpenUrl:(id)arg1;
- (void)realOpenTinyAppWithUsername:(id)arg1 path:(id)arg2;
- (double)createFooterViewAcceptViewAndHeight:(id)arg1 curCardTPInfo:(id)arg2 viewControllerContentHeight:(double)arg3;
- (double)createFooterViewWithGuidanceData:(id)arg1 curCardTPInfo:(id)arg2 viewControllerContentHeight:(double)arg3;
- (void)onLinkClicked:(id)arg1 backupUrl:(id)arg2 withRect:(CGRect)arg3 extraInfo:(id)arg4;
- (double)createFooterViewDeeplinksAndHeight:(id)arg1 viewControllerContentHeight:(double)arg2;
- (id)getFooterViewDeepLinksLabelColor;
- (void)JumoToDeepLink;
- (void)updateCardContentWithCardDataSource:(id)arg1 isShareCardMode:(BOOL)arg2 withOneUsedStoreInfo:(id)arg3 withServiceContact:(id)arg4 withCardStatus:(int)arg5;
- (CGRect)getShareCardEnterListBtnRect;
- (CGRect)getHeaderViewApplyBtnFrame;
- (void)setMainText:(id)arg1 subText:(id)arg2;
- (BOOL)shouldUseDynamicColor;
- (double)calcOperationFieldCellHeight;
- (double)calcDetailViewCellHeight;
- (double)calcUsedConditionCellHeight;
- (double)calcNearbyShopCellHeight;
- (void)makeOperateCell:(id)arg1;
- (void)makeUseConditionCell:(id)arg1;
- (void)makeDetailViewCell:(id)arg1;
- (void)makeOneShopCell:(id)arg1;
- (void)makeUsedStoresCell:(id)arg1;
- (void)makeViewBrandCell:(id)arg1;
- (void)makeCellList0Cell:(id)arg1 withIndexPath:(id)arg2;
- (void)makeGiftToFriendCell:(id)arg1;
- (void)makeGeneralCell:(id)arg1 title:(id)arg2 subTitle:(id)arg3 hasHandle:(BOOL)arg4 ShowFlag:(unsigned int)arg5;
- (void)makeIconGeneralCell:(id)arg1 iconUrl:(id)arg2 title:(id)arg3 subTitle:(id)arg4 hasHandle:(BOOL)arg5 ShowFlag:(unsigned int)arg6;
- (void)makeCellBottomLineWithRowType:(id)arg1 withIndexPath:(id)arg2 withCell:(id)arg3 withCellContentHeight:(double)arg4;
- (void)onPhoneBtnPress:(id)arg1;
- (void)serviceFollowBtnPress:(id)arg1;
- (id)deeplinkBtn;
- (id)logicController;
- (void)setLogicController:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (BOOL)bIsSelectFollowContact;
- (void)setBIsSelectFollowContact:(BOOL)arg1;
- (void)setDeeplinkBtn:(id)arg1;
- (id)cellColor;
- (void)setCellColor:(id)arg1;
- (void).cxx_destruct;
@end

