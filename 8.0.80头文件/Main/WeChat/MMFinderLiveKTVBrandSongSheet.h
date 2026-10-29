@interface MMFinderLiveKTVBrandSongSheet : MMPageSheetBaseView
{
    BOOL _hasReportedSongExpose; // +0x8
    MMFinderLiveKTVSongItem * _songItem; // +0x10
    unsigned long long _scene; // +0x18
    MMFinderLiveTaskId * _taskId; // +0x20
    id <MMFinderLiveKTVBrandSongSheetDelegate> _delegate; // +0x28
    MMUILabel * _titleLabel; // +0x30
    MMUIButton * _closeButton; // +0x38
    double _closeButtonIconAngle; // +0x40
    MMFinderLiveKTVBrandSongBubbleView * _songBubbleContainer; // +0x48
    MMFinderLiveKTVSongRequestedCell * _ktvSongBubbleCell; // +0x50
    MMFinderLiveNewSongCell * _newSongBubbleCell; // +0x58
    MMUIView * _brandSourceContainer; // +0x60
    MMUILabel * _brandSourcePrefixLabel; // +0x68
    MMUIImageView * _brandSourceLogoIcon; // +0x70
    MMUILabel * _brandSourceNameLabel; // +0x78
}
+ (id)showWithTaskId:(id)arg1 songItem:(id)arg2 scene:(unsigned long long)arg3 delegate:(id)arg4;
- (id)initWithTaskId:(id)arg1 songItem:(id)arg2 scene:(unsigned long long)arg3 delegate:(id)arg4;
- (void)reloadSongItem:(id)arg1;
- (void)setupPageSheetConfig;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutSongBubbleContainerWithContentBottom:(double)arg1;
- (void)layoutBrandSourceContainerWithContentBottom:(double)arg1;
- (double)contentWidth;
- (id)currentSongBubbleCell;
- (double)songBubbleCellHeight;
- (double)songBubbleContainerHeight;
- (double)brandSourceContainerHeight;
- (double)naturalContentViewHeight;
- (double)contentViewHeight;
- (id)titleLabel;
- (id)closeButton;
- (void)updateCloseButtonIconAngle;
- (id)songBubbleContainer;
- (id)ktvSongBubbleCell;
- (id)newSongBubbleCell;
- (id)brandSourceContainer;
- (id)brandSourcePrefixLabel;
- (id)brandSourceLogoIcon;
- (id)brandSourceNameLabel;
- (void)reportSongAction:(unsigned long long)arg1;
- (void)onTapSongBubble;
- (void)onTapCloseButton;
- (void)pageSheetDidAppear;
- (void)pageSheetDidDisappear;
- (id)songItem;
- (void)setSongItem:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (double)closeButtonIconAngle;
- (void)setCloseButtonIconAngle:(double)arg1;
- (void)setSongBubbleContainer:(id)arg1;
- (void)setKtvSongBubbleCell:(id)arg1;
- (void)setNewSongBubbleCell:(id)arg1;
- (void)setBrandSourceContainer:(id)arg1;
- (void)setBrandSourcePrefixLabel:(id)arg1;
- (void)setBrandSourceLogoIcon:(id)arg1;
- (void)setBrandSourceNameLabel:(id)arg1;
- (BOOL)hasReportedSongExpose;
- (void)setHasReportedSongExpose:(BOOL)arg1;
- (void).cxx_destruct;
@end
