@interface ChatBackgroundView : MMUIControl
{
    ChatBackgroundItem * m_cbItem; // +0x8
    NSIndexPath * m_indexPath; // +0x10
    id <ChatBackgroundViewDelegate> m_delegate; // +0x18
    long long m_index; // +0x20
    UIImageView * m_thumbImageView; // +0x28
    BOOL _bShowSelect; // +0x30
}
- (void)initViewWithData;
- (void)onClick;
- (long long)getStatus;
- (void)setStatus:(long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1 andData:(id)arg2;
- (void)startDownloadingAnimation;
- (id)m_cbItem;
- (void)setM_cbItem:(id)arg1;
- (id)m_indexPath;
- (void)setM_indexPath:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (long long)m_index;
- (void)setM_index:(long long)arg1;
- (BOOL)bShowSelect;
- (void)setBShowSelect:(BOOL)arg1;
- (void).cxx_destruct;
@end
