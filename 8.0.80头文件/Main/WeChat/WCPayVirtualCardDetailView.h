@interface WCPayVirtualCardDetailView : MMUIButton
{
    WCPayVirtualNoBindCard * m_info; // +0x8
    MMWebImageView * m_logoView; // +0x10
    MMWebImageView * m_waterMaskView; // +0x18
    UILabel * m_bankNameLabel; // +0x20
    UILabel * m_bankTypeLabel; // +0x28
    UILabel * m_entranceLabel; // +0x30
}
- (id)initWithVirtualCardInfo:(id)arg1;
- (id)getInfo;
- (void)initView;
- (void).cxx_destruct;
@end
