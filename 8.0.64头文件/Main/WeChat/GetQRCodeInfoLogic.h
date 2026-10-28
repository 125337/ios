@interface GetQRCodeInfoLogic : NSObject <PBMessageObserverDelegate>
{
    float _cgiTimeout; // +0x8
    id <GetQRCodeInfoLogicDelegate> _delegate; // +0x10
}
- (void)getQRCodeInfo:(unsigned int)arg1 codeStr:(id)arg2 session:(id)arg3;
- (void)getQRCodeInfo:(unsigned int)arg1 codeStrArray:(id)arg2 sessionArray:(id)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleQRCodeInfoResp:(id)arg1;
- (void)dealloc;
- (float)cgiTimeout;
- (void)setCgiTimeout:(float)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
