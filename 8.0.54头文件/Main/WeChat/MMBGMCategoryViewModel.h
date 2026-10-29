@interface MMBGMCategoryViewModel : NSObject
{
    id <MMBGMCategoryViewModelDelegate> _delegate; // +0x8
    NSArray * _items; // +0x10
}
- (void)fetchData;
- (unsigned long long)dataCount;
- (id)musicCategoryAtIndex:(unsigned long long)arg1;
- (id)genDiffableDataSourceSnapshot;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (void).cxx_destruct;
@end

