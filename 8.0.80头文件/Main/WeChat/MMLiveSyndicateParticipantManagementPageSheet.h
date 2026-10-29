@interface MMLiveSyndicateParticipantManagementPageSheet : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource, MMLiveSyndicateManaging>
{
    MMLiveSyndicateModel * _model; // +0x8
    id <MMLiveSyndicateManagingDelegate> _delegate; // +0x10
    NSString * _finderUsername; // +0x18
    UITableView * _tableView; // +0x20
    UIButton * _leaveButton; // +0x28
    UIView * _buttonsSeparator; // +0x30
    UIButton * _learnMoreButton; // +0x38
}
- (id)initWithFinderUsername:(id)arg1 model:(id)arg2;
- (void)setModel:(id)arg1;
- (void)layoutSubviews;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onLeaveTapped;
- (void)onLearnMoreTapped;
- (void)initializeComponents;
- (id)model;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)leaveButton;
- (void)setLeaveButton:(id)arg1;
- (id)buttonsSeparator;
- (void)setButtonsSeparator:(id)arg1;
- (id)learnMoreButton;
- (void)setLearnMoreButton:(id)arg1;
- (void).cxx_destruct;
@end
