@interface MMKGenDigitalCrtReq : NSObject
{
    int _type; // +0x8
    int _idType; // +0xc
    int _certEncryptType; // +0x10
    NSString * _idNo; // +0x18
    NSString * _reqKey; // +0x20
    NSString * _verifyCode; // +0x28
    NSString * _token; // +0x30
    NSString * _creTail; // +0x38
}
+ (id)KGenDigitalCrtReqWithType:(int)arg1 idType:(int)arg2 idNo:(id)arg3 reqKey:(id)arg4 verifyCode:(id)arg5 token:(id)arg6 creTail:(id)arg7 certEncryptType:(int)arg8;
- (id)initWithType:(int)arg1 idType:(int)arg2 idNo:(id)arg3 reqKey:(id)arg4 verifyCode:(id)arg5 token:(id)arg6 creTail:(id)arg7 certEncryptType:(int)arg8;
- (id)description;
- (int)type;
- (int)idType;
- (id)idNo;
- (id)reqKey;
- (id)verifyCode;
- (id)token;
- (id)creTail;
- (int)certEncryptType;
- (void).cxx_destruct;
@end

