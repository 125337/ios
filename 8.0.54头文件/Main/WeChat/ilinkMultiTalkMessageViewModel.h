@interface ilinkMultiTalkMessageViewModel : BaseMessageViewModel
{
    NSMutableArray * m_allTalkedMembers; // +0x60
    long long _ilinkMsgType; // +0x68
    unsigned long long _roomID; // +0x70
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (void)initIlinkMultiTalkNodeViewData;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (id)allTalkedMembers;
- (long long)ilinkMsgType;
- (void)setIlinkMsgType:(long long)arg1;
- (unsigned long long)roomID;
- (void)setRoomID:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

