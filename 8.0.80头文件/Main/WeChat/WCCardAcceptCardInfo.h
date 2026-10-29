@interface WCCardAcceptCardInfo : MMObject
{
    unsigned int _succCount; // +0x8
    unsigned int _retCode; // +0xc
    NSString * _retMsg; // +0x10
    NSString * _retJson; // +0x18
}
- (unsigned int)succCount;
- (void)setSuccCount:(unsigned int)arg1;
- (unsigned int)retCode;
- (void)setRetCode:(unsigned int)arg1;
- (id)retMsg;
- (void)setRetMsg:(id)arg1;
- (id)retJson;
- (void)setRetJson:(id)arg1;
- (void).cxx_destruct;
@end
