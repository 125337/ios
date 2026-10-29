@interface MMFinderLiveNotifyStyleTopCommentPubbleSignLabelContainer : UIView
{
    MMLiveCommentDataItem * _commentItem; // +0x8
    NSMutableArray * _labelViewArr; // +0x10
    MMFinderLiveLiveRoleSignView * _mysteriousSignView; // +0x18
    MMFinderLiveLiveRoleSignView * _roleSignView; // +0x20
    MMFinderLiveGlobalRankSignView * _globalRankSignView; // +0x28
    MMFinderLiveMemberSignView * _memberSignView; // +0x30
    MMFinderLiveLiveRoleSignView * _shopMemberSignView; // +0x38
}
+ (CGSize)calcContainerSizeWithCommentItem:(id)arg1;
- (id)initWithCommentItem:(id)arg1;
- (CGSize)calcViewSize;
- (BOOL)checkHasViewNeedDisplay;
- (void)updateSubSignView;
- (void)layoutSubviews;
- (void)registerSubLabelView:(id)arg1;
- (void)updateSubSignViewFrame;
- (void)updateMysteriousSignView;
- (BOOL)needMysteriousSignView;
- (void)updateRoleSignView;
- (id)getRoleSignViewText;
- (BOOL)needRoleSignView;
- (void)updateGlobalRankSignView;
- (BOOL)needGlobalRankSignView;
- (void)updateMemberSignView;
- (BOOL)needMemberSignView;
- (void)updateShopMemberSignView;
- (BOOL)needShopMemberSignView;
- (id)labelViewArr;
- (id)commentItem;
- (void)setCommentItem:(id)arg1;
- (void)setLabelViewArr:(id)arg1;
- (id)mysteriousSignView;
- (void)setMysteriousSignView:(id)arg1;
- (id)roleSignView;
- (void)setRoleSignView:(id)arg1;
- (id)globalRankSignView;
- (void)setGlobalRankSignView:(id)arg1;
- (id)memberSignView;
- (void)setMemberSignView:(id)arg1;
- (id)shopMemberSignView;
- (void)setShopMemberSignView:(id)arg1;
- (void).cxx_destruct;
@end
