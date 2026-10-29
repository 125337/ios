@interface EditImageAiToolAttrView : MMUIView <UICollectionViewDelegate, UICollectionViewDataSource, MMWebViewDelegate, IWebviewResourceManagerExt>
{
    BOOL _portrait; // +0x8
    BOOL _retLivePhoto; // +0x9
    UICollectionView * _collectionView; // +0x10
    id <EditImageAiToolAttrViewDelegate> _delegate; // +0x18
    NSMutableArray * _items; // +0x20
    NSString * _ybTemplateId; // +0x28
}
+ (void)showYuanBaoConfirmSheetWithHanlder:(id /* block */)arg1 cancelHandler:(id /* block */)arg2 bindVC:(id)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)onUIImageReady:(id)arg1;
- (void)reportYuanBaoSelect;
- (void)initLocalTempalteList:(BOOL)arg1;
- (void)requestUpdateTemplateList:(BOOL)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)didSelectItemAtIndexPathImpl:(id)arg1;
- (void)onWebViewWillClose:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (BOOL)portrait;
- (void)setPortrait:(BOOL)arg1;
- (BOOL)retLivePhoto;
- (void)setRetLivePhoto:(BOOL)arg1;
- (id)ybTemplateId;
- (void)setYbTemplateId:(id)arg1;
- (void).cxx_destruct;
@end
