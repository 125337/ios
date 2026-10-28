@interface ChatBotDiscoverDataLogic : NSObject <IChatBotVoIPRoomInfoExt>
{
    id <ChatBotDiscoverDataLogicDelegate> _delegate; // +0x8
    NSMutableArray * _roomInfoList; // +0x10
    ChatBotVoIPRoomInfo * _curSelectedRoomInfo; // +0x18
}
+ (id)getMultiChatBotUsernameListForRoom:(id)arg1;
+ (BOOL)isMultiChatBotRoom:(id)arg1;
- (id)initWithSelectedRoom:(id)arg1;
- (void)updateData;
- (BOOL)isSelectedWithIndex:(unsigned long long)arg1;
- (BOOL)isSelectedWithRoomInfo:(id)arg1;
- (void)updateSelectedRoomInfoWithIndex:(unsigned long long)arg1;
- (void)updateSelectedRoomInfo:(id)arg1;
- (unsigned long long)getDataCount;
- (id)getDataWithIndex:(unsigned long long)arg1;
- (unsigned long long)curSelectedIndex;
- (void)updateRoomInfo:(id)arg1;
- (void)onRoomInfoUpdate:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)roomInfoList;
- (void)setRoomInfoList:(id)arg1;
- (id)curSelectedRoomInfo;
- (void)setCurSelectedRoomInfo:(id)arg1;
- (void).cxx_destruct;
@end
