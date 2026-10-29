@interface WCPayGPWalletLaunchControlLogic : WCPayControlLogic <SessionSelectControllerDelegate, IWCPayControlLogicExt, WCPayGPIntroViewControllerDelegate, WCPayGPLaunchControlLogicDelegate, WCPayGPOperationCgiDelegate>
{
    BOOL _bHasLaunchSucc; // +0x38
    BOOL _bIsFromJSAPI; // +0x39
    id <WCPayGPWalletLaunchControlLogicDelegate> _walletLaunchDelegate; // +0x40
    WCPayGPLaunchControlLogic * _launchLogic; // +0x48
    NSMutableArray * _recentGroupPayContactList; // +0x50
    CContact * _launchContact; // +0x58
    long long _groupPayAmount; // +0x60
    NSString * _groupPayTitle; // +0x68
    WCPayGPOperationCgi * _gpOperationCgi; // +0x70
    AAOperationRes * _gpOperationResp; // +0x78
}
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 amount:(long long)arg2 title:(id)arg3;
- (void)setupData;
- (void)setGroupPayWalletLaunchDelegate:(id)arg1;
- (void)startLogic;
- (void)stopLogic;
- (void)onWCPayGPIntroViewControllerBack;
- (void)onWCPayGPIntroViewControllerClickLaunchBtn;
- (void)onWCPayGPIntroViewControllerClickRecordHistoryBtn;
- (unsigned long long)getGroupPayLaunchScene;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (id)sectionTitleForBizChatSession;
- (long long)numberOfRowInBizChatSession;
- (id)contactInBizChatSessionAtRow:(unsigned long long)arg1;
- (void)contactInBizChatDidSelect:(id)arg1;
- (void)onLaunchGroupPaySuccWithContact:(id)arg1;
- (void)onLaunchControlLogicStop;
- (id)getOperationData;
- (void)sendGroupPaySvrConfigRequest;
- (void)onGetGroupPayOperationResponse:(id)arg1;
- (id)walletLaunchDelegate;
- (void)setWalletLaunchDelegate:(id)arg1;
- (id)launchLogic;
- (void)setLaunchLogic:(id)arg1;
- (BOOL)bHasLaunchSucc;
- (void)setBHasLaunchSucc:(BOOL)arg1;
- (id)recentGroupPayContactList;
- (void)setRecentGroupPayContactList:(id)arg1;
- (id)launchContact;
- (void)setLaunchContact:(id)arg1;
- (long long)groupPayAmount;
- (void)setGroupPayAmount:(long long)arg1;
- (id)groupPayTitle;
- (void)setGroupPayTitle:(id)arg1;
- (BOOL)bIsFromJSAPI;
- (void)setBIsFromJSAPI:(BOOL)arg1;
- (id)gpOperationCgi;
- (void)setGpOperationCgi:(id)arg1;
- (id)gpOperationResp;
- (void)setGpOperationResp:(id)arg1;
- (void).cxx_destruct;
@end

