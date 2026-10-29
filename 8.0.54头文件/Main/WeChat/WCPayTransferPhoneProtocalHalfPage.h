@interface WCPayTransferPhoneProtocalHalfPage : MMPageSheetBaseViewController <MMPageSheetBottomViewDelegate>
{
    id <WCPayTransferPhoneProtocalHalfPageDelegate> _m_delegate; // +0x68
    WCPayTransferPhoneProtocaDetailView * _contentView; // +0x70
}
- (id)init;
- (void)setLinkContent:(id)arg1;
- (void)setContentViewTitle:(id)arg1;
- (double)getTitleLabelHeight;
- (double)pageSheetContentWidth;
- (double)pageSheetContentHeight;
- (id)pageSheetContentView;
- (id)titleForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void).cxx_destruct;
@end

