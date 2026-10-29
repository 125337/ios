@interface WCNativeExtMgr : MMRootService <MMServiceProtocol>
{
    BOOL _bLoad; // +0x8
    NSArray * _arrPBCgi; // +0x10
    NSArray * _arrCmdID; // +0x18
}
- (void)checkAndLoad;
- (id)init;
- (void)resetLoad;
- (const PBCGIHelperWrap *)queryCgiConfigAtIndexExt:(unsigned int)arg1;
- (const PBCGIHelperWrap *)queryCgiConfigExt:(unsigned int)arg1;
- (unsigned int)getPbCgiListLenFromExt;
- (unsigned int)CgiToReqCmdExt:(unsigned int)arg1;
- (unsigned int)CgiToRespCmdExt:(unsigned int)arg1;
- (unsigned int)ReqCmdToCgiExt:(unsigned int)arg1;
- (BOOL)CgiSendByLongConnExt:(unsigned int)arg1;
- (BOOL)IsValidCommandExt:(unsigned int)arg1;
- (void).cxx_destruct;
@end
