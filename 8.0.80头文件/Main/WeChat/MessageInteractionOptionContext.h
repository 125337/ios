@interface MessageInteractionOptionContext : NSObject
{
    NSString * _chatName; // +0x8
    long long _msgSvrId; // +0x10
    long long _pendingIndex; // +0x18
    MessageInteractionOptionListView * _view; // +0x20
}
- (id)chatName;
- (void)setChatName:(id)arg1;
- (long long)msgSvrId;
- (void)setMsgSvrId:(long long)arg1;
- (long long)pendingIndex;
- (void)setPendingIndex:(long long)arg1;
- (id)view;
- (void)setView:(id)arg1;
- (void).cxx_destruct;
@end
