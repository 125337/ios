@interface ReaderTopNewWrap : NSObject
{
    NSString * m_nsCover; // +0x8
    NSString * m_nsSquareCover; // +0x10
    NSString * m_nsDigest; // +0x18
    unsigned int m_uiCoverWidth; // +0x20
    unsigned int m_uiCoverHeight; // +0x24
    unsigned int _m_coversDisplayMode; // +0x28
    NSString * _m_nsCover235_1; // +0x30
    NSString * _m_nsCover3_4; // +0x38
    NSArray * _m_coverUrls; // +0x40
    NSArray * _m_picUrls; // +0x48
}
- (id)m_nsCover;
- (void)setM_nsCover:(id)arg1;
- (id)m_nsSquareCover;
- (void)setM_nsSquareCover:(id)arg1;
- (id)m_nsDigest;
- (void)setM_nsDigest:(id)arg1;
- (unsigned int)m_uiCoverWidth;
- (void)setM_uiCoverWidth:(unsigned int)arg1;
- (unsigned int)m_uiCoverHeight;
- (void)setM_uiCoverHeight:(unsigned int)arg1;
- (id)m_nsCover235_1;
- (void)setM_nsCover235_1:(id)arg1;
- (id)m_nsCover3_4;
- (void)setM_nsCover3_4:(id)arg1;
- (unsigned int)m_coversDisplayMode;
- (void)setM_coversDisplayMode:(unsigned int)arg1;
- (id)m_coverUrls;
- (void)setM_coverUrls:(id)arg1;
- (id)m_picUrls;
- (void)setM_picUrls:(id)arg1;
- (void).cxx_destruct;
@end
