@interface WCPayGPSelectMemberViewController : WCPayBaseViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    BOOL _bIsAllSelect; // +0x98
    BOOL _bIsSearching; // +0x99
    unsigned int _maxSelectMember; // +0x9c
    id <WCPayGPSelectMemberControllerDelegate> _delegate; // +0xa0
    NSArray * _chatroomMemberContactArray; // +0xa8
    NSMutableArray * _selectdContacts; // +0xb0
    NSMutableArray * _resultSelectedContacts; // +0xb8
    unsigned long long _openImCount; // +0xc0
    MMTableView * _tableView; // +0xc8
    MMUIView * _toolBarView; // +0xd0
    UIImageView * _checkMarkImgView; // +0xd8
    UIButton * _selectAllButton; // +0xe0
    MMUIView * _topBarView; // +0xe8
    UIImageView * _searchIconImgView; // +0xf0
    UITextField * _searchTextField; // +0xf8
    MMUILabel * _textfieldPlaceHolder; // +0x100
    UICollectionView * _collectionView; // +0x108
    NSArray * _searchResultContacts; // +0x110
    double _kSelectMemberTopBarHeight; // +0x118
    NSMutableDictionary * _cellHeightDict; // +0x120
}
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)setupData;
- (void)setupNavigationBar;
- (void)setupContentView;
- (id)makeTipHeaderView;
- (void)setupTopbarViewContent;
- (void)clearAllInput;
- (void)setupToolViewContent;
- (id)collectionView;
- (void)selectMemberVCCancel;
- (void)cancelSaveSelectedMember;
- (void)saveSelectedMember;
- (void)finishSelectMember;
- (void)confirmToLaunchWithoutSelf;
- (void)selectAllBtnPress:(id)arg1;
- (void)checkSelectAllToolBarStatus;
- (void)updateSelectAllState:(BOOL)arg1;
- (void)checkConfirmBarbuttonStatus;
- (void)addAllContactExceptSelfIfNeed;
- (BOOL)isAllContactSelected;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)checkIfSelectContactMoreThanMax;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)reloadSelectMemberCollectionViewWithAnimated:(int)arg1;
- (void)textFieldDidChange:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (id)getContactAtIndexPath:(id)arg1;
- (BOOL)isContactSelected:(id)arg1;
- (void)removeSelectContact:(id)arg1;
- (BOOL)isContactExisted:(id)arg1;
- (void)doChatRoomSearch:(id)arg1;
- (id)delegate;
- (id)chatroomMemberContactArray;
- (void)setChatroomMemberContactArray:(id)arg1;
- (id)selectdContacts;
- (void)setSelectdContacts:(id)arg1;
- (id)resultSelectedContacts;
- (void)setResultSelectedContacts:(id)arg1;
- (BOOL)bIsAllSelect;
- (void)setBIsAllSelect:(BOOL)arg1;
- (unsigned int)maxSelectMember;
- (void)setMaxSelectMember:(unsigned int)arg1;
- (unsigned long long)openImCount;
- (void)setOpenImCount:(unsigned long long)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)toolBarView;
- (void)setToolBarView:(id)arg1;
- (id)checkMarkImgView;
- (void)setCheckMarkImgView:(id)arg1;
- (id)selectAllButton;
- (void)setSelectAllButton:(id)arg1;
- (id)topBarView;
- (void)setTopBarView:(id)arg1;
- (id)searchIconImgView;
- (void)setSearchIconImgView:(id)arg1;
- (id)searchTextField;
- (void)setSearchTextField:(id)arg1;
- (id)textfieldPlaceHolder;
- (void)setTextfieldPlaceHolder:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (BOOL)bIsSearching;
- (void)setBIsSearching:(BOOL)arg1;
- (id)searchResultContacts;
- (void)setSearchResultContacts:(id)arg1;
- (double)kSelectMemberTopBarHeight;
- (void)setKSelectMemberTopBarHeight:(double)arg1;
- (id)cellHeightDict;
- (void)setCellHeightDict:(id)arg1;
- (void).cxx_destruct;
@end
