@interface WCStartGroupLiveHalfScreenView : MMPageSheetBaseViewController <MMPageSheetBottomViewDelegate, MMFinderLiveNewShareSettingViewControllerDelegate>
{
    id /* block */ _confirmCallback; // +0x68
    id /* block */ _cancelCallback; // +0x70
    id /* block */ _closeCallback; // +0x78
    UIView * _visibilitySettingLabel; // +0x80
    MMUILabel * _titleLabel; // +0x88
    MMUILabel * _detailLabel; // +0x90
    WCFinderStarterLiveViewModel * _starterViewModel; // +0x98
    unsigned long long _showType; // +0xa0
}
- (id)initWithStarterViewModel:(id)arg1 showType:(unsigned long long)arg2;
- (void)viewDidLoad;
- (void)configdetailView;
- (id)getLiveStarterSelectViewModel;
- (void)updateDetailLabel;
- (void)pageSheetDidClose:(BOOL)arg1;
- (void)onMMFinderLiveShareSettingViewControllerTapDoneWithShareSettingResult:(id)arg1;
- (void)onVisibilityLabelClicked;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (void)registerYReportSdk;
- (void)reportExposeOnDidLoad;
- (void)reportOnConfirm;
- (id /* block */)confirmCallback;
- (void)setConfirmCallback:(id /* block */)arg1;
- (id /* block */)cancelCallback;
- (void)setCancelCallback:(id /* block */)arg1;
- (id /* block */)closeCallback;
- (void)setCloseCallback:(id /* block */)arg1;
- (id)visibilitySettingLabel;
- (void)setVisibilitySettingLabel:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)detailLabel;
- (void)setDetailLabel:(id)arg1;
- (id)starterViewModel;
- (void)setStarterViewModel:(id)arg1;
- (unsigned long long)showType;
- (void)setShowType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

