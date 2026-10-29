@interface ZZFLEXAngelSectionBaseChainModel : NSObject
{
    NSMutableArray * _listData; // +0x8
    ZZFLEXSectionModel * _sectionModel; // +0x10
}
- (id)initWithSectionModel:(id)arg1 listData:(id)arg2;
- (id /* block */)minimumLineSpacing;
- (id /* block */)minimumInteritemSpacing;
- (id /* block */)sectionInsets;
- (id /* block */)backgrounColor;
- (id)listData;
- (void)setListData:(id)arg1;
- (id)sectionModel;
- (void)setSectionModel:(id)arg1;
- (void).cxx_destruct;
@end

