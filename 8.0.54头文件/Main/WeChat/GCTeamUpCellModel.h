@interface GCTeamUpCellModel : GCChatBaseCellModel
{
    NSString * _backgroundImgUrl; // +0x8
    NSString * _topTitle; // +0x10
    NSString * _midesc; // +0x18
    NSString * _bottomStatus; // +0x20
    double _bottomImageWidth; // +0x28
    NSString * _bottomImageUrl; // +0x30
    NSString * _rightBtnTitle; // +0x38
    JumpInfo * _jumpInfo; // +0x40
    ChatroomMsgApp * _msgApp; // +0x48
}
- (id)initWithChatroomMessage:(id)arg1;
- (Class)bindCellClass;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)backgroundImgUrl;
- (void)setBackgroundImgUrl:(id)arg1;
- (id)topTitle;
- (void)setTopTitle:(id)arg1;
- (id)midesc;
- (void)setMidesc:(id)arg1;
- (id)bottomStatus;
- (void)setBottomStatus:(id)arg1;
- (double)bottomImageWidth;
- (void)setBottomImageWidth:(double)arg1;
- (id)bottomImageUrl;
- (void)setBottomImageUrl:(id)arg1;
- (id)rightBtnTitle;
- (void)setRightBtnTitle:(id)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (id)msgApp;
- (void)setMsgApp:(id)arg1;
- (void).cxx_destruct;
@end

