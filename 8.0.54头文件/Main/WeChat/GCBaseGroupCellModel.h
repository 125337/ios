@interface GCBaseGroupCellModel : GCBaseCellModel
{
    BOOL _showRedDot; // +0x8
    id <GCBaseGroupCellModelDelegate> _groupCellModelDelegate; // +0x10
    NSString * _groupIconUrl; // +0x18
    NSString * _groupName; // +0x20
    NSString * _groupUserName; // +0x28
    UIColor * _midStrongNoticeColor; // +0x30
    NSString * _midStrongNoticeText; // +0x38
    NSString * _midDescText; // +0x40
    NSString * _bottomDescText; // +0x48
    NSString * _gameId; // +0x50
    ChatroomData * _chatroomData; // +0x58
}
+ (CGRect)getAnimationFromPosFromViewManager:(id)arg1 identifier:(id)arg2;
- (void)configureReportModel:(id)arg1;
- (void)openGameChatRoomWithConfig:(id)arg1 imgView:(id)arg2;
- (CGSize)cellSizeForCollectionView:(id)arg1;
- (double)groupCellHeight;
- (double)imgViewHeight;
- (double)rightSpace;
- (double)tagLineGroupMaxWidthForWidth:(double)arg1;
- (id)groupCellModelDelegate;
- (void)setGroupCellModelDelegate:(id)arg1;
- (id)groupIconUrl;
- (void)setGroupIconUrl:(id)arg1;
- (id)groupName;
- (void)setGroupName:(id)arg1;
- (id)groupUserName;
- (void)setGroupUserName:(id)arg1;
- (id)midStrongNoticeColor;
- (void)setMidStrongNoticeColor:(id)arg1;
- (id)midStrongNoticeText;
- (void)setMidStrongNoticeText:(id)arg1;
- (id)midDescText;
- (void)setMidDescText:(id)arg1;
- (id)bottomDescText;
- (void)setBottomDescText:(id)arg1;
- (id)gameId;
- (void)setGameId:(id)arg1;
- (BOOL)showRedDot;
- (void)setShowRedDot:(BOOL)arg1;
- (id)chatroomData;
- (void)setChatroomData:(id)arg1;
- (void).cxx_destruct;
@end

