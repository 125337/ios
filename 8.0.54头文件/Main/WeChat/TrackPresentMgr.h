@interface TrackPresentMgr : MMUserService <IMsgExt, MMServiceProtocol>
{
    NSMutableDictionary * _trackRoomList; // +0x8
    BOOL _isTrackRoomListLoaded; // +0x10
}
- (id)init;
- (void)handleTrackRoomInfoMessage:(id)arg1 withMessageWrap:(id)arg2;
- (id)getTrackRoomInfoFromMessageWrag:(id)arg1;
- (BOOL)writeToFile:(id)arg1 data:(id)arg2;
- (void)saveTrackRoomInfoList;
- (BOOL)loadTrackRoomInfoList;
- (BOOL)isTrackRoomEmpty:(id)arg1;
- (id)getTrackRoomMembersByUsername:(id)arg1;
- (BOOL)isTrackRoomExpired:(id)arg1;
- (id)getRoomPOIByUsername:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void).cxx_destruct;
@end

