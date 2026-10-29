@interface EmoticonTabItem : NSObject
{
    unsigned int downloadStatus; // +0x8
    int type; // +0xc
    NSString * packageId; // +0x10
    NSString * iconUrl; // +0x18
    NSString * panelUrl; // +0x20
    NSString * _accessibilityName; // +0x28
    NSObject * _m_userInfo; // +0x30
}
- (id)init;
- (id)packageId;
- (void)setPackageId:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (unsigned int)downloadStatus;
- (void)setDownloadStatus:(unsigned int)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (id)panelUrl;
- (void)setPanelUrl:(id)arg1;
- (id)accessibilityName;
- (void)setAccessibilityName:(id)arg1;
- (id)m_userInfo;
- (void)setM_userInfo:(id)arg1;
- (void).cxx_destruct;
@end
