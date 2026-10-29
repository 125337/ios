@interface CBTAuthCardRegistration : NSObject
{
    NSString * _style; // +0x8
    Class _viewModelClass; // +0x10
    Class _cellViewClass; // +0x18
    NSString * _cellReuseId; // +0x20
    id /* block */ _factory; // +0x28
}
- (id)style;
- (void)setStyle:(id)arg1;
- (Class)viewModelClass;
- (void)setViewModelClass:(Class)arg1;
- (Class)cellViewClass;
- (void)setCellViewClass:(Class)arg1;
- (id)cellReuseId;
- (void)setCellReuseId:(id)arg1;
- (id /* block */)factory;
- (void)setFactory:(id /* block */)arg1;
- (void).cxx_destruct;
@end
