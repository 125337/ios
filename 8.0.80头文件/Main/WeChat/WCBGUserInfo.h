@interface WCBGUserInfo : NSObject
{
    int _m_iWCFlag; // +0x8
    unsigned int _bgImgSize; // +0xc
    NSString * _username; // +0x10
    NSString * _m_nsWCBGImgObjectID; // +0x18
    NSString * _m_pcWCBGImgID; // +0x20
    NSString * _bgImgAesKey; // +0x28
    NSString * _bgImgAuthKey; // +0x30
    NSString * _bgImgMd5; // +0x38
    NSString * _signature; // +0x40
    NSString * _bgFileId; // +0x48
}
- (id)init;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)m_nsWCBGImgObjectID;
- (void)setM_nsWCBGImgObjectID:(id)arg1;
- (int)m_iWCFlag;
- (void)setM_iWCFlag:(int)arg1;
- (id)m_pcWCBGImgID;
- (void)setM_pcWCBGImgID:(id)arg1;
- (id)bgImgAesKey;
- (void)setBgImgAesKey:(id)arg1;
- (id)bgImgAuthKey;
- (void)setBgImgAuthKey:(id)arg1;
- (unsigned int)bgImgSize;
- (void)setBgImgSize:(unsigned int)arg1;
- (id)bgImgMd5;
- (void)setBgImgMd5:(id)arg1;
- (id)signature;
- (void)setSignature:(id)arg1;
- (id)bgFileId;
- (void)setBgFileId:(id)arg1;
- (void).cxx_destruct;
@end
