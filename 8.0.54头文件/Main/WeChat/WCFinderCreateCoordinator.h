@interface WCFinderCreateCoordinator : NSObject <WCFinderUserPrepareCgiDelegate, WCFinderCreateUserViewControllerDelegate, WCFinderTipsViewControllerDelegate>
{
    BOOL _isAutoLifeCycle; // +0x8
    int _scene; // +0xc
    int _fromCommentScene; // +0x10
    unsigned long long _createScene; // +0x18
    FinderNewUserPrepareResponse * _userPrepare; // +0x20
    WCFinderPostSessionModel * _postSession; // +0x28
    NSString * _customCreateUserTitleText; // +0x30
    NSString * _customCreateUserConfirmButtonText; // +0x38
    id <WCFinderCreateCoordinatorDelegate> _delegate; // +0x40
    id /* block */ _customHandleUserPrapareBlock; // +0x48
    id _userInfo; // +0x50
    NSDictionary * _params; // +0x58
    id _context; // +0x60
}
+ (BOOL)shouldStartCreateUserWithPostContact:(id)arg1;
+ (BOOL)shouldStartCreateUserByMasterContact;
- (void)startCreateUser;
- (void)startCreateUserWithParams:(id)arg1;
- (void)createUserFuncComplete;
- (void)startRealName;
- (id)init;
- (void)dealloc;
- (void)showCreateAccountTipsWithCustomWording:(id)arg1;
- (void)showCreateAccountTips;
- (void)bindReportActionByTipsVC:(id)arg1;
- (id)geTopViewController;
- (void)OnRealnameVerfitySuccessNotification:(id)arg1;
- (void)createUserConfirmed;
- (void)createUserFinished:(id)arg1;
- (void)cancelCreateUser;
- (void)createUserFailed;
- (void)tipsVCClickConfirmButton:(id)arg1;
- (void)tipsVCClickCancelButton:(id)arg1;
- (void)reportDataVoluntaryExit:(unsigned long long)arg1;
- (void)userPrepareCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)userPrepareCgi:(id)arg1 didFailWithError:(id)arg2;
- (int)scene;
- (void)setScene:(int)arg1;
- (unsigned long long)createScene;
- (void)setCreateScene:(unsigned long long)arg1;
- (int)fromCommentScene;
- (void)setFromCommentScene:(int)arg1;
- (id)userPrepare;
- (void)setUserPrepare:(id)arg1;
- (id)postSession;
- (void)setPostSession:(id)arg1;
- (id)customCreateUserTitleText;
- (void)setCustomCreateUserTitleText:(id)arg1;
- (id)customCreateUserConfirmButtonText;
- (void)setCustomCreateUserConfirmButtonText:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)customHandleUserPrapareBlock;
- (void)setCustomHandleUserPrapareBlock:(id /* block */)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (BOOL)isAutoLifeCycle;
- (void)setIsAutoLifeCycle:(BOOL)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (void).cxx_destruct;
@end

