@interface WeShiReaderItemView : UIView <ReaderReporterExt>
{
    RichTextView * titleView; // +0x8
    WeShiMsgCardView * leftCardView; // +0x10
    WeShiMsgCardView * rightCardView; // +0x18
    id <WeiShiReaderItemViewDelegate> _viewDelegate; // +0x20
    id <WeiShiMsgCardMenuDelegate> _menuDelegate; // +0x28
    ReaderWrap * _leftReaderWrap; // +0x30
    ReaderWrap * _rightReaderWrap; // +0x38
}
- (id)init;
- (void)startInitView;
- (id)timeText:(unsigned long long)arg1;
- (void)onCardClicked:(id)arg1;
- (void)onLeftCardLongPress:(id)arg1;
- (void)onRightCardLongPress:(id)arg1;
- (void)onTableViewDidScrollDown;
- (void)doReport;
- (id)viewDelegate;
- (void)setViewDelegate:(id)arg1;
- (id)menuDelegate;
- (void)setMenuDelegate:(id)arg1;
- (id)leftReaderWrap;
- (void)setLeftReaderWrap:(id)arg1;
- (id)rightReaderWrap;
- (void)setRightReaderWrap:(id)arg1;
- (void).cxx_destruct;
@end

