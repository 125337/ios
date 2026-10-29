@interface PersonalInformationPreviewViewController : MMUIViewController <MMNavBarInteractiveDelegate, WCAddressLogicMgrExt>
{
    UIView * _contentHeaderView; // +0x70
    UIView * _contentFooterView; // +0x78
    MMTableViewInfo * _tableViewInfo; // +0x80
    CContact * _contact; // +0x88
    NSURL * _exportUrl; // +0x90
    NSArray * _arrAddress; // +0x98
    GetSafetyInfoLogic * _getSafetyInfoLogic; // +0xa0
}
- (id)init;
- (void)viewDidLoad;
- (void)initView;
- (void)initTableView;
- (void)initHeaderView;
- (void)initFooterView;
- (void)reloadData;
- (void)viewDidLayoutSubviews;
- (void)onShowMyAddress;
- (void)onShowSafeDevice;
- (void)onExportInformation;
- (id)getSexString;
- (id)getAddressString;
- (id)getSignature;
- (id)getMobile;
- (id)getQQ;
- (id)getEmail;
- (id)getVersion;
- (id)customCellInfoForTitle:(id)arg1 rightValue:(id)arg2;
- (id)customCellRightViewWithText:(id)arg1 cellTitle:(id)arg2;
- (BOOL)isSetNormalToBlackStyle;
- (void)OnGetAllAddress:(id)arg1 UserName:(id)arg2 NickName:(id)arg3 Error:(id)arg4;
- (id)contentHeaderView;
- (void)setContentHeaderView:(id)arg1;
- (id)contentFooterView;
- (void)setContentFooterView:(id)arg1;
- (id)tableViewInfo;
- (void)setTableViewInfo:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)exportUrl;
- (void)setExportUrl:(id)arg1;
- (id)arrAddress;
- (void)setArrAddress:(id)arg1;
- (id)getSafetyInfoLogic;
- (void)setGetSafetyInfoLogic:(id)arg1;
- (void).cxx_destruct;
@end
