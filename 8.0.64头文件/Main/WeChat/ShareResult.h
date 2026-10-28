@interface ShareResult : NSObject
{
    int _errCode; // +0x8
    NSString * _errMsg; // +0x10
}
- (int)errCode;
- (void)setErrCode:(int)arg1;
- (id)errMsg;
- (void)setErrMsg:(id)arg1;
- (void).cxx_destruct;
@end
