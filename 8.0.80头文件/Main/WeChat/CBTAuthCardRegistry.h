@interface CBTAuthCardRegistry : NSObject
{
    NSMutableDictionary * _registrations; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (void)registerAllCards;
- (void)registerStyle:(id)arg1 viewModelClass:(Class)arg2 cellViewClass:(Class)arg3 cellReuseId:(id)arg4 factory:(id /* block */)arg5;
- (BOOL)isAuthCardName:(id)arg1;
- (void)setupCellsForTableView:(id)arg1;
- (id)createViewModelForCardName:(id)arg1 cardData:(id)arg2 cardWrap:(id)arg3 delegate:(id)arg4;
- (void)enumerateCellRegistrationsUsingBlock:(id /* block */)arg1;
- (id)registrations;
- (void)setRegistrations:(id)arg1;
- (void).cxx_destruct;
@end
