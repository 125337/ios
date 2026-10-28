@interface SystemMessageViewModel : BaseMessageViewModel <ChatRoomHistoryMgrExt>
{
    NSMutableArray * m_contentTextStyles; // +0x60
    BOOL _hasParseForFold; // +0x68
    BOOL _isFirstAccess; // +0x69
    int _customRotorElementIndex; // +0x6c
    NSArray * _customRotorElements; // +0x70
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (id)accessibilityDescription;
- (void)setUpCustomRotorElementWithLinks:(id)arg1 withHandler:(id /* block */)arg2;
- (id)getCustomRotorItemResultWithPredicate:(id)arg1;
- (void)handleTranslate;
- (void)handleSayHello;
- (void)handleSpeakText;
- (double)systemTextFontSize;
- (long long)parserType;
- (void)onMessageForceUpdateLayout;
- (void)onHistoryMsgLoadFail:(id)arg1;
- (void)onHistoryMsgLoadSuccess:(id)arg1 attachHistoryMsg:(id)arg2;
- (id)contentTextStyles;
- (BOOL)hasParseForFold;
- (void)setHasParseForFold:(BOOL)arg1;
- (BOOL)isFirstAccess;
- (void)setIsFirstAccess:(BOOL)arg1;
- (int)customRotorElementIndex;
- (void)setCustomRotorElementIndex:(int)arg1;
- (id)customRotorElements;
- (void)setCustomRotorElements:(id)arg1;
- (void).cxx_destruct;
@end
