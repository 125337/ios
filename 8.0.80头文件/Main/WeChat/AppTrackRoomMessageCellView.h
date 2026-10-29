@interface AppTrackRoomMessageCellView : CommonMessageCellView <ITrackPresentExt>
{
    UILabel * m_statusLabel; // +0xb8
    UIImageView * _iconView; // +0xc0
}
- (id)initWithViewModel:(id)arg1;
- (BOOL)canOpenTrackRoom;
- (void)layoutContentView;
- (void)updateIconImageWithCanOpenTrack:(BOOL)arg1;
- (void)onTouchUpInside;
- (void)OnTrackRoomMemberChange:(id)arg1 withNewMemberList:(id)arg2;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (void).cxx_destruct;
@end
