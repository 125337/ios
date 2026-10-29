@interface WCPuzzleImageView : MMUIView <WCFacadeExt>
{
    WCDataItem * m_dataItem; // +0x8
    NSArray * m_arrMediaData; // +0x10
    NSMutableArray * m_arrView; // +0x18
    int m_visableCount; // +0x20
    vector<bool, std::allocator<bool>> m_imageReady; // +0x28
    UIImageView * m_lockStausView; // +0x40
    UIImageView * m_sharedStausView; // +0x48
    UIImageView * m_starredStatusView; // +0x50
    UIImageView * m_livePhotoStatusView; // +0x58
    UIImageView * m_failedStatusView; // +0x60
    UIImageView * m_shadowImageView; // +0x68
    UILabel * m_nickLabel; // +0x70
    id <WCPuzzleImageViewDelegate> m_delegate; // +0x78
    long long _layoutStyle; // +0x80
}
+ (id)getImageForMedia:(id)arg1;
- (id)initWithMediaData:(id)arg1 layoutStyle:(long long)arg2;
- (void)setupShadowImageView;
- (id)thumbnailViewForMediaItem:(id)arg1;
- (void)updateShadowImageViewHiddenState;
- (void)dealloc;
- (void)layoutSubviews;
- (void)layoutStatusView;
- (void)resetImages;
- (void)setFrame:(CGRect)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (void)showLockStatus:(BOOL)arg1;
- (void)showSharedStatus:(BOOL)arg1;
- (void)showStarredStatus:(BOOL)arg1;
- (void)updateLivePhotoStatus:(BOOL)arg1;
- (void)showFailedStatus:(BOOL)arg1;
- (void)showOwnerNickname:(BOOL)arg1 username:(id)arg2;
- (id)m_arrMediaData;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_dataItem;
- (void)setM_dataItem:(id)arg1;
- (long long)layoutStyle;
- (void)setLayoutStyle:(long long)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
