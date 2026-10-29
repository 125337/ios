@interface MMFavCellComponentData : MMComponentData
{
    BOOL _hasThumbAtRight; // +0x8
    BOOL _onlyImageOrVideo; // +0x9
    BOOL _isFoldBtnStyle; // +0xa
    BOOL _isFolding; // +0xb
    BOOL _isXiaoweiBannerStyle; // +0xc
    unsigned int _starType; // +0x10
    int _foldingSize; // +0x14
    MMFavBaselineComponentData * m_baselineComData; // +0x18
    MMFavImageComponentData * m_imageComData; // +0x20
    MMFavTextComponentData * m_textComData; // +0x28
    NSArray * m_imageComDataArr; // +0x30
    long long _favType; // +0x38
    unsigned long long _cellStyle; // +0x40
    double _mediaSrcWidth; // +0x48
    double _mediaSrcHeight; // +0x50
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
- (unsigned int)starType;
- (void)setStarType:(unsigned int)arg1;
- (BOOL)hasThumbAtRight;
- (void)setHasThumbAtRight:(BOOL)arg1;
- (BOOL)onlyImageOrVideo;
- (void)setOnlyImageOrVideo:(BOOL)arg1;
- (unsigned long long)cellStyle;
- (void)setCellStyle:(unsigned long long)arg1;
- (BOOL)isFoldBtnStyle;
- (void)setIsFoldBtnStyle:(BOOL)arg1;
- (BOOL)isFolding;
- (void)setIsFolding:(BOOL)arg1;
- (int)foldingSize;
- (void)setFoldingSize:(int)arg1;
- (double)mediaSrcWidth;
- (void)setMediaSrcWidth:(double)arg1;
- (double)mediaSrcHeight;
- (void)setMediaSrcHeight:(double)arg1;
- (BOOL)isXiaoweiBannerStyle;
- (void)setIsXiaoweiBannerStyle:(BOOL)arg1;
- (void).cxx_destruct;
@end
