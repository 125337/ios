@interface WCCardMsgCenterMgr : MMObject <IMsgExt>
{
    WCCardPkgDB * _wccardPkgDB; // +0x8
    WCCardMsgTips * _wccardMsgTips; // +0x10
    WCCardEntryTips * _wccardEntryTips; // +0x18
    unsigned long long _lastMsgSvrId; // +0x20
    unsigned long long _lastLastMsgSvrId; // +0x28
    NSString * _nsLastConsumedBoxID; // +0x30
    id <WCCardMsgCenterMgrDelegate> _delegate; // +0x38
}
- (id)init;
- (void)initDB:(id)arg1;
- (unsigned int)getUnreadMsgCount;
- (id)getFirstPageMsgList;
- (BOOL)addMsg:(id)arg1 XML:(id)arg2;
- (BOOL)setAllMsgRead;
- (BOOL)setConsumedMsgRead:(id)arg1;
- (BOOL)hasEntryShowNewBySvr;
- (BOOL)hasEntryShowRedDotBySvr;
- (id)entryTipWordingBySvr;
- (id)entryTipIconUrlBySvr;
- (void)cleanEntryTipBySvr;
- (id)getRedDotBuffBySvr;
- (void)cleanRedDotBuffBySvr;
- (id)lastMsgCardIdForEntryTip;
- (BOOL)isLastMsgNeedCheckForClear;
- (BOOL)hasNewEntryNewBySvr;
- (BOOL)hasNewEntryRedDotBySvr;
- (BOOL)hasNewEntryMeRedDotBySvr;
- (id)bubbleMessageWording;
- (id)bubbleMessageIconUrl;
- (unsigned int)bubbleMessageCount;
- (void)cleanBubbleMessage;
- (void)loadCardTips;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

