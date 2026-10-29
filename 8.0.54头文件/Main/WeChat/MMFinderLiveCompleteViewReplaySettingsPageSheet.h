@interface MMFinderLiveCompleteViewReplaySettingsPageSheet : MMPageSheetBaseView <UITableViewDataSource, UITableViewDelegate, MMPageSheetBottomViewDelegate, ILinkEventExt>
{
    id /* block */ _commitBlock; // +0x8
    MMLiveScrollGradientMaskingView * _scrollMaskingView; // +0x10
    UIScrollView * _scrollView; // +0x18
    UILabel * _titleLabel; // +0x20
    RichTextView * _descriptionLabel; // +0x28
    UIView * _coverImageContainerView; // +0x30
    MMWebImageView * _coverImageView; // +0x38
    UIView * _coverImageHintLabelShadingView; // +0x40
    UILabel * _coverImageHintLabel; // +0x48
    UITableView * _optionsTableView; // +0x50
    MMFinderLiveTask * _liveTask; // +0x58
    FinderLiveInfo * _finderLiveInfo; // +0x60
    NSString * _commentVisibilityOptionWording; // +0x68
    id <MMFinderLiveCompleteViewReplaySettingsStrategy> _strategy; // +0x70
    MMFinderLiveCompleteViewReplaySettingsCoverPickingLogic * _coverPickingLogic; // +0x78
    UIImage * _selectedCoverImage; // +0x80
}
- (id)initWithLiveTask:(id)arg1 finderLiveInfo:(id)arg2 commentVisibilityOptionWording:(id)arg3;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onCoverImageTapped;
- (void)initializeComponents;
- (void)initializeStrategy;
- (void)updateCoverImage;
- (id /* block */)commitBlock;
- (void)setCommitBlock:(id /* block */)arg1;
- (id)scrollMaskingView;
- (void)setScrollMaskingView:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descriptionLabel;
- (void)setDescriptionLabel:(id)arg1;
- (id)coverImageContainerView;
- (void)setCoverImageContainerView:(id)arg1;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id)coverImageHintLabelShadingView;
- (void)setCoverImageHintLabelShadingView:(id)arg1;
- (id)coverImageHintLabel;
- (void)setCoverImageHintLabel:(id)arg1;
- (id)optionsTableView;
- (void)setOptionsTableView:(id)arg1;
- (id)liveTask;
- (void)setLiveTask:(id)arg1;
- (id)finderLiveInfo;
- (void)setFinderLiveInfo:(id)arg1;
- (id)commentVisibilityOptionWording;
- (void)setCommentVisibilityOptionWording:(id)arg1;
- (id)strategy;
- (void)setStrategy:(id)arg1;
- (id)coverPickingLogic;
- (void)setCoverPickingLogic:(id)arg1;
- (id)selectedCoverImage;
- (void)setSelectedCoverImage:(id)arg1;
- (void).cxx_destruct;
@end

