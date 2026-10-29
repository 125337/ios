@interface WCSnsLikeEasterEggPickerController : MMPageSheetBaseViewController <EmoticonBoardViewDelegate, BaseEmoticonViewDelegate, EmoticonBoardViewFactoryHelper, EmoticonSearchViewControllerDelegate, IStoreEmotionSingleDownloadMgrExt>
{
    double _lastLayoutWidth; // +0x70
    double _lastLayoutHeight; // +0x78
    CGSize _lastContainerSize; // +0x80
    BOOL _isDefaultChecked; // +0x90
    NSString * _postSessionId; // +0x98
    long long _postVisibleStatus; // +0xa0
    long long _hasInterEmojiSource; // +0xa8
    id /* block */ _completionBlock; // +0xb0
    NSString * _halfscreenSessionId; // +0xb8
    double _halfscreenShowTime; // +0xc0
    NSString * _currentBoardPid; // +0xc8
    WCSnsLikeEasterEggInfo * _initialInfo; // +0xd0
    WCSnsLikeEasterEggInfo * _selectedInfo; // +0xd8
    UIButton * _cancelButton; // +0xe0
    UIButton * _confirmButton; // +0xe8
    UILabel * _titleLabel; // +0xf0
    UILabel * _subtitleLabel; // +0xf8
    UIView * _previewContainer; // +0x100
    UIImageView * _emoticonView; // +0x108
    UIImageView * _emojiIconView; // +0x110
    UIImageView * _addIconView; // +0x118
    UILabel * _addLabel; // +0x120
    UIButton * _deleteButton; // +0x128
    UIButton * _defaultCheckButton; // +0x130
    UILabel * _defaultCheckLabel; // +0x138
    EmoticonBoardView * _emoticonBoardView; // +0x140
    UIScrollView * _contentScrollView; // +0x148
}
+ (id)parsedPreviewRenderObjectOfData:(id)arg1 md5:(id)arg2;
- (id)initWithInitialInfo:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (CGSize)_pageSheetContainerSize;
- (void)_updateLayoutForContainerSizeIfNeeded;
- (void)viewDidAppear:(BOOL)arg1;
- (void)_selectDefaultTab;
- (void)OnEmoticonPidDidChanged:(id)arg1;
- (void)_setupPageSheetConfig;
- (void)_setupUI;
- (id)contentScrollView;
- (void)_layoutSubviews;
- (id)_eggReportParams;
- (void)_setupDataReport;
- (void)_onCancel;
- (void)_onConfirm;
- (void)_onDelete;
- (void)_onDefaultCheckToggled;
- (void)_updateDefaultCheckButton;
- (void)updateSelectedEmoticonWithInfo:(id)arg1;
- (void)probePreviewStickerWithInfo:(id)arg1;
- (void)renderPreviewWithRenderObject:(id)arg1;
- (void)stopPreviewPlayTask;
- (void)downloadPreviewStickerWithInfo:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)dealloc;
- (id)getViewController;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (void)didSelectorEmoticon:(id)arg1;
- (void)_selectEmoticonWrap:(id)arg1 isLikeEmoji:(BOOL)arg2;
- (void)_reportEmojiSelectFill:(long long)arg1 isLikeEmoji:(BOOL)arg2;
- (void)onEmoticonSearchIconClicked;
- (void)onEmoticonBoardTabClicked:(id)arg1;
- (void)onSearchEmoticonViewControllerSendEmoticon:(id)arg1;
- (id)cancelButton;
- (id)confirmButton;
- (id)titleLabel;
- (id)subtitleLabel;
- (id)previewContainer;
- (id)addIconView;
- (id)addLabel;
- (id)emoticonView;
- (id)emojiIconView;
- (id)deleteButton;
- (id)defaultCheckButton;
- (id)defaultCheckLabel;
- (id)emoticonBoardView;
- (double)pageSheetContentWidth;
- (double)pageSheetContentHeight;
- (id)postSessionId;
- (void)setPostSessionId:(id)arg1;
- (long long)postVisibleStatus;
- (void)setPostVisibleStatus:(long long)arg1;
- (long long)hasInterEmojiSource;
- (void)setHasInterEmojiSource:(long long)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id)halfscreenSessionId;
- (void)setHalfscreenSessionId:(id)arg1;
- (double)halfscreenShowTime;
- (void)setHalfscreenShowTime:(double)arg1;
- (id)currentBoardPid;
- (void)setCurrentBoardPid:(id)arg1;
- (id)initialInfo;
- (void)setInitialInfo:(id)arg1;
- (id)selectedInfo;
- (void)setSelectedInfo:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setConfirmButton:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setPreviewContainer:(id)arg1;
- (void)setEmoticonView:(id)arg1;
- (void)setEmojiIconView:(id)arg1;
- (void)setAddIconView:(id)arg1;
- (void)setAddLabel:(id)arg1;
- (void)setDeleteButton:(id)arg1;
- (void)setDefaultCheckButton:(id)arg1;
- (void)setDefaultCheckLabel:(id)arg1;
- (BOOL)isDefaultChecked;
- (void)setIsDefaultChecked:(BOOL)arg1;
- (void)setEmoticonBoardView:(id)arg1;
- (void)setContentScrollView:(id)arg1;
- (void).cxx_destruct;
@end
