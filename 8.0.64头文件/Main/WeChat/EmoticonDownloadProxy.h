@interface EmoticonDownloadProxy : NSObject
{
    BOOL _needNotifyPartLen; // +0x8
    id <EmoticonDownloadProxyDelegate> _delegate; // +0x10
    NSObject * _m_userInfo; // +0x18
    NSString * _m_filePath; // +0x20
}
- (id)initWithMd5:(id)arg1;
- (void)startRequest;
- (BOOL)isActive;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)m_userInfo;
- (void)setM_userInfo:(id)arg1;
- (id)m_filePath;
- (void)setM_filePath:(id)arg1;
- (BOOL)needNotifyPartLen;
- (void)setNeedNotifyPartLen:(BOOL)arg1;
- (void).cxx_destruct;
@end
