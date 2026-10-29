@interface InviteFriendLogic : NSObject <MFMessageComposeViewControllerDelegate, MFMailComposeViewControllerDelegate, PBMessageObserverDelegate>
{
    id <InviteFriendLogicDelegate> m_delegate; // +0x8
    NSMutableDictionary * m_dicMsg; // +0x10
    NSMutableDictionary * m_dicSubject; // +0x18
    BOOL m_bDefaultWording; // +0x20
    UIColor * m_oldBarTintColor; // +0x28
    NSDictionary * m_oldTitleTextAttributes; // +0x30
    long long m_oldUIBarStyle; // +0x38
    unsigned int _fromScene; // +0x40
}
+ (BOOL)isShowEntryInMainFrame;
+ (BOOL)isShowEntryInContactList;
+ (BOOL)isEntryOnTheTop;
+ (BOOL)isShowInvite;
+ (BOOL)isShowEmail;
+ (BOOL)isShowSMS;
+ (BOOL)isShowWhatsapp;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (id)getMsg:(unsigned int)arg1;
- (id)getInviteSources;
- (id)getSubject:(unsigned int)arg1;
- (void)saveOldSetting;
- (void)recoverOldSetting;
- (void)startInviteEmail;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)startInviteMessage;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)startInviteWhatsapp;
- (void)updateWording:(unsigned int)arg1;
- (void)startAgain:(id)arg1;
- (void)handleGetMsg:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)reportInvitationSendStatus:(unsigned int)arg1 result:(BOOL)arg2;
- (unsigned int)fromScene;
- (void)setFromScene:(unsigned int)arg1;
- (void).cxx_destruct;
@end

