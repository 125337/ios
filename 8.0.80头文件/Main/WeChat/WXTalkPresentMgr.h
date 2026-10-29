@interface WXTalkPresentMgr : MMUserService <MMServiceProtocol, IMsgExt>
{
    NSMutableDictionary * _infoList; // +0x8
    BOOL _isInfoListLoaded; // +0x10
}
- (id)init;
- (void)dealloc;
- (void)OnMsgNotAddDBNotify:(id)arg1 MsgWrap:(id)arg2;
- (id)getRoomInfoFromMessageWrap:(id)arg1;
- (void)handleWXTalkRoomInfoMessage:(id)arg1 withMessageWrap:(id)arg2;
- (BOOL)writeToFile:(id)arg1 data:(id)arg2;
- (void)saveWXTalkRoomInfoList;
- (BOOL)loadWXTalkRoomInfoList;
- (BOOL)isTalkRoomEmpty:(id)arg1;
- (BOOL)isTrackMode:(id)arg1;
- (id)infoList;
- (void)setInfoList:(id)arg1;
- (void).cxx_destruct;
@end
