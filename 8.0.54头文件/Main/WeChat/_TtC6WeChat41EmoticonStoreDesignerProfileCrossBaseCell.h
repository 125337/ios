@interface _TtC6WeChat41EmoticonStoreDesignerProfileCrossBaseCell : UICollectionViewCell <MMLoadMoreCollectionViewDelegate, UICollectionViewDelegate>
{
     scrollDelegate; // +0x8
     $__lazy_storage_$_collectionLayout; // +0x18
     $__lazy_storage_$_collectionView; // +0x20
     $__lazy_storage_$_loadMoreView; // +0x28
     lastOffsetY; // +0x30
     loadMoreViewHeight; // +0x38
     layoutHorizontalInset; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)onLoadMore;
- (void)onLoadDone;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void).cxx_destruct;
@end

