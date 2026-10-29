@interface CBTAsstBoardTimedSendMsgConfirmViewModel : CBTAsstBoardBaseViewModel
{
    BOOL _isDataFromNative; // +0x8
    BOOL _isButtonClicked; // +0x9
    NSString * _contact; // +0x10
    NSString * _scheduledTimeText; // +0x18
    NSString * _messageContent; // +0x20
    NSString * _headerText; // +0x28
    NSString * _buttonText; // +0x30
    NSString * _buttonActionKey; // +0x38
    NSString * _tailText; // +0x40
    NSDictionary * _cardData; // +0x48
    NSString * _cardId; // +0x50
    NSString * _cardName; // +0x58
    NSString * _tailHintText; // +0x60
}
- (id)initWithCardWrap:(id)arg1 delegate:(id)arg2;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (double)messageHeightWithWidth:(double)arg1;
- (id)getCellReuseId;
- (BOOL)isInteractive;
- (BOOL)isForwardable;
- (BOOL)shouldShowForwardMenuItem;
- (BOOL)shouldUseUnsupportedPlaceholderForForwardHistory;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)scheduledTimeText;
- (void)setScheduledTimeText:(id)arg1;
- (id)messageContent;
- (void)setMessageContent:(id)arg1;
- (id)headerText;
- (void)setHeaderText:(id)arg1;
- (id)buttonText;
- (void)setButtonText:(id)arg1;
- (id)buttonActionKey;
- (void)setButtonActionKey:(id)arg1;
- (id)tailText;
- (void)setTailText:(id)arg1;
- (BOOL)isDataFromNative;
- (void)setIsDataFromNative:(BOOL)arg1;
- (id)cardData;
- (void)setCardData:(id)arg1;
- (id)cardId;
- (void)setCardId:(id)arg1;
- (id)cardName;
- (void)setCardName:(id)arg1;
- (BOOL)isButtonClicked;
- (void)setIsButtonClicked:(BOOL)arg1;
- (id)tailHintText;
- (void)setTailHintText:(id)arg1;
- (void).cxx_destruct;
@end
