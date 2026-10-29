@interface WCFinderPersonalContactModel : NSObject <WCFinderContactExt, WCFinderRedDotNotifyExt>
{
    WCFinderContact * _contact; // +0x8
    PrepareFinder * _prepare; // +0x10
    WCFinderUserMessage * _userMessage; // +0x18
}
- (void)setContact:(id)arg1;
- (void)setPrepare:(id)arg1;
- (void)setUserMessage:(id)arg1;
- (id)finderMsgRedDotInfo;
- (void)onFinderContactUpdate:(id)arg1;
- (void)onFinderNotifyUnreadMentionCountNeedReloadWithUsername:(id)arg1;
- (void)onFinderNotifyMemberUnreadMentionCountNeedReloadWithUsername:(id)arg1;
- (id)contact;
- (id)prepare;
- (id)userMessage;
- (void).cxx_destruct;
@end
