@interface WCFinderLiteAppExtraParams : NSObject
{
    id /* block */ _onDispatch; // +0x8
    id /* block */ _onHalfCloseAction; // +0x10
    NSDictionary * _liteAppStoreDataDict; // +0x18
    id /* block */ _openResultBlock; // +0x20
}
- (id /* block */)onDispatch;
- (void)setOnDispatch:(id /* block */)arg1;
- (id /* block */)onHalfCloseAction;
- (void)setOnHalfCloseAction:(id /* block */)arg1;
- (id)liteAppStoreDataDict;
- (void)setLiteAppStoreDataDict:(id)arg1;
- (id /* block */)openResultBlock;
- (void)setOpenResultBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

