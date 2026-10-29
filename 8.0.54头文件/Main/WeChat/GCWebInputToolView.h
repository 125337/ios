@interface GCWebInputToolView : GameChatInputToolBaseView <MMImagePickerManagerDelegate, GCImgPreviewDelegate>
{
    BOOL _stickBtmIfNonEmpty; // +0xb8
    BOOL _isEmptyInput; // +0xb9
    BOOL _canSendWithoutText; // +0xba
    BOOL _isFromEmoticon; // +0xbb
    UIView * _btmLineView; // +0xc0
    UIButton * _imgBtn; // +0xc8
    UIButton * _sendBtn; // +0xd0
    CEmoticonWrap * _emoticonWrap; // +0xd8
    MMImage * _pickMmImage; // +0xe0
    UIImageView * _chooseImgView; // +0xe8
    UIView * _emojiInputBGView; // +0xf0
    EmojiInputView * _emojiInputView; // +0xf8
    NSArray * _emojiList; // +0x100
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubViews;
- (void)onChooseImgSelect;
- (void)browserImage;
- (void)onGCPreviewDismiss;
- (void)onDeleteImage:(BOOL)arg1 needShowInputView:(BOOL)arg2;
- (void)onSendBtnClick;
- (void)onDidCommitEnd;
- (void)pickImg;
- (void)showImageEditor;
- (void)MMImagePickerManagerDidSkip:(id)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)handleMMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)report12909WithWithScene:(long long)arg1 uiArea:(long long)arg2 position:(unsigned int)arg3 action:(long long)arg4 extInfo:(id)arg5;
- (void)subclassOnShowInputView;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)showEmoticonView;
- (BOOL)canSelectEmoji:(id)arg1;
- (BOOL)customeHandleEmoticonSelect:(id)arg1;
- (void)tryChooseNewImg:(id)arg1 pickMmImage:(id)arg2 emoticonWrap:(id)arg3;
- (void)didChooseNewImg:(id)arg1 pickMmImage:(id)arg2 emoticonWrap:(id)arg3;
- (void)didChooseNewImg:(id)arg1 pickMmImage:(id)arg2 emoticonWrap:(id)arg3 needShowInputView:(BOOL)arg4;
- (void)checkReplaceImgTip:(id)arg1 competionBlock:(id /* block */)arg2;
- (void)onTextChange:(id)arg1;
- (void)checkIsEmpty;
- (void)createEmojiInputViewIfNeed:(id)arg1;
- (BOOL)needStickBtm;
- (void)layoutUI;
- (void)updateSelfHeight;
- (double)subClsAditionPubbleViewHeight;
- (void)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 handler:(id /* block */)arg4 btnTitle:(id)arg5 handler:(id /* block */)arg6;
- (void)forceClearInputContent;
- (void)setStickBtmIfNonEmpty:(BOOL)arg1;
- (id)btmLineView;
- (void)setBtmLineView:(id)arg1;
- (id)imgBtn;
- (void)setImgBtn:(id)arg1;
- (id)sendBtn;
- (void)setSendBtn:(id)arg1;
- (id)emoticonWrap;
- (void)setEmoticonWrap:(id)arg1;
- (id)pickMmImage;
- (void)setPickMmImage:(id)arg1;
- (BOOL)stickBtmIfNonEmpty;
- (BOOL)isEmptyInput;
- (void)setIsEmptyInput:(BOOL)arg1;
- (BOOL)canSendWithoutText;
- (void)setCanSendWithoutText:(BOOL)arg1;
- (id)chooseImgView;
- (void)setChooseImgView:(id)arg1;
- (BOOL)isFromEmoticon;
- (void)setIsFromEmoticon:(BOOL)arg1;
- (id)emojiInputBGView;
- (void)setEmojiInputBGView:(id)arg1;
- (id)emojiInputView;
- (void)setEmojiInputView:(id)arg1;
- (id)emojiList;
- (void)setEmojiList:(id)arg1;
- (void).cxx_destruct;
@end

