@interface WCAdDelReportInfo : NSObject
{
    NSString * _uxinfo; // +0x8
    NSString * _snsId; // +0x10
    long long _type; // +0x18
    long long _errorCode; // +0x20
}
- (id)toReportString;
- (id)uxinfo;
- (void)setUxinfo:(id)arg1;
- (id)snsId;
- (void)setSnsId:(id)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (long long)errorCode;
- (void)setErrorCode:(long long)arg1;
- (void).cxx_destruct;
@end
