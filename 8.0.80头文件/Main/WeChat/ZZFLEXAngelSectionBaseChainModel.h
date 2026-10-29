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
- (id /* block */)fslColumnCount;
- (id /* block */)fslCellSpace;
- (id /* block */)fslDecorationHeight;
- (id /* block */)fslHeaderEdgeInset;
- (id /* block */)fslFooterEdgeInset;
- (id /* block */)fslDecorationEdgeInset;
- (id /* block */)fslDecorationLayoutAttributes;
- (id)listData;
- (void)setListData:(id)arg1;
- (id)sectionModel;
- (void)setSectionModel:(id)arg1;
- (void).cxx_destruct;
@end
