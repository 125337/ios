@interface ZZFLEXAngelViewBatchInsertChainModel : ZZFLEXAngelViewBaseBatchChainModel
{
    long long _status; // +0x80
    long long _insertTag; // +0x88
}
- (id /* block */)withDataModelArray;
- (id /* block */)toSection;
- (id /* block */)toIndex;
- (id /* block */)beforeCell;
- (id /* block */)afterCell;
- (void)p_tryInsertCells;
- (long long)status;
- (void)setStatus:(long long)arg1;
- (long long)insertTag;
- (void)setInsertTag:(long long)arg1;
@end
