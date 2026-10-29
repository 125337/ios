@interface EmojiBrowseView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate, EmoticonPreviewWindowViewControllerDelegate>
{
    BOOL m_isLoadingData; // +0x8
    BOOL m_hasDataLeft; // +0x9
    BOOL m_isFirstLoading; // +0xa
    BOOL m_editStateChanged; // +0xb
    EmoticonPreviewWindowViewController * m_emoticonPreview; // +0x10
    BOOL _isEditing; // +0x18
    UICollectionView * _collectionView; // +0x20
    MMUIViewController * _curVC; // +0x28
    id <EmojiBrowseViewDelegate> _delegate; // +0x30
    UICollectionViewFlowLayout * _collectionLayout; // +0x38
    NSIndexPath * _selectedIndexPath; // +0x40
    NSIndexPath * _savedIndexPaths; // +0x48
    NSMutableDictionary * _oldEmojiData; // +0x50
    NSMutableArray * _oldSectionTitles; // +0x58
    NSMutableDictionary * _emojiMD5s; // +0x60
    NSMutableDictionary * _appEmojiInfoByThumbURL; // +0x68
    NSMutableDictionary * _appThumbPathByURL; // +0x70
}
- (id)initWithFrame:(CGRect)arg1;
- (void)reloadData:(BOOL)arg1 isFirstLoading:(BOOL)arg2;
- (void)setIsEditing:(BOOL)arg1;
- (void)didDeleteEmojiAtIndexPath:(id)arg1;
- (id)collectionView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)appEmojiDownloadInfoForExtendInfo:(id)arg1 md5:(id)arg2 thumbURL:(id)arg3;
- (void)onLoadImageFail:(id)arg1 extraInfo:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)showMenuControllerForIndexPath:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)deleteItem:(id)arg1;
- (void)locateItem:(id)arg1;
- (void)deleteEmojiAtIndexPath:(id)arg1;
- (void)locateEmojiAtIndexPath:(id)arg1;
- (void)firstLoad;
- (void)updateCollectionViewWithData:(id)arg1 newSectionTitle:(id)arg2;
- (void)updateLocalDataSource:(id)arg1 newSectionTitle:(id)arg2;
- (void)saveVisibleIndexPath;
- (void)restoreVisiblePosition;
- (void)layoutSubviews;
- (id)genHeaderView:(double)arg1 title:(id)arg2;
- (void)setupLongPressGesture;
- (long long)sectionNumber;
- (long long)itemNumberAtSection:(long long)arg1;
- (void)loadMore;
- (void)handleLongPress:(id)arg1;
- (void)showMenuAt:(id)arg1;
- (void)showEmoticonPreviewForWrap:(id)arg1 description:(id)arg2 pageWrapPid:(id)arg3 cellIndex:(unsigned long long)arg4 frame:(CGRect)arg5;
- (void)onFinishPreviewAndChangeToPid:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (id)curVC;
- (void)setCurVC:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isEditing;
- (id)collectionLayout;
- (void)setCollectionLayout:(id)arg1;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:(id)arg1;
- (id)savedIndexPaths;
- (void)setSavedIndexPaths:(id)arg1;
- (id)oldEmojiData;
- (void)setOldEmojiData:(id)arg1;
- (id)oldSectionTitles;
- (void)setOldSectionTitles:(id)arg1;
- (id)emojiMD5s;
- (void)setEmojiMD5s:(id)arg1;
- (id)appEmojiInfoByThumbURL;
- (void)setAppEmojiInfoByThumbURL:(id)arg1;
- (id)appThumbPathByURL;
- (void)setAppThumbPathByURL:(id)arg1;
- (void).cxx_destruct;
@end
