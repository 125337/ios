@interface MMFavCellComponentData : MMComponentData
{
    BOOL _onlyImageOrVideo; // +0x8
    MMFavBaselineComponentData * m_baselineComData; // +0x10
    MMFavImageComponentData * m_imageComData; // +0x18
    MMFavTextComponentData * m_textComData; // +0x20
    NSArray * m_imageComDataArr; // +0x28
    long long _favType; // +0x30
    unsigned long long _cellStyle; // +0x38
}
- (id)init;
- (id)m_baselineComData;
- (void)setM_baselineComData:(id)arg1;
- (id)m_imageComData;
- (void)setM_imageComData:(id)arg1;
- (id)m_textComData;
- (void)setM_textComData:(id)arg1;
- (id)m_imageComDataArr;
- (void)setM_imageComDataArr:(id)arg1;
- (long long)favType;
- (void)setFavType:(long long)arg1;
- (BOOL)onlyImageOrVideo;
- (void)setOnlyImageOrVideo:(BOOL)arg1;
- (unsigned long long)cellStyle;
- (void)setCellStyle:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
