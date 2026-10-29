@interface WCPayResetPwdByFaceResp : NSObject
{
    int _retCode; // +0x8
    NSString * _retMsg; // +0x10
}
- (int)retCode;
- (void)setRetCode:(int)arg1;
- (id)retMsg;
- (void)setRetMsg:(id)arg1;
- (void).cxx_destruct;
@end

