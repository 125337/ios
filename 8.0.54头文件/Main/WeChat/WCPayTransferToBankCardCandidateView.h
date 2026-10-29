@interface WCPayTransferToBankCardCandidateView : MMUIView <UITableViewDelegate, UITableViewDataSource>
{
    UITableView * m_candidateTableView; // +0x8
    id <WCPayTransferToBankCardCandidateViewDelegate> m_delegate; // +0x10
    unsigned long long m_enMatchRule; // +0x18
    NSMutableArray * _m_resultsArray; // +0x20
    NSString * _m_inputText; // +0x28
}
- (void)initTableView;
- (void)reloadCandidateViewWithMatchResults:(id)arg1 matchType:(unsigned long long)arg2 inputText:(id)arg3;
- (void)initView;
- (id)initWithFrame:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)reloadCandidateView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)layoutCell:(id)arg1 candidate:(id)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (unsigned long long)m_enMatchRule;
- (void)setM_enMatchRule:(unsigned long long)arg1;
- (id)m_resultsArray;
- (void)setM_resultsArray:(id)arg1;
- (id)m_inputText;
- (void)setM_inputText:(id)arg1;
- (void).cxx_destruct;
@end

