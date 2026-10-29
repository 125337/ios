@interface ErrInfo : NSObject
{
    unsigned int _errNumber; // +0x8
    NSString * _errMsg; // +0x10
}
- (id)initWithErrNumber:(unsigned int)arg1 errMsg:(id)arg2;
- (unsigned int)errNumber;
- (void)setErrNumber:(unsigned int)arg1;
- (id)errMsg;
- (void)setErrMsg:(id)arg1;
- (void).cxx_destruct;
@end

