@interface WCPayDeleteDigitalCertCgiResp : NSObject
{
    unsigned int _m_wxErrorType; // +0x8
    NSString * _m_wxErrorMsg; // +0x10
}
+ (id)GenFromDictionary:(id)arg1 WithErrorType:(unsigned int)arg2 ErrorMsg:(id)arg3;
- (id)init;
- (unsigned int)m_wxErrorType;
- (void)setM_wxErrorType:(unsigned int)arg1;
- (id)m_wxErrorMsg;
- (void)setM_wxErrorMsg:(id)arg1;
- (void).cxx_destruct;
@end

