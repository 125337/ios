@interface MMFinderLiveMusicInfoSheet : MMPageSheetBaseView <MMImageLoaderObserver>
{
    MMFinderLiveTaskId * _taskId; // +0x8
    id <MMFinderLiveMusicInfoSheetDelegate> _delegate; // +0x10
    MMFinderLiveMusicDataItem * _dataItem; // +0x18
    MMUILabel * _titleLabel; // +0x20
    TingSharedAudioView * _audioContentView; // +0x28
    MMUIView * _qqMusicTipsViewContainer; // +0x30
    MMUIImageView * _qqMusicTipsLogoIcon; // +0x38
    MMUIImageView * _qqMusicTipsArrowIcon; // +0x40
    MMUILabel * _qqMusicTipsLabel; // +0x48
}
+ (id)showWithTaskId:(id)arg1 dataItem:(id)arg2 delegate:(id)arg3;
- (id)initWithTaskId:(id)arg1 dataItem:(id)arg2 delegate:(id)arg3;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutQQMusicTipsViewContainer;
- (void)setupPageSheetConfig;
- (id)audioContentView;
- (void)onTapAudioContentView;
- (id)titleLabel;
- (id)qqMusicTipsViewContainer;
- (void)onTapQQMusicTipsView;
- (id)qqMusicTipsLogoIcon;
- (id)qqMusicTipsArrowIcon;
- (id)qqMusicTipsLabel;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)reloadData;
- (void)reloadMusicItem:(id)arg1;
- (id)getBriefMusicInfo;
- (void)pageSheetDidAppear;
- (void)pageSheetDidDisappear;
- (id)liveTask;
- (id)tingItemForAudioContentView;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setAudioContentView:(id)arg1;
- (void)setQqMusicTipsViewContainer:(id)arg1;
- (void)setQqMusicTipsLogoIcon:(id)arg1;
- (void)setQqMusicTipsArrowIcon:(id)arg1;
- (void)setQqMusicTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end

