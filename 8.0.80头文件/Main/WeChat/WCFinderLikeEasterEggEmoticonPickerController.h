@interface WCFinderLikeEasterEggEmoticonPickerController : MMPageSheetBaseViewController <EmoticonBoardViewDelegate, BaseEmoticonViewDelegate, EmoticonSearchViewControllerDelegate>
{
    int _scene; // +0x70
    WCFinderPostSessionModel * _postSession; // +0x78
    id /* block */ _completionBlock; // +0x80
    CEmoticonWrap * _selectedEmoticon; // +0x88
    UIButton * _cancelButton; // +0x90
    UIButton * _confirmButton; // +0x98
    UIScrollView * _headerScrollView; // +0xa0
    UILabel * _titleLabel; // +0xa8
    _TtC6WeChat20WFDEnhancedLabelView * _descLabel; // +0xb0
    WCFinderDashedBorderRectangleView * _dashedBorderRectangleView; // +0xb8
    UIImageView * _addEmotionIcon; // +0xc0
    UILabel * _addEmotionLabel; // +0xc8
    MMEmoticonView * _emoticonView; // +0xd0
    WCFinderLikeEasterEggEmoticonPickerOperationView * _operationView; // +0xd8
    EmoticonBoardView * _emoticonBoardView; // +0xe0
}
- (id)initWithEmoticon:(id)arg1 postSession:(id)arg2 scene:(int)arg3 completionBlock:(id /* block */)arg4;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)_setupUI;
- (void)_layoutSubviews;
- (void)_setupPageSheetConfig;
- (void)_onCancel;
- (void)_onConfirm;
- (void)_onPreview;
- (void)_onDeleteEmotion;
- (double)pageSheetContentHeight;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (void)onEmoticonSearchIconClicked;
- (void)onSearchEmoticonViewControllerSendEmoticon:(id)arg1;
- (void)updateSelectedEmoticon:(id)arg1;
- (id)headerScrollView;
- (id)cancelButton;
- (id)confirmButton;
- (id)titleLabel;
- (id)descLabel;
- (id)dashedBorderRectangleView;
- (id)addEmotionIcon;
- (id)addEmotionLabel;
- (id)emoticonView;
- (id)operationView;
- (id)emoticonBoardView;
- (id)postSession;
- (void)setPostSession:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id)selectedEmoticon;
- (void)setSelectedEmoticon:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setConfirmButton:(id)arg1;
- (void)setHeaderScrollView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setDashedBorderRectangleView:(id)arg1;
- (void)setAddEmotionIcon:(id)arg1;
- (void)setAddEmotionLabel:(id)arg1;
- (void)setEmoticonView:(id)arg1;
- (void)setOperationView:(id)arg1;
- (void)setEmoticonBoardView:(id)arg1;
- (void).cxx_destruct;
@end
