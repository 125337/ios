@interface CBTAsstBoardSendConfirmViewModel : CBTAsstBoardBaseViewModel <IMsgExt>
{
    BOOL _hasEditedText; // +0x8
    BOOL _isDataFromNative; // +0x9
    BOOL _isSendButtonClicked; // +0xa
    BOOL _isImageDownloading; // +0xb
    NSString * _contactUsername; // +0x10
    NSString * _messageContent; // +0x18
    NSString * _editedMessageContent; // +0x20
    WxFunctionCallInput * _callInput; // +0x28
    NSDictionary * _cardData; // +0x30
    NSString * _cardId; // +0x38
    NSString * _cardName; // +0x40
    NSString * _cachedImagePath; // +0x48
    NSData * _cachedThumbData; // +0x50
    CMessageWrap * _thumbMsgWrap; // +0x58
    id /* block */ _onThumbDownloadComplete; // +0x60
    long long _reportMsgType; // +0x68
    long long _reportSubMsgType; // +0x70
}
+ (Class)boardLegacyCellClass;
+ (id)boardLegacyCellReuseId;
- (id)initWithCardWrap:(id)arg1 delegate:(id)arg2;
- (void)dealloc;
- (void)parseCardData;
- (BOOL)isAssistantCard;
- (BOOL)hasCardXml;
- (BOOL)canEditText;
- (id)sendMessageContent;
- (void)applyEditedText:(id)arg1;
- (id)editedTextBypassForm;
- (id)editedTextExtraSaveInfo;
- (void)dispatchSendActions;
- (void)triggerSendTextMessage;
- (void)restoreEditedTextFromExtraSaveInfo;
- (void)startThumbDownloadIfNeeded:(id)arg1;
- (void)stopThumbDownload;
- (void)OnMsgDownloadThumbOK:(id)arg1 MsgWrap:(id)arg2;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (id)getCellReuseId;
- (id)buildForwardMessageWrapsWithContext:(id)arg1;
- (BOOL)shouldShowForwardMenuItem;
- (BOOL)isInteractive;
- (BOOL)shouldUseUnsupportedPlaceholderForForwardHistory;
- (id)contactUsername;
- (void)setContactUsername:(id)arg1;
- (id)messageContent;
- (void)setMessageContent:(id)arg1;
- (id)editedMessageContent;
- (void)setEditedMessageContent:(id)arg1;
- (BOOL)hasEditedText;
- (void)setHasEditedText:(BOOL)arg1;
- (BOOL)isDataFromNative;
- (void)setIsDataFromNative:(BOOL)arg1;
- (id)callInput;
- (void)setCallInput:(id)arg1;
- (BOOL)isSendButtonClicked;
- (void)setIsSendButtonClicked:(BOOL)arg1;
- (id)cardData;
- (void)setCardData:(id)arg1;
- (id)cardId;
- (void)setCardId:(id)arg1;
- (id)cardName;
- (void)setCardName:(id)arg1;
- (id)cachedImagePath;
- (void)setCachedImagePath:(id)arg1;
- (id)cachedThumbData;
- (void)setCachedThumbData:(id)arg1;
- (id)thumbMsgWrap;
- (void)setThumbMsgWrap:(id)arg1;
- (id /* block */)onThumbDownloadComplete;
- (void)setOnThumbDownloadComplete:(id /* block */)arg1;
- (BOOL)isImageDownloading;
- (void)setIsImageDownloading:(BOOL)arg1;
- (long long)reportMsgType;
- (void)setReportMsgType:(long long)arg1;
- (long long)reportSubMsgType;
- (void)setReportSubMsgType:(long long)arg1;
- (void).cxx_destruct;
@end
