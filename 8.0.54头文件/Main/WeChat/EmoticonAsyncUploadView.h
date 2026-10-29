@interface EmoticonAsyncUploadView : EmoticonViewWithPreview <EmoticonBackupOperateMgrExt>
{
    unsigned long long _m_uploadStatus; // +0x10
    UIView * _m_maskView; // +0x18
    UIImageView * _m_uploadFailedView; // +0x20
    MMUIActivityIndicatorView * _m_activityIndicator; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 EmoticonWrap:(id)arg2;
- (void)initView;
- (void)setUploadStatus:(unsigned long long)arg1;
- (void)changeWrap:(id)arg1 needShowDesc:(BOOL)arg2;
- (void)showPreview;
- (void)hidePreview;
- (void)showFocusView;
- (void)hideFocusView;
- (void)onAddBackupEmoticonPendingUpload:(id)arg1;
- (void)onAddBackupEmoticonFailed:(id)arg1 reason:(unsigned long long)arg2 remoteErrMsg:(id)arg3;
- (unsigned long long)m_uploadStatus;
- (void)setM_uploadStatus:(unsigned long long)arg1;
- (id)m_maskView;
- (void)setM_maskView:(id)arg1;
- (id)m_uploadFailedView;
- (void)setM_uploadFailedView:(id)arg1;
- (id)m_activityIndicator;
- (void)setM_activityIndicator:(id)arg1;
- (void).cxx_destruct;
@end

