@interface WloginUserInfo : NSObject <NSCoding>
{
    unsigned int dwUserUin; // +0x8
    NSString * sUserMainAccount; // +0x10
    unsigned short wFaceId; // +0x18
    unsigned char cAge; // +0x1a
    unsigned char cGender; // +0x1b
    NSString * sNickName; // +0x20
}
- (id)description;
- (id)userinfo;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)dwUserUin;
- (void)setDwUserUin:(unsigned int)arg1;
- (id)sUserMainAccount;
- (void)setSUserMainAccount:(id)arg1;
- (unsigned short)wFaceId;
- (void)setWFaceId:(unsigned short)arg1;
- (unsigned char)cAge;
- (void)setCAge:(unsigned char)arg1;
- (unsigned char)cGender;
- (void)setCGender:(unsigned char)arg1;
- (id)sNickName;
- (void)setSNickName:(id)arg1;
@end
