@interface WCFinderMemberShipDiscussionPostViewController : MMUIHalfScreenViewController <MMTableViewInfoDelegate, WCDragableSelectorViewDelegate, SelectorControllerDelegate, InputControllerDelegate, BaseEmoticonViewDelegate, ILinkEventExt>
{
    BOOL _isAuthor; // +0x70
    WCTableViewManager * _tableViewManager; // +0x78
    MMGrowTextView * _textView; // +0x80
    UIView * _headView; // +0x88
    UIView * _mediaContainerView; // +0x90
    WCDragableSelectorView * _withImageView; // +0x98
    ImageSelectorController * _imageSelectorController; // +0xa0
    unsigned long long _type; // +0xa8
    SightDraft * _sightDraft; // +0xb0
    WCInputController * _inputController; // +0xb8
    UIImageView * _inputView; // +0xc0
    UIButton * _expressionButton; // +0xc8
    MMUILabel * _remainWordCountLabel; // +0xd0
    long long _lastRemainWordCount; // +0xd8
    UIView * _backgroundView; // +0xe0
    EmoticonBoardView * _emoticonBoardView; // +0xe8
    unsigned long long _pageStyle; // +0xf0
    WCFinderSizingRichTextView * _titleIconView; // +0xf8
    MMUIButton * _cancelButton; // +0x100
    WCFinderMaskButton * _postButton; // +0x108
    WCFinderDataItem * _refQuestionObject; // +0x110
    RichTextView * _refQuestionContentLabel; // +0x118
    WCFinderHeadImageView * _refQuestionHeadImageView; // +0x120
    RichTextView * _refQuestionUsernameLabel; // +0x128
    WCFinderHeadImageView * _postAvatarImageView; // +0x130
    UILabel * _postNickNameLabel; // +0x138
    MMUIButton * _postSwitchButton; // +0x140
    unsigned long long _postIdentifierType; // +0x148
    NSString * _memberAQProviderUsername; // +0x150
    UIImageView * _finderIconImageView; // +0x158
}
+ (double)heightForRefQuestionObject:(id)arg1 pageStyle:(unsigned long long)arg2 isAuthor:(BOOL)arg3;
- (id)initWithPageStyle:(unsigned long long)arg1 refQuestionObject:(id)arg2 scrollViewPaddingTop:(double)arg3 memberAQProviderUsername:(id)arg4 isAuthor:(BOOL)arg5;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)initView;
- (void)createSubviews;
- (void)addMediaView;
- (void)setPostButtonEnabled:(BOOL)arg1;
- (void)reloadData;
- (double)getMaxHalfScreenHeight;
- (void)initInputController;
- (void)initInputToolView;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (void)initRemainWordCountLabel;
- (void)initBackgroundView;
- (void)initEmoticonView;
- (id)genRichTextView;
- (id)genHeadImageView;
- (void)updatePostIdentifier;
- (void)OnClickSwitchAccount;
- (void)OnReturn;
- (void)OnDone;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)reloadHeadViewSubviewsY;
- (double)thumbnailSettingMargin;
- (CGSize)thumbnailSize;
- (CGSize)thumbnailSizeForType:(unsigned long long)arg1;
- (void)reloadType;
- (void)becomeInput;
- (void)resignInput;
- (void)asyncUpdateContentOffset;
- (void)updateContentOffset;
- (id)stringByTrimmingWhitespaceNewlineAttachment:(id)arg1;
- (void)updateRemainWordCountLabelWithRemain:(long long)arg1;
- (void)performLightFeedBackIfNeededWithRemain:(long long)arg1;
- (void)didCommitText:(id)arg1;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)textViewTextDidChange;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)touchesBegan_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)onCollectionViewCellMoved:(CGPoint)arg1;
- (void)onDragableSelectorViewHeightChanged;
- (void)ImageSelectorController:(id)arg1 willSelectAssetOfType:(unsigned long long)arg2;
- (void)ImageSelectorController:(id)arg1 didSelectSightDraft:(id)arg2;
- (BOOL)shouldJustReturnMMAsset;
- (void)updateSelectorView;
- (void)imagesUpdated;
- (BOOL)processImage;
- (void)afterProcessSingleImage;
- (BOOL)checkImageState;
- (id)processWithSightDraft:(id)arg1 postUsername:(id)arg2;
- (id)processWithImages:(id)arg1 postUsername:(id)arg2;
- (id)tableViewManager;
- (void)setTableViewManager:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)headView;
- (void)setHeadView:(id)arg1;
- (id)mediaContainerView;
- (void)setMediaContainerView:(id)arg1;
- (id)withImageView;
- (void)setWithImageView:(id)arg1;
- (id)imageSelectorController;
- (void)setImageSelectorController:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)sightDraft;
- (void)setSightDraft:(id)arg1;
- (id)inputController;
- (void)setInputController:(id)arg1;
- (id)inputView;
- (void)setInputView:(id)arg1;
- (id)expressionButton;
- (void)setExpressionButton:(id)arg1;
- (id)remainWordCountLabel;
- (void)setRemainWordCountLabel:(id)arg1;
- (long long)lastRemainWordCount;
- (void)setLastRemainWordCount:(long long)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)emoticonBoardView;
- (void)setEmoticonBoardView:(id)arg1;
- (unsigned long long)pageStyle;
- (void)setPageStyle:(unsigned long long)arg1;
- (id)titleIconView;
- (void)setTitleIconView:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)postButton;
- (void)setPostButton:(id)arg1;
- (id)refQuestionObject;
- (void)setRefQuestionObject:(id)arg1;
- (id)refQuestionContentLabel;
- (void)setRefQuestionContentLabel:(id)arg1;
- (id)refQuestionHeadImageView;
- (void)setRefQuestionHeadImageView:(id)arg1;
- (id)refQuestionUsernameLabel;
- (void)setRefQuestionUsernameLabel:(id)arg1;
- (id)postAvatarImageView;
- (void)setPostAvatarImageView:(id)arg1;
- (id)postNickNameLabel;
- (void)setPostNickNameLabel:(id)arg1;
- (id)postSwitchButton;
- (void)setPostSwitchButton:(id)arg1;
- (unsigned long long)postIdentifierType;
- (void)setPostIdentifierType:(unsigned long long)arg1;
- (id)memberAQProviderUsername;
- (void)setMemberAQProviderUsername:(id)arg1;
- (BOOL)isAuthor;
- (void)setIsAuthor:(BOOL)arg1;
- (id)finderIconImageView;
- (void)setFinderIconImageView:(id)arg1;
- (void).cxx_destruct;
@end
