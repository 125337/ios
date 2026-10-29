@interface MMLiveSyndicateManagementPageSheet : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource, MMLiveSyndicateManagementContactCellDelegate, MMLiveSyndicateManaging>
{
    BOOL _isOpen; // +0x8
    MMLiveSyndicateModel * _model; // +0x10
    id <MMLiveSyndicateManagingDelegate> _delegate; // +0x18
    NSString * _finderUsername; // +0x20
    UIView * _scrollContainerView; // +0x28
    MMLiveScrollGradientMaskingView * _scrollMaskingView; // +0x30
    UITableView * _tableView; // +0x38
    UIButton * _cancelButton; // +0x40
    UIView * _buttonsSeparator; // +0x48
    UIButton * _learnMoreButton; // +0x50
}
- (id)initWithFinderUsername:(id)arg1 model:(id)arg2;
- (void)setModel:(id)arg1;
- (void)pageSheetDidShow;
- (void)pageSheetDidDismiss;
- (void)pageSheetDidAppear;
- (void)pageSheetWillDisappear;
- (void)layoutSubviews;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onRemoveRequestedByCell:(id)arg1;
- (void)onCancelTapped;
- (void)onLearnMoreTapped;
- (void)didTakeSnapshot;
- (void)didChangeScreenCapture;
- (void)initializeComponents;
- (id)model;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isOpen;
- (void)setIsOpen:(BOOL)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)scrollContainerView;
- (void)setScrollContainerView:(id)arg1;
- (id)scrollMaskingView;
- (void)setScrollMaskingView:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)buttonsSeparator;
- (void)setButtonsSeparator:(id)arg1;
- (id)learnMoreButton;
- (void)setLearnMoreButton:(id)arg1;
- (void).cxx_destruct;
@end
