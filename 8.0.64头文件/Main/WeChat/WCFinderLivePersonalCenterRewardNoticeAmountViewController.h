@interface WCFinderLivePersonalCenterRewardNoticeAmountViewController : MMCPUIViewController <UITableViewDelegate, UITableViewDataSource>
{
    id /* block */ _onVCWillPop; // +0x70
    MMTableView * _rewardQuotaOptionTableView; // +0x78
    OrderedDictionary * _rewardQuotaOptions; // +0x80
    unsigned long long _curRewardQuota; // +0x88
    FinderLiveRewardQuotaSwitchInfo * _info; // +0x90
}
- (id)initWithRewardQuotaSwitchInfo:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)initUI;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id /* block */)onVCWillPop;
- (void)setOnVCWillPop:(id /* block */)arg1;
- (id)rewardQuotaOptionTableView;
- (void)setRewardQuotaOptionTableView:(id)arg1;
- (id)rewardQuotaOptions;
- (void)setRewardQuotaOptions:(id)arg1;
- (unsigned long long)curRewardQuota;
- (void)setCurRewardQuota:(unsigned long long)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (void).cxx_destruct;
@end
