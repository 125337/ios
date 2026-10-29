@interface GCChatBaseCellModel : GCBaseCellModel <WCActionSheetDelegate>
{
    BOOL _isLocalMessage; // +0x8
    BOOL _isPlaceHoldMessage; // +0x9
    BOOL _isMessageCell; // +0xa
    BOOL _isInvisible; // +0xb
    BOOL _hasRoleIcon; // +0xc
    BOOL _canBeAt; // +0xd
    BOOL _canBeKicked; // +0xe
    BOOL _disableLongPress; // +0xf
    BOOL _hideTopLine; // +0x10
    BOOL _hidePubbleView; // +0x11
    BOOL _isCurChannelAllChannel; // +0x12
    BOOL _isCurChannelChosenChannel; // +0x13
    BOOL _hasTimeNode; // +0x14
    BOOL _highLight; // +0x15
    unsigned int _roleType; // +0x18
    NSString * _userName; // +0x20
    NSString * _userNickName; // +0x28
    NSString * _headImgUrl; // +0x30
    NSString * _tagDesc; // +0x38
    UIColor * _tagColor; // +0x40
    NSString * _roleStr; // +0x48
    UIColor * _roleColor; // +0x50
    UIColor * _roleBgColor; // +0x58
    NSString * _roleIconUrl; // +0x60
    JumpInfo * _roleJumpInfo; // +0x68
    GCContentModel * _contentModel; // +0x70
    unsigned long long _messageSendStatus; // +0x78
    NSString * _reportUrl; // +0x80
    GCChatBaseCellLayoutInfo * _layoutInfo; // +0x88
    id <GCChatBaseCellModelDelegate> _chatCellDelegate; // +0x90
    unsigned long long _seq; // +0x98
    NSString * _cliMsgId; // +0xa0
    SendChatroomMsgRequest * _sendMsgRequest; // +0xa8
    ChatroomUserData * _chatRoomUserData; // +0xb0
    GCChatRoomMessage * _chatRoomMessage; // +0xb8
    NSString * _statusIconUrl; // +0xc0
    UIColor * _statusBgColor; // +0xc8
    long long _channelId; // +0xd0
    Channel * _channel; // +0xd8
    unsigned long long _bindCellModelSeq; // +0xe0
    UIEdgeInsets _customEdgeInsets; // +0xe8
}
+ (Class)classForMessageType:(unsigned long long)arg1 subMessageType:(unsigned long long)arg2;
+ (id)cellModelFromChatroomMessage:(id)arg1;
- (id)initWithChatroomMessage:(id)arg1;
- (void)updateWithUserData:(id)arg1;
- (void)updateContentModel;
- (void)onUpdateContentModel;
- (void)configureReportModel:(id)arg1;
- (void)onGetBindReport:(id)arg1;
- (BOOL)isServerMsg;
- (void)onChatroomMessageInitEnd;
- (Class)bindCellClass;
- (CGSize)cellSizeForCollectionView:(id)arg1;
- (void)onCopyTranslate:(id)arg1;
- (void)onFavoriteTranslate:(id)arg1;
- (void)showMemuController:(id)arg1;
- (id)menuItemWithSvgStr:(id)arg1 title:(id)arg2 selector:(SEL)arg3 posId:(unsigned long long)arg4;
- (BOOL)isChoosenChannel;
- (BOOL)isAllChannel;
- (BOOL)customHandleReSend;
- (BOOL)disableRightLoadingView;
- (BOOL)showChannelName;
- (void)handleChoose;
- (void)handleLocate;
- (void)handleCopy;
- (void)didClickAt;
- (void)handleAt;
- (void)handleReport;
- (void)handleVoteMenuItem;
- (void)handleVote:(unsigned long long)arg1;
- (void)handleBlock;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleManageMember;
- (void)handleHeadTap;
- (void)handleHeadDoubleClick;
- (void)handleRevokeTickle;
- (void)onRoleInfoTap;
- (id)bindChatBaseCell;
- (BOOL)subClassHandleLongPress:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (void)handleJumpInfo:(id)arg1;
- (void)endHightLight;
- (id)chatBaseCell;
- (void)setHighLight:(BOOL)arg1;
- (void)playHighlightAnimation;
- (void)clearCachedLayoutInfo;
- (BOOL)isMySelf;
- (unsigned long long)supportedMenuOptions;
- (id)spaceAndTagDesc;
- (void)exitRoom;
- (void)onExitRoom;
- (BOOL)isLocalMessage;
- (void)setIsLocalMessage:(BOOL)arg1;
- (BOOL)isPlaceHoldMessage;
- (void)setIsPlaceHoldMessage:(BOOL)arg1;
- (BOOL)isMessageCell;
- (void)setIsMessageCell:(BOOL)arg1;
- (BOOL)isInvisible;
- (void)setIsInvisible:(BOOL)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)userNickName;
- (void)setUserNickName:(id)arg1;
- (id)headImgUrl;
- (void)setHeadImgUrl:(id)arg1;
- (id)tagDesc;
- (void)setTagDesc:(id)arg1;
- (id)tagColor;
- (void)setTagColor:(id)arg1;
- (unsigned int)roleType;
- (void)setRoleType:(unsigned int)arg1;
- (id)roleStr;
- (void)setRoleStr:(id)arg1;
- (id)roleColor;
- (void)setRoleColor:(id)arg1;
- (id)roleBgColor;
- (void)setRoleBgColor:(id)arg1;
- (BOOL)hasRoleIcon;
- (void)setHasRoleIcon:(BOOL)arg1;
- (id)roleIconUrl;
- (void)setRoleIconUrl:(id)arg1;
- (id)roleJumpInfo;
- (void)setRoleJumpInfo:(id)arg1;
- (id)contentModel;
- (void)setContentModel:(id)arg1;
- (unsigned long long)messageSendStatus;
- (void)setMessageSendStatus:(unsigned long long)arg1;
- (id)reportUrl;
- (void)setReportUrl:(id)arg1;
- (id)layoutInfo;
- (void)setLayoutInfo:(id)arg1;
- (BOOL)canBeAt;
- (void)setCanBeAt:(BOOL)arg1;
- (BOOL)canBeKicked;
- (void)setCanBeKicked:(BOOL)arg1;
- (id)chatCellDelegate;
- (void)setChatCellDelegate:(id)arg1;
- (unsigned long long)seq;
- (void)setSeq:(unsigned long long)arg1;
- (id)cliMsgId;
- (void)setCliMsgId:(id)arg1;
- (BOOL)disableLongPress;
- (void)setDisableLongPress:(BOOL)arg1;
- (id)sendMsgRequest;
- (void)setSendMsgRequest:(id)arg1;
- (id)chatRoomUserData;
- (void)setChatRoomUserData:(id)arg1;
- (id)chatRoomMessage;
- (void)setChatRoomMessage:(id)arg1;
- (BOOL)hideTopLine;
- (void)setHideTopLine:(BOOL)arg1;
- (BOOL)hidePubbleView;
- (void)setHidePubbleView:(BOOL)arg1;
- (UIEdgeInsets)customEdgeInsets;
- (void)setCustomEdgeInsets:(UIEdgeInsets)arg1;
- (id)statusIconUrl;
- (void)setStatusIconUrl:(id)arg1;
- (id)statusBgColor;
- (void)setStatusBgColor:(id)arg1;
- (BOOL)isCurChannelAllChannel;
- (void)setIsCurChannelAllChannel:(BOOL)arg1;
- (BOOL)isCurChannelChosenChannel;
- (void)setIsCurChannelChosenChannel:(BOOL)arg1;
- (long long)channelId;
- (void)setChannelId:(long long)arg1;
- (id)channel;
- (void)setChannel:(id)arg1;
- (BOOL)hasTimeNode;
- (void)setHasTimeNode:(BOOL)arg1;
- (unsigned long long)bindCellModelSeq;
- (void)setBindCellModelSeq:(unsigned long long)arg1;
- (BOOL)isHighLight;
- (void).cxx_destruct;
@end

