@interface WCPayLQTPageSheet : NSObject <MMPageSheetBottomViewDelegate, ILinkEventExt, MMPageSheetAdapterDelegate>
{
    int _clickBtnType; // +0x8
    id <WCPayLQTPageSheetDelegate> _delegate; // +0x10
    MMPageSheetAdapter * _pageAdapter; // +0x18
    UIView * _pageSheetDetailView; // +0x20
    WCPayWebImageView * _mainIconImgView; // +0x28
    MMUILabel * _largeContentLabel; // +0x30
    MMUILabel * _contentLabel; // +0x38
    RichTextView * _textView; // +0x40
    PopUpWithHalfDialog * _pageData; // +0x48
    NSString * _mainContent; // +0x50
}
- (id)initWithDelegate:(id)arg1;
- (void)updateDetailViewWithPopUpDialogData:(id)arg1 popUpMainContent:(id)arg2;
- (void)setupAdapter;
- (BOOL)shouldSetupDetailViewContent;
- (void)setupDetailView;
- (void)showPageSheet;
- (void)dismissPageSheet;
- (void)pushPageSheet:(id)arg1;
- (void)popPageSheet;
- (id)getAdapter;
- (id)getPageViewId;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetCancelButton;
- (long long)styleForPageSheetCancelButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(BOOL)arg2;
- (int)clickBtnType;
- (void)setClickBtnType:(int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)pageAdapter;
- (void)setPageAdapter:(id)arg1;
- (id)pageSheetDetailView;
- (void)setPageSheetDetailView:(id)arg1;
- (id)mainIconImgView;
- (void)setMainIconImgView:(id)arg1;
- (id)largeContentLabel;
- (void)setLargeContentLabel:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)pageData;
- (void)setPageData:(id)arg1;
- (id)mainContent;
- (void)setMainContent:(id)arg1;
- (void).cxx_destruct;
@end

