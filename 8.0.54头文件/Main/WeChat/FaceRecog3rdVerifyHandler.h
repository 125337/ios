@interface FaceRecog3rdVerifyHandler : FaceRecogInternelHandler <PBMessageObserverDelegate, FaceRecogBaseHandlerDelegate>
{
    FaceRecogResultView * _prepareView; // +0x8
    unsigned int _sourceType; // +0x10
}
- (void)dealloc;
- (void)startVerifyFor3rdParty:(id)arg1 verifyInfo:(id)arg2 needVideo:(BOOL)arg3 feedbackUrl:(id)arg4 businessTip:(id)arg5 businessTipColor:(id)arg6;
- (void)didUploadFaceData:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handle3rdVerifyResult:(id)arg1;
- (unsigned int)sourceType;
- (void)setSourceType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

