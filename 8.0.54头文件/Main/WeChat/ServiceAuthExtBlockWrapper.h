@interface ServiceAuthExtBlockWrapper : NSObject
{
    id /* block */ _onOpenServiceBlock; // +0x8
    id /* block */ _onCloseServiceBlock; // +0x10
    id /* block */ _onCancelServiceAuthBlock; // +0x18
}
- (id /* block */)onOpenServiceBlock;
- (void)setOnOpenServiceBlock:(id /* block */)arg1;
- (id /* block */)onCloseServiceBlock;
- (void)setOnCloseServiceBlock:(id /* block */)arg1;
- (id /* block */)onCancelServiceAuthBlock;
- (void)setOnCancelServiceAuthBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

