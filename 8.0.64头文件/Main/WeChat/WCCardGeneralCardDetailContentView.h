@interface WCCardGeneralCardDetailContentView : WCCardBaseCardDetailContentView <UITableViewDelegate, UITableViewDataSource, WCShareCardGeneralReceiveHeaderDelegate, WCCardDetailContentLogicDelegate, WCShareCardGeneralCardHeaderDelegate, WCCardSecondaryViewDelegate, WCShareCardGeneralCardHeaderV2Delegate, ILinkEventExt>
{
    BOOL _bIsShareCardMode; // +0x8
    id <WCCardGeneralCardContentDelegate> _delegte; // +0x10
    WCShareCardGeneralHeaderView * _generalCardHeaderView; // +0x18
    WCShareCardGeneralReceiveHeaderView * _generalReceiverHeaderView; // +0x20
    MMUIView * _separateStrokeView; // +0x28
    WCCardChoosePeopleLabelView * _chooseView; // +0x30
}
- (id)initContentViewWithFrame:(CGRect)arg1 isShareCardMode:(BOOL)arg2 withCardDataSource:(id)arg3 withOneUsedStoreInfo:(id)arg4 withServiceContact:(id)arg5 withDelegate:(id)arg6;
- (void)initContentView;
- (id)createTableViewHeaderView;
- (id)createTableViewFooterView;
- (void)setMainText:(id)arg1 subText:(id)arg2;
- (double)getTableViewCellSumHeight;
- (void)onShareCardImgBtnClick:(id)arg1;
- (void)onShareCardJumpToFinderBtnClick:(id)arg1;
- (void)reloadContentData;
- (void)onNearbyShopPhoneNumClick;
- (CGRect)getHeaderViewApplyBtnFrame;
- (void)clickWhoCanSeeBtn:(id)arg1;
- (void)realOpenUrl:(id)arg1;
- (void)realOpenTinyAppWithUsername:(id)arg1 path:(id)arg2;
- (void)onGeneralCardViewApplyBtnClick;
- (void)onGeneralCardViewOperateBtnClick;
- (void)onClickAcceptCardBtn:(id)arg1;
- (void)onClickShareCardBtn;
- (void)onNeedOpenUrlStr:(id)arg1;
- (BOOL)isItemFromOutAppScene;
- (void)onWCCardSecondaryField:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)delegte;
- (void)setDelegte:(id)arg1;
- (BOOL)bIsShareCardMode;
- (void)setBIsShareCardMode:(BOOL)arg1;
- (id)generalCardHeaderView;
- (void)setGeneralCardHeaderView:(id)arg1;
- (id)generalReceiverHeaderView;
- (void)setGeneralReceiverHeaderView:(id)arg1;
- (id)separateStrokeView;
- (void)setSeparateStrokeView:(id)arg1;
- (id)chooseView;
- (void)setChooseView:(id)arg1;
- (void).cxx_destruct;
@end
