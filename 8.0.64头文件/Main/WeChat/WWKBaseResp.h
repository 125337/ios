@interface WWKBaseResp : WWKBaseObject
{
    int _errCode; // +0x20
    NSString * _errStr; // +0x28
}
- (id)serializedDict;
- (BOOL)deserializeWithDictionary:(id)arg1;
- (int)errCode;
- (void)setErrCode:(int)arg1;
- (id)errStr;
- (void)setErrStr:(id)arg1;
- (void).cxx_destruct;
@end
