@interface ZZFLEXAngelViewEditChainModel : NSObject
{
    long long _editType; // +0x8
    NSArray * _listData; // +0x10
}
- (id)initWithType:(long long)arg1 andListData:(id)arg2;
- (id /* block */)byViewTag;
- (id /* block */)byDataModel;
- (id /* block */)byViewClassName;
- (id /* block */)atIndexPath;
- (id)p_executeWithSectionModel:(id)arg1 viewModel:(id)arg2;
- (long long)editType;
- (void)setEditType:(long long)arg1;
- (id)listData;
- (void)setListData:(id)arg1;
- (void).cxx_destruct;
@end

