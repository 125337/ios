@interface ZZFLEXAngelViewBatchEditChainModel : NSObject
{
    NSArray * _listData; // +0x8
    long long _editType; // +0x10
}
- (id)initWithType:(long long)arg1 andListData:(id)arg2;
- (id /* block */)all;
- (id /* block */)byViewTag;
- (id /* block */)byDataModel;
- (id /* block */)byViewClassName;
- (id)p_deleteWithSectionModel:(id)arg1 viewModelArray:(id)arg2;
- (void)p_updateViewModelArray:(id)arg1;
- (id)dataModelArrayByViewModelArray:(id)arg1;
- (id)listData;
- (void)setListData:(id)arg1;
- (long long)editType;
- (void)setEditType:(long long)arg1;
- (void).cxx_destruct;
@end

