@interface WCAdSliderCardFinderTopicCellView : WCAdSliderCardCellView <MMWebImageViewDelegate>
{
    MMWebImageView * _avatarView; // +0x8
    MMUILabel * _nicknameView; // +0x10
    MMUILabel * _durationView; // +0x18
    MMUIView * _infoBarView; // +0x20
    MMUIView * _infoDividerView; // +0x28
    MMUILabel * _tagView; // +0x30
    MMUILabel * _descView; // +0x38
}
- (id)getCellContentViewMaskPath:(CGRect)arg1;
- (id)createContentContainer;
- (void)initDetailView;
- (void)initHeadView;
- (void)initInfoView;
- (void)updateContentUI;
- (void)adjustLayout;
- (id)fetchReportItem;
- (BOOL)shouldDownloadImageUseCDN;
- (id)finderTopicResInfo;
- (void)onLoadImageOK:(id)arg1;
- (void)onLoadImageFail:(id)arg1 extraInfo:(id)arg2;
- (id)avatarView;
- (void)setAvatarView:(id)arg1;
- (id)nicknameView;
- (void)setNicknameView:(id)arg1;
- (id)durationView;
- (void)setDurationView:(id)arg1;
- (id)infoBarView;
- (void)setInfoBarView:(id)arg1;
- (id)infoDividerView;
- (void)setInfoDividerView:(id)arg1;
- (id)tagView;
- (void)setTagView:(id)arg1;
- (id)descView;
- (void)setDescView:(id)arg1;
- (void).cxx_destruct;
@end
