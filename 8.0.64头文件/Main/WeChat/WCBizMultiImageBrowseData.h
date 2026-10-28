@interface WCBizMultiImageBrowseData : NSObject
{
    NSArray * m_arrBrowseImgItem; // +0x8
    unsigned int m_uiStartIndex; // +0x10
    UIImage * m_oWaitBackGroundImg; // +0x18
    BOOL m_bCached; // +0x20
}
- (void)dealloc;
- (id)m_arrBrowseImgItem;
- (void)setM_arrBrowseImgItem:(id)arg1;
- (BOOL)m_bCached;
- (void)setM_bCached:(BOOL)arg1;
- (unsigned int)m_uiStartIndex;
- (void)setM_uiStartIndex:(unsigned int)arg1;
- (id)m_oWaitBackGroundImg;
- (void)setM_oWaitBackGroundImg:(id)arg1;
- (void).cxx_destruct;
@end
