@interface WCPayGPOrderLaunchControlLogic : WCPayControlLogic <SessionSelectControllerDelegate, WCPayGPLaunchControlLogicDelegate>
{
    BOOL _bHasSelectMemberFinish; // +0x38
    id <WCPayGPOrderLaunchControlLogicDelegate> _orderLaunchDelegate; // +0x40
    WCPayGPLaunchControlLogic * _launchLogic; // +0x48
    NSMutableArray * _recentGroupPayContactList; // +0x50
    CContact * _currentContact; // +0x58
}
- (void)dealloc;
- (id)initWithData:(id)arg1 orderContact:(id)arg2;
- (void)setupData;
- (void)setGroupPayOrderLaunchDelegate:(id)arg1;
- (void)startLogic;
- (void)stopLogic;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (id)sectionTitleForBizChatSession;
- (long long)numberOfRowInBizChatSession;
- (id)contactInBizChatSessionAtRow:(unsigned long long)arg1;
- (void)contactInBizChatDidSelect:(id)arg1;
- (void)onLaunchControlLogicStop;
- (id)orderLaunchDelegate;
- (void)setOrderLaunchDelegate:(id)arg1;
- (id)launchLogic;
- (void)setLaunchLogic:(id)arg1;
- (BOOL)bHasSelectMemberFinish;
- (void)setBHasSelectMemberFinish:(BOOL)arg1;
- (id)recentGroupPayContactList;
- (void)setRecentGroupPayContactList:(id)arg1;
- (id)currentContact;
- (void)setCurrentContact:(id)arg1;
- (void).cxx_destruct;
@end

