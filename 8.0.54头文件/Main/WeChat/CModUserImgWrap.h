@interface CModUserImgWrap : NSObject
{
    unsigned int m_uiImgType; // +0x8
    NSData * m_dtImg; // +0x10
    NSString * m_nsHDImgMD5; // +0x18
    NSString * m_nsHeadImgUrl; // +0x20
    NSString * m_nsHeadHDImgUrl; // +0x28
}
- (id)init;
- (id)description;
- (id)m_dtImg;
- (void)setM_dtImg:(id)arg1;
- (id)m_nsHDImgMD5;
- (void)setM_nsHDImgMD5:(id)arg1;
- (unsigned int)m_uiImgType;
- (void)setM_uiImgType:(unsigned int)arg1;
- (id)m_nsHeadImgUrl;
- (void)setM_nsHeadImgUrl:(id)arg1;
- (id)m_nsHeadHDImgUrl;
- (void)setM_nsHeadHDImgUrl:(id)arg1;
- (void).cxx_destruct;
@end

