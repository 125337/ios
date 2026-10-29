@interface SelectPendingProductResult : NSObject
{
    SelectPendingProductActionBox * _action; // +0x8
    NSArray * _selectedProductsData; // +0x10
}
+ (id)makeWithAction:(id)arg1 selectedProductsData:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)action;
- (void)setAction:(id)arg1;
- (id)selectedProductsData;
- (void)setSelectedProductsData:(id)arg1;
- (void).cxx_destruct;
@end
