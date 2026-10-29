@interface WePkgCheckUpdateMgr : MMObject <PBMessageObserverDelegate>
{
    NSMutableArray * _arrCheckingPkgIds; // +0x8
}
- (id)init;
- (BOOL)checkUpdateForPkgId:(id)arg1 Scene:(int)arg2;
- (BOOL)checkUpdateForPkgIds:(id)arg1 Scene:(int)arg2;
- (BOOL)internalCheckUpdateForPkgIds:(id)arg1 Scene:(int)arg2;
- (BOOL)sendReq:(id)arg1 Scene:(int)arg2;
- (void)handleRespCGIWarp:(id)arg1;
- (BOOL)isPkgItemValid:(id)arg1;
- (void)handleRspForPkgItem:(id)arg1;
- (BOOL)isSameAsLastOne:(id)arg1 RegularRespMd5:(id)arg2 PkgId:(id)arg3;
- (void)handleSuccessResp:(id)arg1 PkgItem:(id)arg2 regConfig:(id)arg3 ResonpseMd5:(id)arg4;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)removeFromCheckingArrIn:(id)arg1;
- (void)removeFromCheckingArr:(id)arg1;
- (void)updateGlobalPkgId2Version:(id)arg1 PkgItem:(id)arg2;
- (void)copyPkgResponseToTmpConfig:(id)arg1 OldVersion:(id)arg2 ResonpseMd5:(id)arg3;
- (void)copyAtomicPart:(id)arg1 OldVersion:(id)arg2 ResonpseMd5:(id)arg3;
- (void)copyAtomicSingleFileListToUpdateConfig:(id)arg1 UpdateConfig:(id)arg2;
- (void)copyNonAtomicPart:(id)arg1 OldVersion:(id)arg2 ResonpseMd5:(id)arg3;
- (void)callFailExtForPkgIds:(id)arg1 errCode:(int)arg2;
- (void)callSuccessExtForPkgId:(id)arg1;
- (void)callFailExtForPkgId:(id)arg1 errCode:(int)arg2;
- (void).cxx_destruct;
@end

