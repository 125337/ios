@interface ZZFLEXAngelViewBaseChainModel : NSObject
{
    BOOL _xib; // +0x8
    long long _type; // +0x10
    UIScrollView * _hostView; // +0x18
    NSMutableArray * _listData; // +0x20
    ZZFLEXViewModel * _viewModel; // +0x28
}
- (id)initWithHostView:(id)arg1 listData:(id)arg2 viewModel:(id)arg3 type:(long long)arg4 xib:(BOOL)arg5;
- (id /* block */)toSection;
- (id /* block */)reuseIdentifier;
- (id /* block */)withDataModel;
- (id /* block */)delegate;
- (id /* block */)eventAction;
- (id /* block */)viewTag;
- (id /* block */)selectedAction;
- (id /* block */)configAction;
- (id /* block */)viewSize;
- (id /* block */)viewHeight;
- (void)registerCellIfNeed;
- (long long)type;
- (id)hostView;
- (BOOL)xib;
- (id)listData;
- (void)setListData:(id)arg1;
- (id)viewModel;
- (void).cxx_destruct;
@end
