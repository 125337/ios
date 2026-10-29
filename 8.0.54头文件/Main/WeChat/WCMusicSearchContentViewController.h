@interface WCMusicSearchContentViewController : WCMusicSearchBaseViewController <WCMusicSearchCollectionViewCellDelegate>
{
    BOOL _isLiteMode; // +0x68
    id <WCMusicSearchContentViewControllerDelegate> _delegate; // +0x70
    WCMusicSearchWorker * _searchWorker; // +0x78
}
- (void)viewDidLoad;
- (Class)collectionViewCellClass;
- (unsigned int)maxOffsetFromResponse:(id)arg1;
- (id)generateEmptyHintView;
- (unsigned long long)loadWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)filteredInfosWithResult:(id)arg1 existedItems:(id)arg2;
- (void)cancelSearchWithLastReqeustId:(unsigned long long)arg1;
- (BOOL)showFooterView;
- (id)collectionVeiwCellForDataItem:(id)arg1 reuseCell:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)updateHighlightedStatusForCollectionView:(id)arg1 indexPath:(id)arg2 highlighted:(BOOL)arg3;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)musicSearchCollectionCell:(id)arg1 didClickSendButton:(id)arg2 withMusicInfo:(id)arg3;
- (id)searchWorker;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isLiteMode;
- (void)setIsLiteMode:(BOOL)arg1;
- (void)setSearchWorker:(id)arg1;
- (void).cxx_destruct;
@end

