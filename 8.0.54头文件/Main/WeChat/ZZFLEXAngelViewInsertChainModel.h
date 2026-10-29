@interface ZZFLEXAngelViewInsertChainModel : ZZFLEXAngelViewBaseChainModel
{
    ZZFLEXSectionModel * _sectionModel; // +0x30
    long long _insertTag; // +0x38
    long long _status; // +0x40
}
- (id /* block */)toSection;
- (id /* block */)toIndex;
- (id /* block */)beforeCell;
- (id /* block */)afterCell;
- (void)p_tryInsertCell;
- (id)sectionModel;
- (void)setSectionModel:(id)arg1;
- (long long)insertTag;
- (void)setInsertTag:(long long)arg1;
- (long long)status;
- (void)setStatus:(long long)arg1;
- (void).cxx_destruct;
@end

