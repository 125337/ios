@interface ShareActionSheetCell : MMScrollActionSheetItemView
{
    UIView * m_contentView; // +0x8
    UIView * m_header; // +0x10
    MMWebImageView * m_imageView; // +0x18
    UILabel * m_titleLabel; // +0x20
    UILabel * m_subTitleLabel; // +0x28
    UIView * m_stateView; // +0x30
    WCLanDeviceStateItemProgressView * m_progressView; // +0x38
    UILabel * m_resultLabel; // +0x40
    UIView * m_resultBgView; // +0x48
    long long m_index; // +0x50
    NSString * m_title; // +0x58
    UIImage * m_iconImg; // +0x60
    NSURL * m_iconImgUrl; // +0x68
    id m_userInfo; // +0x70
    ShareOpenSDKStateItem * m_stateItem; // +0x78
}
- (id)init;
- (double)lineHeight;
- (void)setM_title:(id)arg1;
- (void)setM_iconImgUrl:(id)arg1;
- (void)setM_iconImg:(id)arg1;
- (void)setM_stateItem:(id)arg1;
- (long long)m_index;
- (void)setM_index:(long long)arg1;
- (id)m_title;
- (id)m_iconImg;
- (id)m_iconImgUrl;
- (id)m_userInfo;
- (void)setM_userInfo:(id)arg1;
- (id)m_stateItem;
- (void).cxx_destruct;
@end

