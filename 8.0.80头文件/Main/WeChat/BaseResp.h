@interface BaseResp : NSObject
{
    int errCode; // +0x8
    int type; // +0xc
    NSString * errStr; // +0x10
}
- (id)init;
- (int)errCode;
- (void)setErrCode:(int)arg1;
- (id)errStr;
- (void)setErrStr:(id)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (void).cxx_destruct;
@end
