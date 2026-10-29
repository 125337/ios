@interface WCBizImageBrowseItem : NSObject
{
    NSString * m_nsImgUrl; // +0x8
    UIImage * m_nsThumbImage; // +0x10
    NSData * m_ndImgData; // +0x18
}
- (void)dealloc;
- (id)m_ndImgData;
- (void)setM_ndImgData:(id)arg1;
- (id)m_nsImgUrl;
- (void)setM_nsImgUrl:(id)arg1;
- (id)m_nsThumbImage;
- (void)setM_nsThumbImage:(id)arg1;
- (void).cxx_destruct;
@end

