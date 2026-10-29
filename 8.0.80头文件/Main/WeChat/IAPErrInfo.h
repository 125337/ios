@interface IAPErrInfo : NSObject
{
    unsigned int _errCode; // +0x8
    long long _IAPErrCode; // +0x10
    NSString * _IAPErrDesc; // +0x18
}
- (unsigned int)errCode;
- (void)setErrCode:(unsigned int)arg1;
- (long long)IAPErrCode;
- (void)setIAPErrCode:(long long)arg1;
- (id)IAPErrDesc;
- (void)setIAPErrDesc:(id)arg1;
- (void).cxx_destruct;
@end
