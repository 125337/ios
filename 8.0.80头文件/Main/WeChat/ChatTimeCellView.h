@interface ChatTimeCellView : BaseChatCellView <ChatBackgroundExt>
{
    MMTimer * m_updateTimeLabelTimer; // +0x10
    UILabel * m_timeLabel; // +0x18
    MMUIButton * m_rightButton; // +0x20
    UIView * m_bgImageView; // +0x28
}
- (id)initWithViewModel:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)getRightButton;
- (BOOL)canBeReused;
- (BOOL)shouldLayoutIfNeeded;
- (void)layoutInternal;
- (void)onChatBackgroundChanged:(id)arg1;
- (void)onClickTimeLabel;
- (void)handleRightButtonClicked:(id)arg1;
- (void).cxx_destruct;
@end
