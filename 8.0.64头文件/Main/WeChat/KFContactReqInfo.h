@interface KFContactReqInfo : NSObject
{
    unsigned int _kfType; // +0x8
    NSString * _kfOpenId; // +0x10
}
- (id)kfOpenId;
- (void)setKfOpenId:(id)arg1;
- (unsigned int)kfType;
- (void)setKfType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
