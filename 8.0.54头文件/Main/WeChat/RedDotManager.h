@interface RedDotManager : NSObject
{
    weak_ptr<zidl::ZClientInvoker> client_invoker_; // +0x8
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
- (void)attachClientInvoker:(const void *)arg1;
- (shared_ptr<zidl::ZClientInvoker>)getClientInvoker;
- (void)zidlBuild;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (id)currentCtrlInfoAtPath:(id)arg1;
- (id)currentCtrlInfoIgnoreAtPath:(id)arg1 ignoreNMFrequency:(BOOL)arg2;
- (void)addNewRedDotCtrlInfo:(id)arg1;
- (BOOL)disposeRedDotAtPath:(id)arg1 subReasonType:(int)arg2;
- (void)disposeRedDotByTipsUuid:(id)arg1 subReasonType:(int)arg2;
- (BOOL)disposeRedDotIgnoreClearTypeAtPath:(id)arg1;
- (void)disposeGroupTipsWithGroupId:(id)arg1;
- (id)getAllRedDotCtrlInfoAtPath:(id)arg1;
- (id)getAllRedDotCtrlInfo;
- (void)resetAllRedDotData;
- (id)ctrlInfoWithType:(int)arg1;
- (id)ctrlInfoWithTipsUuid:(id)arg1;
- (int)showInfoTypeAtPath:(id)arg1;
- (id)currentShowInfoAtPath:(id)arg1;
- (int)ctrlInfoTypeAtPath:(id)arg1;
- (void)redDotInfoInvalidCheck;
- (BOOL)shouldShowRedDotAtPath:(id)arg1;
- (void)clearSameTypeCtrlInfoType:(int)arg1;
- (void)revokeRedDotByViewAction:(int)arg1 commentScene:(int)arg2;
- (void)clearSameRevokeIdCtrlInfo:(id)arg1;
- (void)saveRedDotInfoToLocal;
- (void)clearRedDotMockInfo;
- (BOOL)revokeRedDotPathInfo:(id)arg1 isOnlyWhiteList:(BOOL)arg2 whiteListTips:(id)arg3;
- (id)getRedDotCtrlInfoListWithRevokeId:(id)arg1;
- (void)loadRedDotInfoFromDB:(id)arg1;
- (BOOL)updateOrInsertWXRedDotInfo:(id)arg1;
- (BOOL)updateOrInsertWXRedDotInfoList:(id)arg1;
- (BOOL)updateOrInsertFinderRedDotInfo:(id)arg1 ctrlInfo:(id)arg2;
- (BOOL)updateOrInsertFinderRedDotInfoList:(id)arg1 ctrlInfoVector:(id)arg2;
- (id)redDotDataByUsername:(id)arg1;
- (BOOL)addSubAccountFinderRedDot:(id)arg1;
- (void)disposeSubAccountFinderUsername:(id)arg1 reddotPath:(id)arg2;
- (id)getCtrlInfoByFinderUsernameType:(id)arg1 type:(int)arg2;
- (id)getCtrlInfoByFinderUsernamePath:(id)arg1 reddotPath:(id)arg2;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

