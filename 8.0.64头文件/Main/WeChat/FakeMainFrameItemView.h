@interface FakeMainFrameItemView : MMUIView
{
    FakeHeadImageView * m_frameHeadView; // +0x8
    MMCPLabel * m_nameLabel; // +0x10
    UILabel * m_timeLabel; // +0x18
    MMCPLabel * m_messageLabel; // +0x20
    FakeMainFrameCellData * m_cellData; // +0x28
}
- (id)initWithCellData:(id)arg1 frame:(CGRect)arg2;
- (void)layoutSubviews;
- (void)initSubViews;
- (void)updateHeadView;
- (void)updateMessageLabel;
- (void)updateTimeLabel;
- (void)updateNameLabel;
- (id)getLabelNameColor;
- (void).cxx_destruct;
@end
