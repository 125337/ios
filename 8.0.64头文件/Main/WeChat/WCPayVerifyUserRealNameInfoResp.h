@interface WCPayVerifyUserRealNameInfoResp : NSObject
{
    BOOL _is_support_face; // +0x8
    BOOL _is_need_cert; // +0x9
    int _retCode; // +0xc
    unsigned int _scene; // +0x10
    NSString * _retMsg; // +0x18
    NSString * _package; // +0x20
    NSString * _package_sign; // +0x28
}
- (int)retCode;
- (void)setRetCode:(int)arg1;
- (id)retMsg;
- (void)setRetMsg:(id)arg1;
- (BOOL)is_support_face;
- (void)setIs_support_face:(BOOL)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)package;
- (void)setPackage:(id)arg1;
- (id)package_sign;
- (void)setPackage_sign:(id)arg1;
- (BOOL)is_need_cert;
- (void)setIs_need_cert:(BOOL)arg1;
- (void).cxx_destruct;
@end
