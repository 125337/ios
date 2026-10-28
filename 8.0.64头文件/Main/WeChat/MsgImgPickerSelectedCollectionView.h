@interface MsgImgPickerSelectedCollectionView : MMUIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    id <MsgImgPickerSelectedCollectionViewDelegate> _delegate; // +0x8
    NSMutableArray * _previewMsgInfos; // +0x10
    UICollectionView * _collectionView; // +0x18
    SimpleMsgInfo * _selectedMsgInfo; // +0x20
    NSMutableSet * _disabledMsgInfo; // +0x28
}
+ (double)getCollectionViewHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)initData;
- (void)initView;
- (void)initCollectionView;
- (void)layoutSubviews;
- (void)reloadDataView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)changeToMsgInfo:(id)arg1;
- (id)indexPathForMsgInfo:(id)arg1;
- (void)insertItemAtIndex:(unsigned long long)arg1;
- (void)deleteItemAtIndex:(unsigned long long)arg1;
- (void)toggleSelectMsgInfo:(id)arg1;
- (void)handlelongGesture:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)previewMsgInfos;
- (void)setPreviewMsgInfos:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)selectedMsgInfo;
- (void)setSelectedMsgInfo:(id)arg1;
- (id)disabledMsgInfo;
- (void)setDisabledMsgInfo:(id)arg1;
- (void).cxx_destruct;
@end
