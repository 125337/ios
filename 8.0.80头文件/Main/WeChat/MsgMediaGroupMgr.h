@interface MsgMediaGroupMgr : MMUserService <MMServiceProtocol>
{
    long long _enableFlag; // +0x8
    MsgMediaGroupDB * _mmgDB; // +0x10
    NSMutableDictionary * _metaCache; // +0x18
    NSMapTable * _chatAgents; // +0x20
    NSMapTable * _unreadCache; // +0x28
    MsgMediaGroupViewConfig * _animationConfig; // +0x30
}
+ (id)shared;
- (id)groupStatInfo:(id)arg1;
- (BOOL)isMediaGroupExpanded:(id)arg1;
- (BOOL)isMediaGroupEditing:(id)arg1;
- (long long)allMsgsCountForMediaGroup:(id)arg1;
- (id)allMsgsForMediaGroup:(id)arg1;
- (BOOL)isMediaGroupFirstMsg:(id)arg1;
- (id)displayMsgsForMediaGroup:(id)arg1;
- (BOOL)isMediaGroupFirstDisplayMsg:(id)arg1;
- (void)updateMediaGroupCurrentIndex:(long long)arg1 withMsg:(id)arg2;
- (long long)mediaGroupCurrentIndexForMsg:(id)arg1;
- (BOOL)isUnread:(id)arg1;
- (void)clearUnread:(id)arg1;
- (id)addNotifyRecord:(id)arg1;
- (void)clearNotify:(id)arg1;
- (id)allNotifyForChatName:(id)arg1;
- (void)clearNotifyForChatName:(id)arg1;
- (unsigned int)maxSequenceIdInMediaGroup:(id)arg1;
- (void)OnDelMsg:(id)arg1 DelAll:(BOOL)arg2;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (BOOL)isSenderEnabled;
- (BOOL)isReceiverEnabled;
- (id)attachChatAgentForChatName:(id)arg1;
- (id)chatAgentForChatName:(id)arg1;
- (id)metaForMediaGroup:(id)arg1;
- (unsigned int)createTimeForMediaGroup:(id)arg1;
- (id)unreadForMediaGroup:(id)arg1;
- (void)clearUnreadForMediaGroup:(id)arg1;
- (void)receiveMediaGroupMessages:(id)arg1;
- (long long)enableFlag;
- (void)setEnableFlag:(long long)arg1;
- (id)mmgDB;
- (void)setMmgDB:(id)arg1;
- (id)metaCache;
- (void)setMetaCache:(id)arg1;
- (id)chatAgents;
- (void)setChatAgents:(id)arg1;
- (id)unreadCache;
- (void)setUnreadCache:(id)arg1;
- (id)animationConfig;
- (void)setAnimationConfig:(id)arg1;
- (void).cxx_destruct;
@end
