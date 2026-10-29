@interface RadarSearchVerifyResult : NSObject
{
    NSString * _username; // +0x8
    NSString * _content; // +0x10
    NSString * _encryUsrName; // +0x18
    int _type; // +0x20
}
- (void)dealloc;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (id)encryUsrName;
- (void)setEncryUsrName:(id)arg1;
- (void).cxx_destruct;
@end

