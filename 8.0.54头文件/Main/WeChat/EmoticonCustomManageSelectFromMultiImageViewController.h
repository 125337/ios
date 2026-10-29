@interface EmoticonCustomManageSelectFromMultiImageViewController : MMUIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate>
{
    BOOL _allMediaDownloaded; // +0x68
    id <EmoticonCustomManageSelectFromMultiImageViewControllerDelegate> _delegate; // +0x70
    UIImage * _placeHolderImage; // +0x78
    NSArray * _mediaInfos; // +0x80
    unsigned long long _selectedIndex; // +0x88
    double _cellViewWidth; // +0x90
    MMUIButton * _cancelBtn; // +0x98
    UIButton * _confirmBtn; // +0xa0
    MMUILabel * _tipsLabel; // +0xa8
    UIImageView * _imgPreviewView; // +0xb0
    UICollectionView * _imgPreviewCollectionView; // +0xb8
    NSMutableArray * _cellViews; // +0xc0
    UIView * _cellViewInteractiveView; // +0xc8
    UIPanGestureRecognizer * _swipeSelectGesture; // +0xd0
    UITapGestureRecognizer * _tapSelectGesture; // +0xd8
}
- (id)initWithMediaInfos:(id)arg1 placeHolderImageData:(id)arg2;
- (void)viewDidLoad;
- (id)progressViewX;
- (void)bringBtnsToFront;
- (void)viewDidTransitionToNewSize;
- (void)onAllMediaDownloaded;
- (void)initViews;
- (void)genCellViews;
- (id)getImageDataFromMediaInfo:(id)arg1;
- (void)createOrUpdataLayout;
- (void)viewWillLayoutSubviews;
- (double)cellViewWidth;
- (void)genCellViewWidth;
- (BOOL)useTransparentNavibar;
- (BOOL)shouldInteractivePop;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)onSwipeSelectGesure:(id)arg1;
- (void)doTaptic:(long long)arg1;
- (void)onTapCancel;
- (void)onTapNext;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)placeHolderImage;
- (void)setPlaceHolderImage:(id)arg1;
- (id)mediaInfos;
- (void)setMediaInfos:(id)arg1;
- (unsigned long long)selectedIndex;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)setCellViewWidth:(double)arg1;
- (BOOL)allMediaDownloaded;
- (void)setAllMediaDownloaded:(BOOL)arg1;
- (id)cancelBtn;
- (void)setCancelBtn:(id)arg1;
- (id)confirmBtn;
- (void)setConfirmBtn:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)imgPreviewView;
- (void)setImgPreviewView:(id)arg1;
- (id)imgPreviewCollectionView;
- (void)setImgPreviewCollectionView:(id)arg1;
- (id)cellViews;
- (void)setCellViews:(id)arg1;
- (id)cellViewInteractiveView;
- (void)setCellViewInteractiveView:(id)arg1;
- (id)swipeSelectGesture;
- (void)setSwipeSelectGesture:(id)arg1;
- (id)tapSelectGesture;
- (void)setTapSelectGesture:(id)arg1;
- (void).cxx_destruct;
@end

