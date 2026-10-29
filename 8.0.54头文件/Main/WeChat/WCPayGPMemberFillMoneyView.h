@interface WCPayGPMemberFillMoneyView : MMUIView <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, WCPayGPMemberFillMoneyCellDelegate>
{
    BOOL _bIsFromImportSolitaire; // +0x8
    BOOL _bIsSearching; // +0x9
    unsigned int _maxSelectMember; // +0xc
    MMTableView * _tableView; // +0x10
    CContact * _chatroomContact; // +0x18
    NSArray * _chatroomMemberList; // +0x20
    NSMutableArray * _selectedContacts; // +0x28
    NSArray * _outExistContact; // +0x30
    NSMutableDictionary * _userPayAmountDict; // +0x38
    unsigned long long _maxPerAmount; // +0x40
    unsigned long long _maxTotalAmount; // +0x48
    WCPayGPMemberFillMoneyCell * _currentEditingCell; // +0x50
    NSMutableArray * _invalidAmountContacts; // +0x58
    unsigned long long _launchScene; // +0x60
    unsigned long long _openImCount; // +0x68
    NSDictionary * _commentDict; // +0x70
    MMUIView * _topBarView; // +0x78
    UIImageView * _searchIconImgView; // +0x80
    UITextField * _searchTextField; // +0x88
    NSArray * _searchResultContacts; // +0x90
    MMUIView * _toolBarView; // +0x98
    MMUIButton * _cleanUpBtn; // +0xa0
    MMUILabel * _totalAmountLabel; // +0xa8
    WCPayGPMemberFillMoneyCell * _prototypeCell; // +0xb0
    id /* block */ _onCancelSelectMember; // +0xb8
    id /* block */ _onFinishSelectMember; // +0xc0
    id /* block */ _onMemberSelectChange; // +0xc8
    id /* block */ _showParamInvalidTips; // +0xd0
    id /* block */ _hideParamInvalidTips; // +0xd8
}
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;
- (void)refreshContentViewWithChatroomContact:(id)arg1 selectedContactArray:(id)arg2 userPayAmountDict:(id)arg3 launchScene:(unsigned long long)arg4 extContactList:(id)arg5 commentDict:(id)arg6 fromImportSolitaire:(BOOL)arg7;
- (void)layoutSubviews;
- (void)setupData;
- (void)setupContentView;
- (id)makeTipsHeaderView;
- (void)updateContentTableViewTopInset:(double)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (BOOL)cellTextFieldShouldBeginEdittingWithCell:(id)arg1 withContact:(id)arg2;
- (void)cellTextFieldWillBeginEdittingWithCell:(id)arg1 withContact:(id)arg2;
- (void)cellTextFieldDidChangeWithCell:(id)arg1 withContact:(id)arg2 withValue:(double)arg3;
- (void)cellTextFieldDidEndEdittingWithCell:(id)arg1 withContact:(id)arg2 withValue:(double)arg3;
- (void)cellTextFieldKeyboardPressPreviousBtn:(id)arg1;
- (void)cellTextFieldKeyboardPressNextBtn:(id)arg1;
- (void)setupToolBarContent;
- (void)cleanUpBtnPress:(id)arg1;
- (void)cancelToCleanup;
- (void)confirmToCleanUp;
- (id)getTotalAmonutString;
- (void)updateContentStatus;
- (void)textFieldDidChange:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)cancelSelectMember;
- (void)cancelSaveSelectedMember;
- (void)finishSelectMember;
- (id)getContactAtIndexPath:(id)arg1;
- (BOOL)isOpenIMMemberCell:(id)arg1;
- (BOOL)isContactSelected:(id)arg1;
- (void)removeSelectContact:(id)arg1;
- (void)doChatRoomSearch:(id)arg1;
- (BOOL)checkIfSelectedMemberLargeThanMax;
- (void)handlePerAmountInvalidTipsWithContact:(id)arg1;
- (void)hidePerAmountInvalidTipsWithContact:(id)arg1;
- (BOOL)checkIfContactDisableEdit:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)chatroomContact;
- (void)setChatroomContact:(id)arg1;
- (id)chatroomMemberList;
- (void)setChatroomMemberList:(id)arg1;
- (id)selectedContacts;
- (void)setSelectedContacts:(id)arg1;
- (id)outExistContact;
- (void)setOutExistContact:(id)arg1;
- (id)userPayAmountDict;
- (void)setUserPayAmountDict:(id)arg1;
- (unsigned int)maxSelectMember;
- (void)setMaxSelectMember:(unsigned int)arg1;
- (unsigned long long)maxPerAmount;
- (void)setMaxPerAmount:(unsigned long long)arg1;
- (unsigned long long)maxTotalAmount;
- (void)setMaxTotalAmount:(unsigned long long)arg1;
- (id)currentEditingCell;
- (void)setCurrentEditingCell:(id)arg1;
- (id)invalidAmountContacts;
- (void)setInvalidAmountContacts:(id)arg1;
- (unsigned long long)launchScene;
- (void)setLaunchScene:(unsigned long long)arg1;
- (unsigned long long)openImCount;
- (void)setOpenImCount:(unsigned long long)arg1;
- (id)commentDict;
- (void)setCommentDict:(id)arg1;
- (BOOL)bIsFromImportSolitaire;
- (void)setBIsFromImportSolitaire:(BOOL)arg1;
- (id)topBarView;
- (void)setTopBarView:(id)arg1;
- (id)searchIconImgView;
- (void)setSearchIconImgView:(id)arg1;
- (id)searchTextField;
- (void)setSearchTextField:(id)arg1;
- (BOOL)bIsSearching;
- (void)setBIsSearching:(BOOL)arg1;
- (id)searchResultContacts;
- (void)setSearchResultContacts:(id)arg1;
- (id)toolBarView;
- (void)setToolBarView:(id)arg1;
- (id)cleanUpBtn;
- (void)setCleanUpBtn:(id)arg1;
- (id)totalAmountLabel;
- (void)setTotalAmountLabel:(id)arg1;
- (id)prototypeCell;
- (void)setPrototypeCell:(id)arg1;
- (id /* block */)onCancelSelectMember;
- (void)setOnCancelSelectMember:(id /* block */)arg1;
- (id /* block */)onFinishSelectMember;
- (void)setOnFinishSelectMember:(id /* block */)arg1;
- (id /* block */)onMemberSelectChange;
- (void)setOnMemberSelectChange:(id /* block */)arg1;
- (id /* block */)showParamInvalidTips;
- (void)setShowParamInvalidTips:(id /* block */)arg1;
- (id /* block */)hideParamInvalidTips;
- (void)setHideParamInvalidTips:(id /* block */)arg1;
- (void).cxx_destruct;
@end

