@interface WeNoteAddFavListViewController : FavBaseListViewController <PBMessageObserverDelegate>
{
    FavoritesItem * m_curNoteItem; // +0x120
    NSMutableArray * m_getA8KeyReqArr; // +0x128
    BOOL _isFlutterNote; // +0x130
    id <WeNoteAddFavListViewControllerDelegate> _delegate; // +0x138
}
- (id)initWithNoteItem:(id)arg1 maxSelectedCount:(unsigned int)arg2;
- (void)initBottomPinTopButton;
- (void)viewWillAppear:(BOOL)arg1;
- (void)initNavigationBar;
- (void)initEmptySearchLabel;
- (void)initFastBrowserView;
- (void)addItemList:(id)arg1 withAutoScrollToAddPositon:(BOOL)arg2;
- (void)OnSearch:(id)arg1 taskKey:(id)arg2;
- (void)OnCancel;
- (void)confirmAttachmentSeperationInRange:(_NSRange)arg1 with:(id)arg2;
- (void)addSeletedDataItemToNote;
- (void)checkVideoItem:(id)arg1;
- (void)onDone;
- (id)convertDataWrapToNoteData:(id)arg1;
- (id)convertDataWrapToAttributeNode:(id)arg1;
- (void)updateAddBtn;
- (void)onSelectRowAtIndexPath:(id)arg1;
- (void)canNotSelecteDueToExceedCount;
- (void)onClickDetailBtnWith:(id)arg1;
- (void)onSquareImgClicked:(id)arg1 withInfo:(id)arg2 withOffset:(unsigned int)arg3;
- (BOOL)favBrowseView:(id)arg1 willChangeCheckMarkTo:(BOOL)arg2 withMsgInfo:(id)arg3;
- (void)favBrowseView:(id)arg1 didChangeCheckMarkTo:(BOOL)arg2 withMsgInfo:(id)arg3;
- (id)messageWrapsForFavBrowseView:(id)arg1;
- (void)onSelectDone;
- (id)getA8KeyRequestWith:(id)arg1 index:(unsigned int)arg2;
- (void)sendGetA8KeyReq;
- (void)handleGetA8KeyResp:(id)arg1 EventID:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isFlutterNote;
- (void)setIsFlutterNote:(BOOL)arg1;
- (void).cxx_destruct;
@end
