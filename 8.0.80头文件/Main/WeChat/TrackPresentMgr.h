@interface TrackPresentMgr : MMUserService <MMServiceProtocol>
- (id)init;
- (void)handleTrackRoomInfoMessage:(id)arg1 withMessageWrap:(id)arg2;
- (BOOL)isTrackRoomEmpty:(id)arg1;
- (id)getTrackRoomMembersByUsername:(id)arg1;
- (id)getRoomPOIByUsername:(id)arg1;
- (BOOL)loadTrackRoomInfoList;
- (id)getTrackRoomInfoFromMessageWrag:(id)arg1;
- (BOOL)writeToFile:(id)arg1 data:(id)arg2;
- (void)saveTrackRoomInfoList;
- (BOOL)isTrackRoomExpired:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
@end
