@interface ZZFLEXAngelViewBaseBatchChainModel : NSObject
{
    BOOL _xib; // +0x8
    id <ZZFLEXViewModelDelegate> _vmDelegate; // +0x10
    UIScrollView * _hostView; // +0x18
    Class _viewClass; // +0x20
    NSMutableArray * _listData; // +0x28
    NSMutableArray * _viewModelArray; // +0x30
    ZZFLEXSectionModel * _sectionModel; // +0x38
    id _itemsDelegate; // +0x40
    NSString * _itemReuseIdentifier; // +0x48
    id /* block */ _itemsEventAction; // +0x50
    id /* block */ _itemsSelectedAction; // +0x58
    id /* block */ _itemsConfigAction; // +0x60
    long long _tag; // +0x68
    CGSize _itemViewSize; // +0x70
}
- (id)initWithHostView:(id)arg1 viewClass:(Class)arg2 vmDelegate:(id)arg3 listData:(id)arg4 xib:(BOOL)arg5;
- (id /* block */)toSection;
- (id /* block */)withDataModelArray;
- (id /* block */)reuseIdentifier;
- (id /* block */)delegate;
- (id /* block */)eventAction;
- (id /* block */)selectedAction;
- (id /* block */)configAction;
- (id /* block */)viewTag;
- (id /* block */)viewSize;
- (id /* block */)viewHeight;
- (void)registerCellIfNeed;
- (void)setItemReuseIdentifier:(id)arg1;
- (void)setItemsDelegate:(id)arg1;
- (void)setItemsEventAction:(id /* block */)arg1;
- (void)setItemsSelectedAction:(id /* block */)arg1;
- (void)setItemConfigAction:(id /* block */)arg1;
- (void)setTag:(long long)arg1;
- (void)setItemViewSize:(CGSize)arg1;
- (id)vmDelegate;
- (id)hostView;
- (BOOL)xib;
- (Class)viewClass;
- (void)setViewClass:(Class)arg1;
- (id)listData;
- (void)setListData:(id)arg1;
- (id)viewModelArray;
- (void)setViewModelArray:(id)arg1;
- (id)sectionModel;
- (void)setSectionModel:(id)arg1;
- (id)itemsDelegate;
- (id)itemReuseIdentifier;
- (id /* block */)itemsEventAction;
- (id /* block */)itemsSelectedAction;
- (id /* block */)itemsConfigAction;
- (void)setItemsConfigAction:(id /* block */)arg1;
- (long long)tag;
- (CGSize)itemViewSize;
- (void).cxx_destruct;
@end
