@interface WAMPLinkTransferer : MMUserService <MMServiceProtocol>
{
    WAThreadSafeMutableDictionary * _transferCaches; // +0x8
}
+ (BOOL)isMPLinkStringValid:(id)arg1;
+ (void)transferNodeFromMPLinkString:(id)arg1 completion:(id /* block */)arg2;
+ (void)transferNodeFromMPLinkString:(id)arg1 businessType:(unsigned long long)arg2 completion:(id /* block */)arg3;
+ (BOOL)isVCNeedCheckJumpOut:(id)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)saveCachesWithMPShortLinkString:(id)arg1 transferredNode:(id)arg2;
- (id)getNodeFromCache:(id)arg1;
- (id)transferCaches;
- (void)setTransferCaches:(id)arg1;
- (void).cxx_destruct;
@end
