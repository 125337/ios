@interface CameraScanGoodsRemoteDetector : MMObject <IScanGoodsServiceExt>
{
    id <CameraScanGoodsRemoteDetectorDelegate> _delegate; // +0x8
    unsigned long long _sessionId; // +0x10
    LocationRetriever * _locationRetriever; // +0x18
}
- (id)initWithDetectorWorkQueue:(id)arg1 sessionId:(unsigned long long)arg2;
- (BOOL)scanOnePicture:(id)arg1;
- (void)onSendImageInfoSuccess:(id)arg1;
- (void)onSendImageInfoFail:(id)arg1 errorCode:(long long)arg2 errorMsg:(id)arg3 isNetworkError:(BOOL)arg4;
- (void)handleSendImageInfoSuccessForAlbum:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)sessionId;
- (void)setSessionId:(unsigned long long)arg1;
- (id)locationRetriever;
- (void)setLocationRetriever:(id)arg1;
- (void).cxx_destruct;
@end
