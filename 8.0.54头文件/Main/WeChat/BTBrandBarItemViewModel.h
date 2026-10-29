@interface BTBrandBarItemViewModel : NSObject <IContactMgrExt, BrandTimelineMsgMgrExt, BTBarItemViewModelProtocol>
{
    BOOL _hasLine; // +0x8
    BOOL _isLiveForcePreposed; // +0x9
    NSString * _username; // +0x10
    NSString * _nickName; // +0x18
    BTBaseBarItemView * _barItemView; // +0x20
    CContact * _contact; // +0x28
}
+ (id)itemViewClassName;
- (id)init;
- (id)headImgUrl;
- (id)title;
- (BOOL)hasNewMemberContent;
- (BOOL)hasGreenDot;
- (BOOL)hasNewFinderLiving;
- (BOOL)isBrandLiving;
- (unsigned long long)greenDotType;
- (BOOL)hasArrow;
- (BOOL)isFinder;
- (BOOL)isMember;
- (id)contactData;
- (void)onModifyContact:(id)arg1;
- (void)onUpdateOftenReadContactByEnterSession:(id)arg1;
- (void)onUpdateOftenReadContactByEnterProfile:(id)arg1;
- (void)onUpdateOftenReadContactByExposeFlowListItemCellWithUserName:(id)arg1;
- (void)onUpdateOftenReadContactByEnterFinderMember:(id)arg1;
- (void)onUpdateOftenReadContactByOpenLive:(id)arg1;
- (id)username;
- (id)nickName;
- (BOOL)hasLine;
- (void)setHasLine:(BOOL)arg1;
- (id)barItemView;
- (void)setBarItemView:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (BOOL)isLiveForcePreposed;
- (void)setIsLiveForcePreposed:(BOOL)arg1;
- (void).cxx_destruct;
@end

