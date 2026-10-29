@interface GCInteractCellModel : GCBaseCellModel
{
    BOOL _isVoted; // +0x8
    int _quickResponseFlag; // +0xc
    int _alreadyMergedCount; // +0x10
    unsigned int _relationType; // +0x14
    NSString * _titleName; // +0x18
    NSString * _bodyText; // +0x20
    NSString * _actionDesc; // +0x28
    NSString * _actionText; // +0x30
    NSString * _quoteText; // +0x38
    NSString * _quickResponseContentId; // +0x40
    NSArray * _headUrlArray; // +0x48
    GameJumpInfo * _aggregateJumpInfo; // +0x50
    GameJumpInfo * _commentJumpInfo; // +0x58
    NSString * _avatarUrl; // +0x60
    NSString * _headJumpUrl; // +0x68
    NSString * _rightImgUrl; // +0x70
    NSString * _timeStr; // +0x78
    GameCenterMsgSender * _msgSender; // +0x80
    id <GCInteractCellDelegate> _interactDelegate; // +0x88
}
- (Class)bindCellClass;
- (BOOL)hasQuickReply;
- (BOOL)hasQuickZan;
- (BOOL)hasFollowBtn;
- (BOOL)hasBtmActionView;
- (BOOL)hasMergeBtn;
- (double)cellHeight;
- (CGSize)cellSizeForCollectionView:(id)arg1;
- (id)titleName;
- (void)setTitleName:(id)arg1;
- (id)bodyText;
- (void)setBodyText:(id)arg1;
- (id)actionDesc;
- (void)setActionDesc:(id)arg1;
- (id)actionText;
- (void)setActionText:(id)arg1;
- (id)quoteText;
- (void)setQuoteText:(id)arg1;
- (id)quickResponseContentId;
- (void)setQuickResponseContentId:(id)arg1;
- (int)quickResponseFlag;
- (void)setQuickResponseFlag:(int)arg1;
- (int)alreadyMergedCount;
- (void)setAlreadyMergedCount:(int)arg1;
- (id)headUrlArray;
- (void)setHeadUrlArray:(id)arg1;
- (id)aggregateJumpInfo;
- (void)setAggregateJumpInfo:(id)arg1;
- (id)commentJumpInfo;
- (void)setCommentJumpInfo:(id)arg1;
- (id)avatarUrl;
- (void)setAvatarUrl:(id)arg1;
- (id)headJumpUrl;
- (void)setHeadJumpUrl:(id)arg1;
- (id)rightImgUrl;
- (void)setRightImgUrl:(id)arg1;
- (id)timeStr;
- (void)setTimeStr:(id)arg1;
- (unsigned int)relationType;
- (void)setRelationType:(unsigned int)arg1;
- (BOOL)isVoted;
- (void)setIsVoted:(BOOL)arg1;
- (id)msgSender;
- (void)setMsgSender:(id)arg1;
- (id)interactDelegate;
- (void)setInteractDelegate:(id)arg1;
- (void).cxx_destruct;
@end

