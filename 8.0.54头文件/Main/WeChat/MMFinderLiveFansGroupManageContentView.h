@interface MMFinderLiveFansGroupManageContentView : UIView <MMRefreshTableFooterDelegate, MMFinderLiveFansGroupMemberTableViewDelegate>
{
    MMTableView * _fansGroupMemberTableView; // +0x8
    id /* block */ _closeActionCallBack; // +0x10
    id /* block */ _modifyActionCallBack; // +0x18
    MMFinderLiveFansGroupManageNavBar * _navBar; // +0x20
    MMFinderLiveFansGroupMemberTableViewModel * _fansGroupMemberTableViewModel; // +0x28
    MMUILabel * _noMemberTipLabel; // +0x30
    MMFinderLiveFansGroupMemberTableHeaderView * _headerView; // +0x38
    WCTimeLineFooterView * _footerView; // +0x40
    MMFinderLiveTaskId * _taskId; // +0x48
    MMFinderLiveFansGroupMemberLogic * _fetchLogic; // +0x50
    UIColor * _navBarBGColor; // +0x58
    NSString * _fansGroupName; // +0x60
    MMFinderLiveFansGroupAnchorEditViewModel * _anchorEditViewModel; // +0x68
    UIImageView * _superfanTableHeaderBGImageView; // +0x70
}
- (id)initWithTaskId:(id)arg1;
- (void)innerInit;
- (void)refreshFansGroupInfo;
- (unsigned long long)getFilterType;
- (unsigned long long)getSortType;
- (void)refreshAnchorEditInfo;
- (BOOL)isSelfFirstResponder;
- (void)updateUIForKeyBoardShow:(BOOL)arg1 keyBoardHeight:(double)arg2;
- (void)updateNavRightButton;
- (void)createFetchLogic;
- (void)refreshFansGroupName;
- (void)showNoMemberTipLabel;
- (void)hideNoMemberTipLabel;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutNavBar;
- (void)layoutFansGroupMemberTableView;
- (void)updateTableHeaderBG;
- (id)createFansGroupMemberTableFooterView;
- (void)updateFooterView:(unsigned long long)arg1;
- (void)layoutNoMemberTipLabel;
- (void)createNoMemberTipLabel;
- (void)updateNoMemberTipText;
- (void)layoutTableHeaderView;
- (void)createTableHeaderView;
- (void)gotoEnableSuperfanPage;
- (id)fansGroupMemberTableViewModel;
- (void)setFansGroupName:(id)arg1;
- (BOOL)superfanEnabled;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onFansGroupMemberTableDidScroll;
- (id)navBarBGColor;
- (void)onFansGroupMemberTableNeedRefreshWithMemberType:(unsigned long long)arg1 groupType:(unsigned long long)arg2;
- (id)fansGroupMemberTableView;
- (void)setFansGroupMemberTableView:(id)arg1;
- (id /* block */)closeActionCallBack;
- (void)setCloseActionCallBack:(id /* block */)arg1;
- (id /* block */)modifyActionCallBack;
- (void)setModifyActionCallBack:(id /* block */)arg1;
- (id)navBar;
- (void)setNavBar:(id)arg1;
- (void)setFansGroupMemberTableViewModel:(id)arg1;
- (id)noMemberTipLabel;
- (void)setNoMemberTipLabel:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)fetchLogic;
- (void)setFetchLogic:(id)arg1;
- (void)setNavBarBGColor:(id)arg1;
- (id)fansGroupName;
- (id)anchorEditViewModel;
- (void)setAnchorEditViewModel:(id)arg1;
- (id)superfanTableHeaderBGImageView;
- (void)setSuperfanTableHeaderBGImageView:(id)arg1;
- (void).cxx_destruct;
@end

