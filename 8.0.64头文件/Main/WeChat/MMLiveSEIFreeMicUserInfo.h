@interface MMLiveSEIFreeMicUserInfo : NSObject
{
    unsigned int _us; // +0x8
    NSString * _uId; // +0x10
}
- (void)updateWithMicUserInfo:(id)arg1;
- (BOOL)isTalking;
- (id)uId;
- (void)setUId:(id)arg1;
- (unsigned int)us;
- (void)setUs:(unsigned int)arg1;
- (void).cxx_destruct;
@end
