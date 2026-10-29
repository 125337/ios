@interface WCPayMainViewTipsPageSheet : NSObject <MMPageSheetBottomViewDelegate, MMPageSheetAdapterDelegate>
{
    id <WCPayMainViewTipsPageSheetDelegate> _delegate; // +0x8
    WCPayMainViewTipsPageSheetConfig * _config; // +0x10
    MMPageSheetAdapter * _pageAdapter; // +0x18
    UIView * _pageSheetDetailView; // +0x20
    RichTextView * _richTextView; // +0x28
}
- (id)initWithConfig:(id)arg1 delegate:(id)arg2;
- (BOOL)shouldSetupDetailViewContent;
- (void)setupDetailViewContent;
- (void)showPageSheet;
- (void)dismissPageSheet:(BOOL)arg1;
- (id)titleForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (void)onClickPageSheetConfirmButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)pageAdapter;
- (void)setPageAdapter:(id)arg1;
- (id)pageSheetDetailView;
- (void)setPageSheetDetailView:(id)arg1;
- (id)richTextView;
- (void)setRichTextView:(id)arg1;
- (void).cxx_destruct;
@end

