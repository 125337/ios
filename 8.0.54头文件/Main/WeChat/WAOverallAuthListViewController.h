@interface WAOverallAuthListViewController : ZZFLEXTableViewController <WAContactMgrExtension, WAOverallAuthListCgiDelegate, MMNavBarInteractiveDelegate, WAAppDetailInfoManagerExtension>
{
    NSMutableArray * _cellDataList; // +0x68
    unsigned int _minUpdateTime; // +0x70
    BOOL _hasNoMore; // +0x74
    UIView * _emptyView; // +0x78
    UILabel * _emptyLabel; // +0x80
    NSArray * _allNeedShowScopeList; // +0x88
    NSMutableDictionary * _cellDataWaitingForUpdate; // +0x90
}
- (id)init;
- (void)loadView;
- (void)viewDidLoad;
- (void)updateListData;
- (void)initEmptyView;
- (void)initRefreshControl;
- (void)requestNextPagePrivacyReportItem;
- (void)getOverallAuthListCgi:(id)arg1 didGetAuthItemList:(id)arg2 hasNoMore:(BOOL)arg3 allNeedShowScopeList:(id)arg4;
- (void)getOverallAuthListCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)requestContactWithUsrNameList:(id)arg1;
- (void)onModifyWeAppContact:(id)arg1;
- (void)onAppAuthInfoListModifyEnd:(BOOL)arg1 AuthDataList:(id)arg2;
- (void)onDeleteAppUseUserInfo:(id)arg1 errorCode:(int)arg2 errMsg:(id)arg3;
- (void)modifyCellWithUsrName:(id)arg1 scope:(id)arg2 desc:(id)arg3 isAdd:(BOOL)arg4;
- (id)normalTintColor;
- (BOOL)isSetNormalToBlackStyle;
- (void).cxx_destruct;
@end

