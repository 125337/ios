@interface GCBulletMsgFlowView : UIView <UITableViewDelegate, UITableViewDataSource, GCBulletMsgFlowCellDelegate>
{
    BOOL _isThinStyle; // +0x8
    NSArray * _originMsgList; // +0x10
    NSMutableArray * _displayMsgList; // +0x18
    UIView * _tableViewContainer; // +0x20
    UITableView * _msgTableView; // +0x28
    UIView * _lineView; // +0x30
    MMTimer * _displayTimer; // +0x38
    long long _curLoadIndex; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (id)tableViewContainer;
- (void)layoutSubviews;
- (void)configTableViewContainerGradientLayer;
- (id)msgTableView;
- (void)configLineView;
- (double)tableViewWidth;
- (double)msgLabelWidth;
- (void)startRepeatLoopWhenOneRoundFinish;
- (void)startLoadMsgLoop;
- (void)loadBulletMsgList:(id)arg1;
- (void)setIsThinStyle:(BOOL)arg1;
- (void)tableViewScrollToBottomWithAnimation:(BOOL)arg1;
- (void)dealloc;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (BOOL)isThinStyle;
- (id)originMsgList;
- (void)setOriginMsgList:(id)arg1;
- (id)displayMsgList;
- (void)setDisplayMsgList:(id)arg1;
- (void)setTableViewContainer:(id)arg1;
- (void)setMsgTableView:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (id)displayTimer;
- (void)setDisplayTimer:(id)arg1;
- (long long)curLoadIndex;
- (void)setCurLoadIndex:(long long)arg1;
- (void).cxx_destruct;
@end
