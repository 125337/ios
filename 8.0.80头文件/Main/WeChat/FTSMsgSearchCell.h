@interface FTSMsgSearchCell : FTSMsgCell
{
    BOOL _m_isHadImageThumbView; // +0x80
    MsgImageSquareThumbView * m_thumbView; // +0x88
    NSString * _m_detailText; // +0x90
    NSIndexPath * _indexPath; // +0x98
}
+ (unsigned int)calculateHeight:(unsigned int)arg1;
- (void)initCellStyle;
- (void)updateStatus:(BOOL)arg1;
- (id)getDetailTextWithMsgWrap:(id)arg1;
- (void)layoutSubviews;
- (BOOL)checkIsImageCell;
- (id)m_thumbView;
- (void)setM_thumbView:(id)arg1;
- (id)m_detailText;
- (void)setM_detailText:(id)arg1;
- (BOOL)m_isHadImageThumbView;
- (void)setM_isHadImageThumbView:(BOOL)arg1;
- (id)indexPath;
- (void)setIndexPath:(id)arg1;
- (void).cxx_destruct;
@end
