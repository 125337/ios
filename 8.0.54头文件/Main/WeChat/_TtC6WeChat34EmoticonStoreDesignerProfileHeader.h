@interface _TtC6WeChat34EmoticonStoreDesignerProfileHeader : UICollectionReusableView <ExpandableTextViewDelegate, ILinkEventExt, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, MMLoadMoreCollectionViewDelegate>
{
     desginer; // +0x8
     finderInfo; // +0x10
     delegate; // +0x30
     ipPacks; // +0x40
     designerDesc; // +0x48
     bannerUrl; // +0x58
     ipCellIdentifier; // +0x68
     $__lazy_storage_$_bannerView; // +0x78
     $__lazy_storage_$_desginerNameLabel; // +0x80
     $__lazy_storage_$_designerDescView; // +0x88
     $__lazy_storage_$_finderLinkView; // +0x90
     $__lazy_storage_$_ipPackLayout; // +0x98
     $__lazy_storage_$_ipPackCollection; // +0xa0
     $__lazy_storage_$_loadMoreView; // +0xa8
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)layoutSubviews;
- (void)onExpandableTextViewExpand:(BOOL)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)onLoadMore;
- (void)onLoadDone;
- (void).cxx_destruct;
@end

