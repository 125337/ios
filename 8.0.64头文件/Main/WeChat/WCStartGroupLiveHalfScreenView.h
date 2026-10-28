@interface WCStartGroupLiveHalfScreenView : MMPageSheetBaseViewController <MMPageSheetBottomViewDelegate, MMFinderLiveNewShareSettingViewControllerDelegate>
{
    BOOL _didVisibilityModeManullyChoosed; // +0x70
    id /* block */ _confirmCallback; // +0x78
    id /* block */ _cancelCallback; // +0x80
    id /* block */ _closeCallback; // +0x88
    UIView * _visibilitySettingLabel; // +0x90
    MMUILabel * _titleLabel; // +0x98
    MMUILabel * _detailLabel; // +0xa0
    WCFinderStarterLiveViewModel * _starterViewModel; // +0xa8
    unsigned long long _showType; // +0xb0
}
- (id)initWithStarterViewModel:(id)arg1 showType:(unsigned long long)arg2;
- (void)viewDidLoad;
- (void)configDetailView;
- (id)getLiveStarterSelectViewModel;
- (void)updateDetailLabel;
- (void)pageSheetDidClose:(BOOL)arg1;
- (void)onMMFinderLiveShareSettingViewControllerTapDoneWithShareSettingResult:(id)arg1;
- (void)onVisibilityLabelClicked;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (id)colorForPageSheetConfirmButton;
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
- (BOOL)didVisibilityModeManullyChoosed;
- (void)setDidVisibilityModeManullyChoosed:(BOOL)arg1;
- (void).cxx_destruct;
@end
