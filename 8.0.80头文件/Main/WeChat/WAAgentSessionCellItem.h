@interface WAAgentSessionCellItem : NSObject
{
    BOOL _isFromUser; // +0x8
    BOOL _authCardCompleted; // +0x9
    BOOL _authCardTitleResolved; // +0xa
    BOOL _authCardViewDidApplyCompleted; // +0xb
    BOOL _authCardIsIgnored; // +0xc
    int _state; // +0x10
    unsigned int _containerId; // +0x14
    NSString * _messageId; // +0x18
    unsigned long long _cellType; // +0x20
    NSString * _text; // +0x28
    double _containerHeight; // +0x30
    double _containerWidth; // +0x38
    NSString * _sectionId; // +0x40
    NSString * _weappName; // +0x48
    Agent2ClientEvent_RenderCardData * _renderCardData; // +0x50
    WAAgentCardRelatedPage * _relatedPage; // +0x58
    NSString * _context; // +0x60
    NSArray * _images; // +0x68
    NSArray * _fileItems; // +0x70
    NSArray * _suggestions; // +0x78
    NSString * _weAppCardXml; // +0x80
    NSString * _weAppCardTitleOverride; // +0x88
    WAAgentAuthCardSession * _authCardSession; // +0x90
    WAAgentAuthCardView * _authCardView; // +0x98
    NSString * _authCardTitle; // +0xa0
    NSString * _authCardTailText; // +0xa8
    double _authCardHeight; // +0xb0
    double _authCardHeightMeasuredWidth; // +0xb8
    NSMutableArray * _stackContainerIds; // +0xc0
    NSMutableDictionary * _containerIdToFrameIdMap; // +0xc8
    NSMutableDictionary * _containerIdToExpiredTextMap; // +0xd0
    NSString * _expiredText; // +0xd8
}
+ (id)containerItemWithMessageId:(id)arg1 sectionId:(id)arg2 height:(double)arg3 containerId:(unsigned int)arg4 context:(id)arg5;
+ (id)promptItemWithMessageId:(id)arg1 text:(id)arg2;
+ (id)richTextItemWithMessageId:(id)arg1 text:(id)arg2;
+ (id)thinkingItemWithMessageId:(id)arg1 state:(int)arg2 text:(id)arg3;
+ (id)imageItemWithMessageId:(id)arg1 images:(id)arg2 isFromUser:(BOOL)arg3;
+ (id)suggestionsItemWithMessageId:(id)arg1 suggestions:(id)arg2;
+ (id)fileItemWithMessageId:(id)arg1 fileItems:(id)arg2 isFromUser:(BOOL)arg3;
+ (id)weAppCardItemWithMessageId:(id)arg1 xml:(id)arg2;
+ (id)authCardItemWithMessageId:(id)arg1 session:(id)arg2;
- (BOOL)hasContainerId:(unsigned int)arg1;
- (id)messageId;
- (void)setMessageId:(id)arg1;
- (unsigned long long)cellType;
- (void)setCellType:(unsigned long long)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (int)state;
- (void)setState:(int)arg1;
- (double)containerHeight;
- (void)setContainerHeight:(double)arg1;
- (double)containerWidth;
- (void)setContainerWidth:(double)arg1;
- (unsigned int)containerId;
- (void)setContainerId:(unsigned int)arg1;
- (id)sectionId;
- (void)setSectionId:(id)arg1;
- (id)weappName;
- (void)setWeappName:(id)arg1;
- (id)renderCardData;
- (void)setRenderCardData:(id)arg1;
- (id)relatedPage;
- (void)setRelatedPage:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (id)images;
- (void)setImages:(id)arg1;
- (id)fileItems;
- (void)setFileItems:(id)arg1;
- (BOOL)isFromUser;
- (void)setIsFromUser:(BOOL)arg1;
- (id)suggestions;
- (void)setSuggestions:(id)arg1;
- (id)weAppCardXml;
- (void)setWeAppCardXml:(id)arg1;
- (id)weAppCardTitleOverride;
- (void)setWeAppCardTitleOverride:(id)arg1;
- (id)authCardSession;
- (void)setAuthCardSession:(id)arg1;
- (id)authCardView;
- (void)setAuthCardView:(id)arg1;
- (BOOL)authCardCompleted;
- (void)setAuthCardCompleted:(BOOL)arg1;
- (id)authCardTitle;
- (void)setAuthCardTitle:(id)arg1;
- (BOOL)authCardTitleResolved;
- (void)setAuthCardTitleResolved:(BOOL)arg1;
- (BOOL)authCardViewDidApplyCompleted;
- (void)setAuthCardViewDidApplyCompleted:(BOOL)arg1;
- (id)authCardTailText;
- (void)setAuthCardTailText:(id)arg1;
- (BOOL)authCardIsIgnored;
- (void)setAuthCardIsIgnored:(BOOL)arg1;
- (double)authCardHeight;
- (void)setAuthCardHeight:(double)arg1;
- (double)authCardHeightMeasuredWidth;
- (void)setAuthCardHeightMeasuredWidth:(double)arg1;
- (id)stackContainerIds;
- (void)setStackContainerIds:(id)arg1;
- (id)containerIdToFrameIdMap;
- (void)setContainerIdToFrameIdMap:(id)arg1;
- (id)containerIdToExpiredTextMap;
- (void)setContainerIdToExpiredTextMap:(id)arg1;
- (id)expiredText;
- (void)setExpiredText:(id)arg1;
- (void).cxx_destruct;
@end
