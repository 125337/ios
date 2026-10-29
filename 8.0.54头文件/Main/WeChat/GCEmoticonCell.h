@interface GCEmoticonCell : GCChatBaseCell <IStoreEmotionSingleDownloadMgrExt>
{
    UILabel * m_downloadFailRetryLabel; // +0x8
    UIImageView * m_downloadFailedImageView; // +0x10
    MMUIActivityIndicatorView * m_imageLoadingView; // +0x18
    MMEmoticonView * _emoticonView; // +0x20
}
+ (void)onCalculatLayoutInfo:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)updateEmoticonView;
- (void)updateStatus;
- (void)showLoadingView;
- (void)showDownloadFailView;
- (id)emoticonCellModel;
- (void)configureWithCellModel:(id)arg1;
- (id)emoticonView;
- (void)setEmoticonView:(id)arg1;
- (void).cxx_destruct;
@end

