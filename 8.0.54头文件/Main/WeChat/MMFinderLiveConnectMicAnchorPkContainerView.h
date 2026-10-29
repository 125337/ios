@interface MMFinderLiveConnectMicAnchorPkContainerView : MMFinderLiveConnectMicBaseContainerView <UITableViewDelegate, UITableViewDataSource>
{
    BOOL _isPkDisabled; // +0x8
    BOOL _isApplicant; // +0x9
    id <MMFinderLiveConnectMicAnchorPkContainerViewDelegate> _actionDelegate; // +0x10
    MMTableView * _tableView; // +0x18
    NSArray * _micUsers; // +0x20
    MMFinderLiveConnectMicPKInfo * _pkInfo; // +0x28
    UIView * _contentView; // +0x30
    UILabel * _pkTitleLabel; // +0x38
    UIImageView * _pkIcon; // +0x40
    UIButton * _closeMicButton; // +0x48
    UIButton * _extraCloseMicButton; // +0x50
    UIButton * _pkActionButton; // +0x58
    UIView * _tableHeaderView; // +0x60
}
- (id)initWithMicUsers:(id)arg1 disablePk:(BOOL)arg2 isApplicant:(BOOL)arg3 frame:(CGRect)arg4;
- (void)initViews;
- (void)reCreatePkButton;
- (void)updatePkInfo:(id)arg1;
- (void)layoutSubviews;
- (id)mainScrollView;
- (void)closeAction;
- (void)onClickCloseMic;
- (void)onTapPkAction;
- (void)requestDismiss:(BOOL)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)micUsers;
- (void)setMicUsers:(id)arg1;
- (id)pkInfo;
- (void)setPkInfo:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)pkTitleLabel;
- (void)setPkTitleLabel:(id)arg1;
- (id)pkIcon;
- (void)setPkIcon:(id)arg1;
- (id)closeMicButton;
- (void)setCloseMicButton:(id)arg1;
- (id)extraCloseMicButton;
- (void)setExtraCloseMicButton:(id)arg1;
- (id)pkActionButton;
- (void)setPkActionButton:(id)arg1;
- (id)tableHeaderView;
- (void)setTableHeaderView:(id)arg1;
- (BOOL)isPkDisabled;
- (void)setIsPkDisabled:(BOOL)arg1;
- (BOOL)isApplicant;
- (void)setIsApplicant:(BOOL)arg1;
- (void).cxx_destruct;
@end

