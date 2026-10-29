@interface MMFinderLiveConnectMicAudienceApplyPageSheet : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource>
{
    BOOL _showIdentitySwitch; // +0x8
    BOOL _isInPk; // +0x9
    id <MMFinderLiveConnectMicAudienceApplyPageSheetDelegate> _delegate; // +0x10
    UITableView * _tableView; // +0x18
    UIView * _separatorBar; // +0x20
    UIView * _identitySwitchContainer; // +0x28
    MMHeadImageView * _identityHeadImageView; // +0x30
    UILabel * _identityNickNameLabel; // +0x38
    UIImageView * _identitySwitchIconView; // +0x40
}
- (id)initWithAutoConnect:(BOOL)arg1 isInPk:(BOOL)arg2 showIdentitySwitch:(BOOL)arg3;
- (void)cancelAnimated:(BOOL)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutIdentitySwitchContainer:(CGSize)arg1;
- (void)updateNavLeftButton;
- (void)pageSheetWillClose:(BOOL)arg1;
- (void)onCameraSettingsTapped;
- (void)oCloseButtonTapped;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)initializeComponentsWithAutoConnect:(BOOL)arg1 isInPk:(BOOL)arg2;
- (double)detailViewHeight;
- (void)setupIdentitySwitchEntry;
- (void)updateIdentitySwitchInfo;
- (void)onIdentitySwitchTapped;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)separatorBar;
- (void)setSeparatorBar:(id)arg1;
- (BOOL)showIdentitySwitch;
- (void)setShowIdentitySwitch:(BOOL)arg1;
- (BOOL)isInPk;
- (void)setIsInPk:(BOOL)arg1;
- (id)identitySwitchContainer;
- (void)setIdentitySwitchContainer:(id)arg1;
- (id)identityHeadImageView;
- (void)setIdentityHeadImageView:(id)arg1;
- (id)identityNickNameLabel;
- (void)setIdentityNickNameLabel:(id)arg1;
- (id)identitySwitchIconView;
- (void)setIdentitySwitchIconView:(id)arg1;
- (void).cxx_destruct;
@end
