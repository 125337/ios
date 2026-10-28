@interface WCMusicSmartBoxViewController : WCMusicSearchBaseViewController
{
    id <WCMusicSmartBoxViewControllerDelegate> _delegate; // +0x70
    WCMusicSmartBoxWorker * _smartboxWorker; // +0x78
}
- (void)cancelSearchWithLastReqeustId:(unsigned long long)arg1;
- (id)generateCollectionViewFlowLayout;
- (Class)collectionViewCellClass;
- (unsigned long long)loadWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)collectionVeiwCellForDataItem:(id)arg1 reuseCell:(id)arg2;
- (id)smartboxWorker;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setSmartboxWorker:(id)arg1;
- (void).cxx_destruct;
@end
