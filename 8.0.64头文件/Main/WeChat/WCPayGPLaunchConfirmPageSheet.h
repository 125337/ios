@interface WCPayGPLaunchConfirmPageSheet : NSObject <MMPageSheetBottomViewDelegate, WCPayGPLaunchChatroomProfilePageSheetDelegate, MMPageSheetAdapterDelegate>
{
    BOOL _bIsShowing; // +0x8
    id <WCPayGPLaunchConfirmPageSheetDelegate> _delegate; // +0x10
    MMPageSheetAdapter * _pageAdapter; // +0x18
    UIView * _pageSheetDetailView; // +0x20
    CContact * _contact; // +0x28
    NSString * _theme; // +0x30
    NSString * _displayNameContent; // +0x38
    WCPayGPLaunchChatroomProfilePageSheet * _profilePageSheet; // +0x40
}
- (id)initWithDelagte:(id)arg1 contact:(id)arg2 theme:(id)arg3;
- (BOOL)shouldSetupDetailViewContent;
- (void)setupDetailViewContent;
- (double)setupContactCellContent;
- (double)setupThemeContentWithContentHeight:(double)arg1;
- (void)showPageSheet;
- (void)dismissPageSheet:(BOOL)arg1;
- (void)viewChatroomProfile;
- (void)onChatroomProfilePageSheetDidClose;
- (BOOL)isPageSheetShowing;
- (id)titleForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (void)pageSheetWillAppear:(id)arg1;
- (void)pageSheetDidAppear:(id)arg1;
- (void)pageSheetWillDisappear:(id)arg1;
- (void)pageSheetDidDisappear:(id)arg1;
- (void)pageSheetWillClose:(id)arg1 isManualTrigger:(BOOL)arg2;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)pageAdapter;
- (void)setPageAdapter:(id)arg1;
- (id)pageSheetDetailView;
- (void)setPageSheetDetailView:(id)arg1;
- (BOOL)bIsShowing;
- (void)setBIsShowing:(BOOL)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)theme;
- (void)setTheme:(id)arg1;
- (id)displayNameContent;
- (void)setDisplayNameContent:(id)arg1;
- (id)profilePageSheet;
- (void)setProfilePageSheet:(id)arg1;
- (void).cxx_destruct;
@end
