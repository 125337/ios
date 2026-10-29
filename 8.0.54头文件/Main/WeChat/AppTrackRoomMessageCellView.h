@interface AppTrackRoomMessageCellView : CommonMessageCellView <ITrackPresentExt>
{
    UILabel * m_statusLabel; // +0xa8
}
- (id)initWithViewModel:(id)arg1;
- (BOOL)canOpenTrackRoom;
- (void)layoutContentView;
- (void)onTouchUpInside;
- (void)OnTrackRoomMemberChange:(id)arg1 withNewMemberList:(id)arg2;
- (void).cxx_destruct;
@end

