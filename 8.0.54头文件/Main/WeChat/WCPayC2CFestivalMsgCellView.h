@interface WCPayC2CFestivalMsgCellView : CommonMessageCellView
{
    UILabel * m_descLabel; // +0xa8
    UILabel * m_titleLabel; // +0xb0
    MMUILabel * _bottomLabel; // +0xb8
    MMUIView * _audioView; // +0xc0
}
- (id)initWithViewModel:(id)arg1;
- (void)updateStatus;
- (void)layoutContentView;
- (void)layoutNormalBubbleContentView;
- (id)getContentTextColor;
- (double)getContentMargin;
- (void)layoutHKNewYearBubbleContentView;
- (void)setHighlighted:(BOOL)arg1;
- (void)layoutInternal;
- (void)onTouchUpInside;
- (id)bottomLabel;
- (void)setBottomLabel:(id)arg1;
- (id)audioView;
- (void)setAudioView:(id)arg1;
- (void).cxx_destruct;
@end

