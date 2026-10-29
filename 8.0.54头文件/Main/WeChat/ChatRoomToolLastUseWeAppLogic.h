@interface ChatRoomToolLastUseWeAppLogic : MMObject <MsgNewImgDataLogicDelegate>
{
    MMTimer * m_weAppSearchTimer; // +0x8
    CContact * _chatRoomContact; // +0x10
    id <ChatRoomToolLastUseWeAppLogicDelegate> _delegate; // +0x18
    MsgNewImgDataLogic * _dataLogic; // +0x20
    NSMutableArray * _msgArr; // +0x28
    NSMutableSet * _weAppSet; // +0x30
}
- (void)startLogic;
- (void)initData;
- (id)getLastHalfYearDate;
- (void)stopWeAppSearch;
- (void)dealloc;
- (void)reloadData;
- (BOOL)onMsgNewImgLogicDataMatch:(id)arg1;
- (void)onMsgNewImgDataLogicLoadOKWithLast:(id)arg1 Next:(id)arg2;
- (id)chatRoomContact;
- (void)setChatRoomContact:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataLogic;
- (void)setDataLogic:(id)arg1;
- (id)msgArr;
- (void)setMsgArr:(id)arg1;
- (id)weAppSet;
- (void)setWeAppSet:(id)arg1;
- (void).cxx_destruct;
@end

