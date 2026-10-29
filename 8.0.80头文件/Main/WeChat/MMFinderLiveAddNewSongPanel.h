@interface MMFinderLiveAddNewSongPanel : MMLandscapeDragBarPageSheet <MMPageSheetGestureRecognizerDelegate>
{
    id <MMFinderLiveAddNewSongPanelDelegate> _delegate; // +0x8
    NSArray * _originalSongs; // +0x10
    UIView * _topControlContainerView; // +0x18
    UILabel * _titleLabel; // +0x20
    UILabel * _subtitleLabel; // +0x28
    MMUIButton * _cancelButton; // +0x30
    UIButton * _confirmButton; // +0x38
    MMTableView * _songsTableView; // +0x40
    MMFinderLiveAddNewSongTableViewModel * _songsTableVM; // +0x48
}
- (id)initWithSongs:(id)arg1;
- (void)setup;
- (void)setupPageSheetConfig;
- (BOOL)pageSheetGestureRecognizerShouldBegin:(id)arg1;
- (void)pageSheetWillAppear;
- (void)pageSheetWillDisappear;
- (void)pageSheetDidClose:(BOOL)arg1;
- (void)updateSongsFromServer:(id)arg1;
- (void)layoutSubviews;
- (void)buildSongsTableView;
- (void)buildTopControlViews;
- (double)contentWidth;
- (double)contentHeight;
- (void)onCancel;
- (void)onConfirm;
- (BOOL)validateSongNames:(id)arg1 firstInvalidIndex:(unsigned long long *)arg2;
- (id)getCurrentValidSongs;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)originalSongs;
- (void)setOriginalSongs:(id)arg1;
- (id)topControlContainerView;
- (void)setTopControlContainerView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)songsTableView;
- (void)setSongsTableView:(id)arg1;
- (id)songsTableVM;
- (void)setSongsTableVM:(id)arg1;
- (void).cxx_destruct;
@end
