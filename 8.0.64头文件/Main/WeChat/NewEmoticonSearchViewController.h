@interface NewEmoticonSearchViewController : WSHalfScreenWebSearchBaseViewController <EmoticonUploaderDelegate>
{
    BOOL _includeCustomEmoji; // +0x70
    BOOL _bShowKeyboardTips; // +0x71
    unsigned int _sourceScene; // +0x74
    id <EmoticonSearchViewControllerDelegate> _delegate; // +0x78
    NSString * _chatId; // +0x80
    WCTopicSearchActionLogic * _shareActionLogic; // +0x88
    CEmoticonWrap * _selectedEmoticon; // +0x90
    StoreEmotionBatchEmojiDownLoadCgi * _emojiDownloadCgi; // +0x98
    EmoticonUploader * _emoticonUploader; // +0xa0
    EmoticonSearchInMessagePanelReporter * _reporter; // +0xa8
    unsigned long long _selectEmoticonTimeStamp; // +0xb0
    NSDictionary * _selectEmoticonParams; // +0xb8
}
+ (BOOL)expIfChangedBackgroundColor;
- (id)initWithCurrentTextAndCid:(id)arg1 chatId:(id)arg2 sourceScene:(unsigned int)arg3 includeCustomEmoji:(BOOL)arg4;
- (id)textfiledBackgroundColor;
- (id)baseBackgroundColor;
- (id)leftIconBgImageColor;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (unsigned long long)searchScene;
- (unsigned long long)localJSBizType;
- (id)defaultNavTitle;
- (id)searchBarPlaceholder;
- (id)initedUrlParams;
- (BOOL)shouldSendSearchInputChangedEventDuringMultiStageInput;
- (BOOL)shouldMakeTextFieldAutoBecomFirstResponder;
- (void)onSetSearchTagResult:(id)arg1;
- (void)onSearchVCAppearAction;
- (void)onSearchVCDisappearAction;
- (void)onEmoticonDownloaded:(id)arg1;
- (BOOL)needCheckUpload;
- (void)checkAndUploadEmoticon;
- (void)startCdnUpload;
- (void)onEmoticonUploadSuccessWithEmoji:(id)arg1 uploadInfo:(id)arg2;
- (void)onEmoticonUploadFailWithUploadInfo:(id)arg1 reason:(unsigned long long)arg2 realMd5:(id)arg3;
- (void)onSelectEmoticonFinished;
- (void)onSelectEmoticonFailed;
- (void)reportSendEmoticonWithSuccess:(BOOL)arg1;
- (void)openDetailViewWithKeyword:(id)arg1 params:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)chatId;
- (void)setChatId:(id)arg1;
- (id)shareActionLogic;
- (void)setShareActionLogic:(id)arg1;
- (unsigned int)sourceScene;
- (void)setSourceScene:(unsigned int)arg1;
- (BOOL)includeCustomEmoji;
- (void)setIncludeCustomEmoji:(BOOL)arg1;
- (id)selectedEmoticon;
- (void)setSelectedEmoticon:(id)arg1;
- (id)emojiDownloadCgi;
- (void)setEmojiDownloadCgi:(id)arg1;
- (id)emoticonUploader;
- (void)setEmoticonUploader:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (unsigned long long)selectEmoticonTimeStamp;
- (void)setSelectEmoticonTimeStamp:(unsigned long long)arg1;
- (id)selectEmoticonParams;
- (void)setSelectEmoticonParams:(id)arg1;
- (BOOL)bShowKeyboardTips;
- (void)setBShowKeyboardTips:(BOOL)arg1;
- (void).cxx_destruct;
@end
