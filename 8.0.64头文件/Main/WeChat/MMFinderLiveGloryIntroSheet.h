@interface MMFinderLiveGloryIntroSheet : MMPageSheetBaseView
{
    int _showSource; // +0x8
    MMFinderLiveTaskId * _taskId; // +0x10
    id <MMFinderLiveGloryIntroSheetDelegate> _delegate; // +0x18
    UIScrollView * _contentsContainerView; // +0x20
    MMUILabel * _titleLabel; // +0x28
    MMUILabel * _detailLabel; // +0x30
    UIImageView * _introImageView; // +0x38
    MMUIButton * _cancelButton; // +0x40
    MMUIButton * _confirmButton; // +0x48
    MMWebImageView * _headImageView; // +0x50
    MMUIImageView * _headImageBoarderView; // +0x58
}
+ (id)showWithTaskId:(id)arg1 delegate:(id)arg2;
- (id)initWithTaskId:(id)arg1 delegate:(id)arg2;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (id)liveTask;
- (BOOL)userFinderStyle;
- (id)currentContactHeadURL;
- (void)confirmAction;
- (void)cancelAction;
- (id)titleLabel;
- (id)detailLabel;
- (id)introImageView;
- (id)confirmButton;
- (id)cancelButton;
- (id)headImageBoarderView;
- (id)headImageView;
- (id)audienceLogReporter;
- (int)showSource;
- (void)setShowSource:(int)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentsContainerView;
- (void)setContentsContainerView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDetailLabel:(id)arg1;
- (void)setIntroImageView:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setConfirmButton:(id)arg1;
- (void)setHeadImageView:(id)arg1;
- (void)setHeadImageBoarderView:(id)arg1;
- (void).cxx_destruct;
@end
