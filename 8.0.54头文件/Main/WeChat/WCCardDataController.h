@interface WCCardDataController : NSObject <UITableViewDelegate, UITableViewDataSource, MMTableViewDelegate, WCActionSheetDelegate, WCNewCardDetailViewControllerDelegate, ShareMessageConfirmLogicHelperDelegate, SessionSelectControllerDelegate>
{
    NSMutableArray * _expiringList; // +0x8
    NSMutableArray * _memberCardList; // +0x10
    NSMutableArray * _nearbyList; // +0x18
    NSMutableArray * _recentList; // +0x20
    NSMutableArray * _layoutList; // +0x28
    NSMutableArray * _layoutDisplayList; // +0x30
    NSMutableArray * _cardList; // +0x38
    NSMutableArray * _displayCardList; // +0x40
    NSMutableArray * _emptyList; // +0x48
    NSMutableArray * _invoiceCardList; // +0x50
    NSMutableArray * _generalCardList; // +0x58
    NSMutableArray * _sectionArr; // +0x60
    unsigned int _curMinUpdateTime; // +0x68
    BOOL _isDeleteHandling; // +0x6c
    BOOL _hasMoreData; // +0x6d
    BOOL _isReadyToLoad; // +0x6e
    BOOL _isNeedScrollToShareCard; // +0x6f
    WCCardConfigInfo * _configInfo; // +0x70
    id <WCCardDataControllerDelegate> _delegate; // +0x78
    ShareMessageConfirmLogicHelper * _SendAppMsgHelper; // +0x80
}
- (id)init;
- (void)dealloc;
- (void)initData;
- (void)setDeleteHandling:(BOOL)arg1;
- (unsigned long long)getDisplayListCount;
- (void)insertCardData:(id)arg1 AtIndex:(id)arg2;
- (id)getIndexPathWithCardData:(id)arg1;
- (id)getCardDataByIndexPath:(id)arg1;
- (void)removeAllNormalCard;
- (unsigned int)removeCard:(id)arg1;
- (void)updateLayoutData;
- (void)updateDisplayList;
- (void)updateInvoiceAndGeneralData;
- (void)updateSectionArr;
- (void)genInvoiceCardList;
- (void)genGeneralCardList;
- (void)genLayoutDisplayList;
- (void)processMemberSortData;
- (void)processExpireSortData;
- (void)processNearBySortData;
- (void)sortLayoutInfo;
- (void)sortWCCardList:(id)arg1;
- (unsigned int)safeAddCardList:(id)arg1;
- (void)deleteCardDataWithIndexPath:(id)arg1 needDeleteDB:(BOOL)arg2;
- (void)scrollToShareCard;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (void)onDeleteCard:(id)arg1;
- (void)onGiftCard:(id)arg1 lastIndex:(id)arg2;
- (void)onShareCard:(id)arg1 lastIndex:(id)arg2;
- (void)onUseCard:(id)arg1 lastIndex:(id)arg2 delayTime:(double)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSendMessageOK:(id)arg1;
- (void)unGiftCardDataWithIndexPath:(id)arg1;
- (void)deleteCardDataWithIndexPath:(id)arg1;
- (void)delayFadeOutCard:(id)arg1;
- (void)loadInvoiceCardCellSubView:(id)arg1 cardIndex:(id)arg2;
- (void)loadCardCellSubView:(id)arg1 cardIndex:(id)arg2;
- (void)loadEmptyCellSubView:(id)arg1 emptyIndex:(long long)arg2;
- (void)onGiftToFriendWithIndexPath:(id)arg1;
- (void)onOpenWebView;
- (id)getContollerTitle:(id)arg1;
- (int)indexOfCardInNormalCardList:(id)arg1;
- (int)indexOfCardInLayoutDisplayList:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)getSvrRetEntryList;
- (BOOL)hasSvrRetEntry;
- (id)getCardPkgElementWithIndex:(long long)arg1;
- (void)hanleCardPkgElementItemClickWithIndex:(long long)arg1;
- (void)loadSvrRetEntryCellSubView:(id)arg1 indexPath:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)hasMoreData;
- (void)setHasMoreData:(BOOL)arg1;
- (BOOL)isReadyToLoad;
- (void)setIsReadyToLoad:(BOOL)arg1;
- (void).cxx_destruct;
@end

