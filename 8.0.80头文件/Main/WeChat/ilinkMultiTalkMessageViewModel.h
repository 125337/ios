@interface ilinkMultiTalkMessageViewModel : BaseMessageViewModel
{
    NSMutableArray * m_allTalkedMembers; // +0x60
    BOOL _isCaller; // +0x68
    int _roomType; // +0x6c
    int _recordSource; // +0x70
    double _talkingTime; // +0x78
    long long _ilinkMsgType; // +0x80
    unsigned long long _roomID; // +0x88
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (void)initIlinkMultiTalkNodeViewData;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (id)allTalkedMembers;
- (double)talkingTime;
- (void)setTalkingTime:(double)arg1;
- (long long)ilinkMsgType;
- (void)setIlinkMsgType:(long long)arg1;
- (unsigned long long)roomID;
- (void)setRoomID:(unsigned long long)arg1;
- (int)roomType;
- (void)setRoomType:(int)arg1;
- (int)recordSource;
- (void)setRecordSource:(int)arg1;
- (BOOL)isCaller;
- (void)setIsCaller:(BOOL)arg1;
- (void).cxx_destruct;
@end
