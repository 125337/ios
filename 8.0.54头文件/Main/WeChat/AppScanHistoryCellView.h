@interface AppScanHistoryCellView : BaseMessageCellView
{
    UIImageView * m_bgImageView; // +0x28
}
- (BOOL)canBeReused;
- (id)initWithViewModel:(id)arg1;
- (void)layoutContentView;
- (id)itemLabelWithTitle:(id)arg1 width:(double)arg2 font:(id)arg3;
- (void)onOPButtonClicked:(id)arg1;
- (void)onClicked;
- (void)setHighlighted:(BOOL)arg1;
- (void)onTouchUpInside;
- (void).cxx_destruct;
@end

