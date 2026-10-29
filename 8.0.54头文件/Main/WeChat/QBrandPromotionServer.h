@interface QBrandPromotionServer : NSObject <QBrandPromotionGridModelDelegate, QMapLRUCacheDelegate>
{
    QBrandPromotionContext * _brandPromotionContext; // +0x8
    QMapLRUCache * _gridCache; // +0x10
    NSRecursiveLock * _lock; // +0x18
    NSMutableDictionary * _viewItemMap; // +0x20
    NSMutableSet * _latestVisibleGridModels; // +0x28
    id <QBrandPromotionImageDownloader> _imageDownloader; // +0x30
    struct _latestVisibleRect; // +0x38
}
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (void)setup;
- (void)updateConfig:(id)arg1;
- (void)updateVisiableRegion:(BOOL)arg1;
- (void)destroy;
- (id)mediator;
- (id)promoteConfig;
- (void)updateVisiableGridModels:(struct)arg1 currenOverScale:(unsigned int)arg2 force:(BOOL)arg3;
- (void)clearMarkersWithGridModel:(id)arg1;
- (void)clearMarkerWithViewItem:(id)arg1;
- (id)createGridModelsInRect:(struct)arg1 scale:(unsigned int)arg2;
- (void)brandPromotionGridModel:(id)arg1 updateItems:(id)arg2;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (id)brandPromotionContext;
- (void)setBrandPromotionContext:(id)arg1;
- (id)gridCache;
- (void)setGridCache:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (id)viewItemMap;
- (void)setViewItemMap:(id)arg1;
- (id)latestVisibleGridModels;
- (void)setLatestVisibleGridModels:(id)arg1;
- (id)imageDownloader;
- (void)setImageDownloader:(id)arg1;
- (struct)latestVisibleRect;
- (void)setLatestVisibleRect:(struct)arg1;
- (void).cxx_destruct;
@end

