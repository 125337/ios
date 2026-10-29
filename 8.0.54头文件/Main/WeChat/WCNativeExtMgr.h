@interface WCNativeExtMgr : MMRootService <MMServiceProtocol>
{
    BOOL _bLoad; // +0x8
    NSArray * _arrPBCgi; // +0x10
    NSArray * _arrCmdID; // +0x18
}
- (id)init;
- (void)resetLoad;
- (const PBCGIHelperWrap *)queryCgiConfigAtIndexInVM:(unsigned int)arg1;
- (const PBCGIHelperWrap *)queryCgiConfigFromVM:(unsigned int)arg1;
- (unsigned int)getPbCgiListLenFromVM;
- (unsigned int)CgiToReqCmdInVM:(unsigned int)arg1;
- (unsigned int)CgiToRespCmdInVM:(unsigned int)arg1;
- (unsigned int)ReqCmdToCgiInVM:(unsigned int)arg1;
- (BOOL)CgiSendByLongConnInVM:(unsigned int)arg1;
- (BOOL)IsValidCommandInVM:(unsigned int)arg1;
- (void)checkAndLoad;
- (void).cxx_destruct;
@end

