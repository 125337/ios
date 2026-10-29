@interface WCAdvertiseActionFloatView : MMUIView <CAAnimationDelegate, UITableViewDataSource, UITableViewDelegate>
{
    WCDataItem * m_item; // +0x8
    UIButton * m_unInterestBtn; // +0x10
    UILabel * m_tipLabel; // +0x18
    UIView * m_lineView; // +0x20
    UITableView * m_dislikeTableView; // +0x28
    CGPoint m_showPoint; // +0x30
    UITableView * m_feedbackTableView; // +0x40
    id <WCAdvertiseActionFloatViewDelegate> _delegate; // +0x48
}
- (id)init;
- (void)showWithItemData:(id)arg1 tipPoint:(CGPoint)arg2;
- (void)hide;
- (void)spanReasonList;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)m_item;
- (id)m_unInterestBtn;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
