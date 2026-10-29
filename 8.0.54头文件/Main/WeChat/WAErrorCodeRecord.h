@interface WAErrorCodeRecord : NSObject
{
    unsigned long long _errCode; // +0x8
    unsigned long long _timestampMS; // +0x10
}
- (unsigned long long)errCode;
- (void)setErrCode:(unsigned long long)arg1;
- (unsigned long long)timestampMS;
- (void)setTimestampMS:(unsigned long long)arg1;
@end

