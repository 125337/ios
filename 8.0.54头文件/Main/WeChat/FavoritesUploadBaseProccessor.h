@interface FavoritesUploadBaseProccessor : MMObject
{
    NSMutableArray * m_proccessingQueue; // +0x8
    BOOL m_bProccessing; // +0x10
    FavoritesItem * m_priorItem; // +0x18
    FavoritesItem * m_proccessingItem; // +0x20
    FavoritesUploadBaseProccessor * nextProccessor; // +0x28
    id <FavoritesUploadProccessorDelegate> _delegate; // +0x30
}
- (id)initWithDelegate:(id)arg1;
- (void)triggerProccess;
- (void)tryProccess;
- (id)getAllItem;
- (void)dealloc;
- (void)addItem:(id)arg1 isPrior:(BOOL)arg2;
- (void)removeItem:(id)arg1;
- (void)updateTagForItem:(id)arg1;
- (BOOL)isProccessingWithLocalId:(unsigned int)arg1;
- (BOOL)checkFavItemOccupiedByFavId:(unsigned int)arg1;
- (void)removeAllItems;
- (BOOL)containsFavItem:(id)arg1;
- (id)nextProccessor;
- (void)setNextProccessor:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

