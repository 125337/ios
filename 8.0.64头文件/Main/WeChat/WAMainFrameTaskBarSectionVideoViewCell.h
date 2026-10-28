@interface WAMainFrameTaskBarSectionVideoViewCell : WAMainFrameTaskBarSectionOtherViewCell
{
    MMImageView * _playIcon; // +0x8
    WCFinderFeedImageCDNView * _finderCoverView; // +0x10
}
- (void)initView;
- (void)layoutSubviews;
- (id)defaultImage;
- (void)updateWithListInfo:(id)arg1;
- (BOOL)supportAddToMinimize;
- (void).cxx_destruct;
@end
