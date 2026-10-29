@interface SolitaireReport : NSObject
{
    NSString * _nsChatName; // +0x8
    NSString * _nsLaunchUserName; // +0x10
    NSString * _nsCurMsgUserName; // +0x18
    long long _sessionID; // +0x20
    NSString * _nsIdentifier; // +0x28
}
- (id)initWithSolitaire:(id)arg1;
- (void)report;
- (id)nsChatName;
- (void)setNsChatName:(id)arg1;
- (id)nsLaunchUserName;
- (void)setNsLaunchUserName:(id)arg1;
- (id)nsCurMsgUserName;
- (void)setNsCurMsgUserName:(id)arg1;
- (long long)sessionID;
- (void)setSessionID:(long long)arg1;
- (id)nsIdentifier;
- (void)setNsIdentifier:(id)arg1;
- (void).cxx_destruct;
@end
