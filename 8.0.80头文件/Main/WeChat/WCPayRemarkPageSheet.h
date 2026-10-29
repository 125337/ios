@interface WCPayRemarkPageSheet : NSObject <MMGrowTextViewDelegate, MMPageSheetBottomViewDelegate, IMMGrowTextViewExt, MMPageSheetAdapterDelegate>
{
    BOOL _bIsShowing; // +0x8
    id <WCPayRemarkPageSheetDelegate> _delegate; // +0x10
    WCPayRemarkPageSheetConfig * _config; // +0x18
    MMPageSheetAdapter * _pageAdapter; // +0x20
    UIView * _pageSheetDetailView; // +0x28
    UIView * _textbackgroundView; // +0x30
    MMGrowTextView * _textView; // +0x38
    MMUILabel * _inputCountLabel; // +0x40
    UIButton * _rightButton; // +0x48
}
- (id)initWithConfig:(id)arg1 delegate:(id)arg2;
- (BOOL)shouldSetupDetailViewContent;
- (void)setupDetailViewContent;
- (void)updatetextViewHeight;
- (double)updateViewStatus;
- (void)updateConfig:(id)arg1;
- (void)showPageSheet;
- (void)showPageSheetFromViewController:(id)arg1;
- (void)dismissPageSheet;
- (void)rightButtonClick;
- (id)getCurrntContent;
- (BOOL)isRemarkPageSheetShowing;
- (void)dismissPage;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (void)TextDidChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)TextViewHeightDidChanged:(id)arg1;
- (void)onTextView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)pageSheetWillAppear:(id)arg1;
- (void)pageSheetDidAppear:(id)arg1;
- (void)pageSheetWillDisappear:(id)arg1;
- (void)pageSheetDidDisappear:(id)arg1;
- (void)pageSheetWillClose:(id)arg1 isManualTrigger:(BOOL)arg2;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (BOOL)bIsShowing;
- (void)setBIsShowing:(BOOL)arg1;
- (id)pageAdapter;
- (void)setPageAdapter:(id)arg1;
- (id)pageSheetDetailView;
- (void)setPageSheetDetailView:(id)arg1;
- (id)textbackgroundView;
- (void)setTextbackgroundView:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)inputCountLabel;
- (void)setInputCountLabel:(id)arg1;
- (id)rightButton;
- (void)setRightButton:(id)arg1;
- (void).cxx_destruct;
@end
