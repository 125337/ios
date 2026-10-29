@interface _TtC6WeChat21WCPayLedgerDatePicker : NSObject <MMPageSheetAdapterDelegate, MMPageSheetBottomViewDelegate>
{
     contentView; // +0x8
     adapter; // +0x10
     pickAction; // +0x18
     modalDisappearAction; // +0x28
     contentInitialized; // +0x38
}
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (void)pageSheetWillAppear:(id)arg1;
- (void)pageSheetDidAppear:(id)arg1;
- (void)pageSheetWillDisappear:(id)arg1;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)init;
- (void).cxx_destruct;
@end

