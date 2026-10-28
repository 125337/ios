@interface CdnTimelineMediaInfo : NSObject
{
    NSString * m_nsClientMsgID; // +0x8
    NSString * m_nsFilePath; // +0x10
    BOOL m_bSinglePic; // +0x18
    BOOL m_bUseWebp; // +0x19
    BOOL m_bUseVCodec; // +0x1a
    BOOL m_bUseWxpc; // +0x1b
    BOOL _m_bUseWxam; // +0x1c
    BOOL _m_bMultiSpec; // +0x1d
    BOOL _m_isCommentImage; // +0x1e
    int m_cdnMediaType; // +0x20
    NSDictionary * _customRequestHeaders; // +0x28
}
- (id)m_nsClientMsgID;
- (void)setM_nsClientMsgID:(id)arg1;
- (id)m_nsFilePath;
- (void)setM_nsFilePath:(id)arg1;
- (BOOL)m_bSinglePic;
- (void)setM_bSinglePic:(BOOL)arg1;
- (BOOL)m_bUseWebp;
- (void)setM_bUseWebp:(BOOL)arg1;
- (BOOL)m_bUseVCodec;
- (void)setM_bUseVCodec:(BOOL)arg1;
- (BOOL)m_bUseWxpc;
- (void)setM_bUseWxpc:(BOOL)arg1;
- (int)m_cdnMediaType;
- (void)setM_cdnMediaType:(int)arg1;
- (BOOL)m_bUseWxam;
- (void)setM_bUseWxam:(BOOL)arg1;
- (BOOL)m_bMultiSpec;
- (void)setM_bMultiSpec:(BOOL)arg1;
- (BOOL)m_isCommentImage;
- (void)setM_isCommentImage:(BOOL)arg1;
- (id)customRequestHeaders;
- (void)setCustomRequestHeaders:(id)arg1;
- (void).cxx_destruct;
@end
