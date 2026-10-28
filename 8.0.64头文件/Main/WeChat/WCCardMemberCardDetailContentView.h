@interface WCCardMemberCardDetailContentView : WCCardBaseCardDetailContentView <UITableViewDelegate, UITableViewDataSource, WCCardDetailContentLogicDelegate, WCShareCardMemberCustomImgHeaderDelegate, WCCardDetailPageCodeCellViewDelegate, ILinkEventExt, WCCardLargeCodeViewDelegate>
{
    BOOL _bIsShareCardMode; // +0x8
    BOOL _bIsAcceptMemberCard; // +0x9
    id <WCCardMemberCardContentDelegate> _delegte; // +0x10
    WCShareCardMemberHeaderCardImageView * _memberCardImgView; // +0x18
    WCCardLargeCodeView * _largeCodeView; // +0x20
}
- (id)initContentViewWithFrame:(CGRect)arg1 isShareCardMode:(BOOL)arg2 withCardDataSource:(id)arg3 withOneUsedStoreInfo:(id)arg4 withServiceContact:(id)arg5 withDelegate:(id)arg6;
- (void)initContentView;
- (id)createTableViewHeaderView;
- (id)bottomAdvertiseTipsColor;
- (id)createTableViewFooterView;
- (id)makeMemberCardFooterBgViewWithCurFooterHeight:(double)arg1;
- (id)memberCardImgView;
- (void)reloadContentData;
- (void)onNearbyShopPhoneNumClick;
- (double)getTableViewCellSumHeight;
- (void)realOpenUrl:(id)arg1;
- (void)realOpenTinyAppWithUsername:(id)arg1 path:(id)arg2;
- (void)onMemberCardViewApplyBtnClick;
- (void)onMemberCardAnnounceClicked:(id)arg1;
- (void)onMemberCardSecondaryField:(id)arg1;
- (void)onMemberCustomImgHeaderInfoBtnClicked;
- (void)onClickAcceptCardBtn:(id)arg1;
- (void)onClickShareCardBtn;
- (void)onNeedOpenUrlStr:(id)arg1;
- (BOOL)isItemFromOutAppScene;
- (void)onFollowBtnClick:(id)arg1;
- (void)onGuidanceBtnClick:(id)arg1;
- (void)onOperationBtnClick:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)makeCodeCell:(id)arg1;
- (void)makePayOrderCell:(id)arg1;
- (double)calcPayOrderCellHeight;
- (double)calcOperationFieldCellHeight;
- (void)makeAcceptCardCell:(id)arg1;
- (void)makeOperateCell:(id)arg1;
- (void)makeUsedStoresCell:(id)arg1;
- (void)makeGiftCardInfoCell:(id)arg1;
- (void)onCodeViewFieldClick;
- (void)onReasonButtonClick;
- (void)refreshCode;
- (void)onPageCodeTapWithCardSource:(CGRect)arg1;
- (void)realClosed;
- (id)delegte;
- (void)setDelegte:(id)arg1;
- (BOOL)bIsShareCardMode;
- (void)setBIsShareCardMode:(BOOL)arg1;
- (BOOL)bIsAcceptMemberCard;
- (void)setBIsAcceptMemberCard:(BOOL)arg1;
- (void)setMemberCardImgView:(id)arg1;
- (id)largeCodeView;
- (void)setLargeCodeView:(id)arg1;
- (void).cxx_destruct;
@end
