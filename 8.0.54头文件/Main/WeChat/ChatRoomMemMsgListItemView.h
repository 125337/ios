@interface ChatRoomMemMsgListItemView : MMUIView
{
    MainFrameCellData * m_cellData; // +0x8
    MMHeadImageView * m_frameHeadView; // +0x10
    MMCPLabel * m_nameLabel; // +0x18
    UILabel * m_timeLabel; // +0x20
    UILabel * m_greenLabel; // +0x28
    MMCPLabel * m_messageLabel; // +0x30
}
- (id)init;
- (void)initSubview;
- (void)updateMessageLabel;
- (void)updateNameLabel;
- (void)updateTimeLabel;
- (void)updateView:(id)arg1;
- (void).cxx_destruct;
@end

