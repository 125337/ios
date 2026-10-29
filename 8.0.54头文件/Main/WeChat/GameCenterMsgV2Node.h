@interface GameCenterMsgV2Node : NSObject
{
    BOOL _dontShowInMsgCenter; // +0x8
    BOOL _notInMsgCenter; // +0x9
    unsigned int _mergeCount; // +0xc
    unsigned int _quickResponseFlag; // +0x10
    GameCenterMsgSender * _msgSender; // +0x18
    GameJumpInfo * _jumpInfo; // +0x20
    GameJumpInfo * _mergeJumpInfo; // +0x28
    GameJumpInfo * _commentJumpInfo; // +0x30
    NSString * _primaryContent; // +0x38
    NSString * _minorContent; // +0x40
    NSString * _pictureUrl; // +0x48
    NSString * _sourceName; // +0x50
    NSString * _mergeId; // +0x58
    NSString * _actionDesc; // +0x60
    NSString * _actionText; // +0x68
    NSString * _quoteText; // +0x70
    NSString * _quickResponseId; // +0x78
}
- (BOOL)dontShowInMsgCenter;
- (void)setDontShowInMsgCenter:(BOOL)arg1;
- (id)msgSender;
- (void)setMsgSender:(id)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (id)mergeJumpInfo;
- (void)setMergeJumpInfo:(id)arg1;
- (id)commentJumpInfo;
- (void)setCommentJumpInfo:(id)arg1;
- (id)primaryContent;
- (void)setPrimaryContent:(id)arg1;
- (id)minorContent;
- (void)setMinorContent:(id)arg1;
- (id)pictureUrl;
- (void)setPictureUrl:(id)arg1;
- (id)sourceName;
- (void)setSourceName:(id)arg1;
- (id)mergeId;
- (void)setMergeId:(id)arg1;
- (unsigned int)mergeCount;
- (void)setMergeCount:(unsigned int)arg1;
- (BOOL)notInMsgCenter;
- (void)setNotInMsgCenter:(BOOL)arg1;
- (id)actionDesc;
- (void)setActionDesc:(id)arg1;
- (id)actionText;
- (void)setActionText:(id)arg1;
- (id)quoteText;
- (void)setQuoteText:(id)arg1;
- (id)quickResponseId;
- (void)setQuickResponseId:(id)arg1;
- (unsigned int)quickResponseFlag;
- (void)setQuickResponseFlag:(unsigned int)arg1;
- (void).cxx_destruct;
@end

