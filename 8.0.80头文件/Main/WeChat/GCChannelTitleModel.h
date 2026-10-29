@interface GCChannelTitleModel : GCBaseCellModel
{
    NSString * _titleName; // +0x8
    unsigned long long _nubmerCnt; // +0x10
}
- (Class)bindCellClass;
- (CGSize)cellSizeForCollectionView:(id)arg1;
- (id)numberTitle;
- (id)titleName;
- (void)setTitleName:(id)arg1;
- (unsigned long long)nubmerCnt;
- (void)setNubmerCnt:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
