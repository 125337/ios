@interface PreEnterInitStep : PreEnterBaseStep <initLogicControllerDelegate>
{
    InitLogicController * m_initLogicController; // +0x18
    BOOL m_bInitOK; // +0x20
    BOOL m_recoverViewShown; // +0x21
}
- (id)initFromReg:(BOOL)arg1;
- (void)startStep;
- (BOOL)isIniting;
- (BOOL)isInitOK;
- (void)startLoading;
- (void)stopLoading;
- (void)percentIniting:(id)arg1;
- (void)handleInitOk;
- (void)stopIniting:(unsigned int)arg1;
- (BOOL)showDBRecoverViewIfNeeded;
- (void).cxx_destruct;
@end

