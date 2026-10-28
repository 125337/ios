@interface MMFinderLiveKTVSongTableViewCell : UITableViewCell
{
    BOOL _banOriginAuthorText; // +0x8
    id /* block */ _songOperationBlock; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    WCFinderLiveAnchorLogReporter * _anchorReporter; // +0x20
    MMFinderLiveKTVSongItem * _songItem; // +0x28
    NSString * _greenText; // +0x30
    MMWebImageView * _coverImageView; // +0x38
    MMUILabel * _titleLabel; // +0x40
    MMUILabel * _segmentLabel; // +0x48
    MMUILabel * _musicAnchorLabel; // +0x50
    MMUILabel * _durationLabel; // +0x58
    MMUIButton * _requestButton; // +0x60
    MMUIActivityIndicatorView * _loadingView; // +0x68
    UIView * _bottomLine; // +0x70
}
+ (double)cellHeightWithState:(unsigned long long)arg1;
+ (id)identifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)customLayoutUI;
- (void)willAppear:(unsigned long long)arg1;
- (id)coverImageView;
- (id)titleLabel;
- (void)createSegmentLabel;
- (id)musicAnchorLabel;
- (id)durationLabel;
- (id)requestButton;
- (id)bottomLine;
- (id)loadingView;
- (id)liveTask;
- (id)anchorReporter;
- (void)processGreenText;
- (void)markGreen:(id)arg1 needAppend:(BOOL)arg2 onLabel:(id)arg3;
- (id)parseDuration:(int)arg1;
- (void)setSongItem:(id)arg1;
- (void)requestButtonAction;
- (void)onRequestSongItemReturned:(id)arg1 success:(BOOL)arg2;
- (id /* block */)songOperationBlock;
- (void)setSongOperationBlock:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void)setAnchorReporter:(id)arg1;
- (id)songItem;
- (id)greenText;
- (void)setGreenText:(id)arg1;
- (BOOL)banOriginAuthorText;
- (void)setBanOriginAuthorText:(BOOL)arg1;
- (void)setCoverImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)segmentLabel;
- (void)setSegmentLabel:(id)arg1;
- (void)setMusicAnchorLabel:(id)arg1;
- (void)setDurationLabel:(id)arg1;
- (void)setRequestButton:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setBottomLine:(id)arg1;
- (void).cxx_destruct;
@end
