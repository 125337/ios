@interface BaseChatViewModel : NSObject <MessageComponentMultiSceneSupport>
{
    CBaseContact * m_chatContact; // +0x8
    double m_layoutWidth; // +0x10
    double m_cachedHeight; // +0x18
    id m_cellView; // +0x20
    BOOL _shouldReCreate; // +0x28
    unsigned long long _modelType; // +0x30
    unsigned long long _splitPosition; // +0x38
    double _createTime; // +0x40
    id <ChatViewModelDelegate> _delegate; // +0x48
    NSString * _chatSplitWording; // +0x50
}
- (id)messageWrap;
- (void)setCellView:(id)arg1;
- (id)cellView;
- (id)initWithChatContact:(id)arg1;
- (void)updateChatContact:(id)arg1;
- (void)updateChatContactAdminStatus:(BOOL)arg1;
- (id)cellViewClassName;
- (id)cellIdentifier;
- (double)sectionHeight;
- (BOOL)shouldLayoutIfNeeded;
- (double)rowHeight;
- (CGSize)measure:(CGSize)arg1;
- (void)resetLayoutCache;
- (void)updateLayouts;
- (void)updateLayoutsWithTryScroll:(BOOL)arg1 ReloadAll:(BOOL)arg2;
- (void)updateLayoutsWithoutReload;
- (long long)numberOfRowsInSection;
- (id)cellDataForRow:(unsigned long long)arg1;
- (BOOL)isHeadPart;
- (BOOL)isTailPart;
- (BOOL)isDisableEditMode;
- (BOOL)isUseLightStyle;
- (BOOL)isChatroomInDarkBkg;
- (BOOL)isShowInSubScene;
- (double)chatViewControllerWidth;
- (id)chatContact;
- (void)setChatContact:(id)arg1;
- (unsigned long long)modelType;
- (void)setModelType:(unsigned long long)arg1;
- (unsigned long long)splitPosition;
- (void)setSplitPosition:(unsigned long long)arg1;
- (double)createTime;
- (void)setCreateTime:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)shouldReCreate;
- (void)setShouldReCreate:(BOOL)arg1;
- (id)chatSplitWording;
- (void)setChatSplitWording:(id)arg1;
- (void).cxx_destruct;
@end
