@interface FIFOFileQueue : FileQueue
{
    NSMutableArray * m_arrItems; // +0x20
}
- (void)dealloc;
- (id)getArchiveTarget;
- (void)setUnArchiveResult:(id)arg1;
- (BOOL)push:(id)arg1;
- (BOOL)pop;
- (BOOL)modifyTop:(id)arg1;
- (id)getTop;
- (id)getAll;
- (BOOL)clear;
- (id)description;
- (BOOL)removeItemAtIndex:(unsigned long long)arg1;
- (BOOL)removeItems:(id)arg1;
- (id)getItemAtIndex:(unsigned long long)arg1;
- (BOOL)syncData;
- (void).cxx_destruct;
@end

