@interface SendTdiAuthResp : SendAuthResp
{
    NSString * _tdiExtInfo; // +0x38
    NSData * _tdiAuthBuffer; // +0x40
    NSData * _tdiAuthParams; // +0x48
}
- (id)tdiExtInfo;
- (void)setTdiExtInfo:(id)arg1;
- (id)tdiAuthBuffer;
- (void)setTdiAuthBuffer:(id)arg1;
- (id)tdiAuthParams;
- (void)setTdiAuthParams:(id)arg1;
- (void).cxx_destruct;
@end

