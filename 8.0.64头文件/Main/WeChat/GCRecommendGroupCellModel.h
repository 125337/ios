@interface GCRecommendGroupCellModel : GCBaseGroupCellModel
{
    BOOL _isLocked; // +0x8
    BOOL _canOnlooker; // +0x9
    BOOL _isFirst; // +0xa
    BOOL _canJoin; // +0xb
    NSString * _userIconUrl; // +0x10
    NSMutableArray * _conditionArray; // +0x18
    ChatroomRecInfo * _chatroomRecInfo; // +0x20
    NSMutableArray * _bulletMsgList; // +0x28
    GCBulletMsgFlowView * _bulletFlowView; // +0x30
}
+ (id)getEmptyStateCellModelWithSize:(CGSize)arg1;
- (void)configureReportModel:(id)arg1;
- (void)setBulletMsgList:(id)arg1;
- (Class)bindCellClass;
- (double)widthForCondition:(id)arg1;
- (double)widthForTag:(id)arg1;
- (double)conditionViewHeight:(double)arg1;
- (double)tagLineViewHeight:(double)arg1;
- (CGSize)cellSizeForCollectionView:(id)arg1;
- (double)rightSpace;
- (id)rightBtnText;
- (void)openChatRoom:(BOOL)arg1;
- (void)handleDidSelect;
- (unsigned long long)actionStatusForAutoJoin:(BOOL)arg1;
- (double)condtionGroupMaxWidthForWidth:(double)arg1;
- (BOOL)isLocked;
- (void)setIsLocked:(BOOL)arg1;
- (BOOL)canOnlooker;
- (void)setCanOnlooker:(BOOL)arg1;
- (id)userIconUrl;
- (void)setUserIconUrl:(id)arg1;
- (BOOL)isFirst;
- (void)setIsFirst:(BOOL)arg1;
- (id)conditionArray;
- (void)setConditionArray:(id)arg1;
- (BOOL)canJoin;
- (void)setCanJoin:(BOOL)arg1;
- (id)chatroomRecInfo;
- (void)setChatroomRecInfo:(id)arg1;
- (id)bulletMsgList;
- (id)bulletFlowView;
- (void)setBulletFlowView:(id)arg1;
- (void).cxx_destruct;
@end
