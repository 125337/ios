@interface BTLiveBarItemViewModel : NSObject <IContactMgrExt>
{
    BOOL _hasClick; // +0x8
    BOOL _isDefaultExpand; // +0x9
    BOOL _isExposedInLiveBar; // +0xa
    NSString * _nickName; // +0x10
    BTLiveBarItemView * _itemView; // +0x18
    CContact * _contact; // +0x20
    BrandFinderLiveInfo * _liveInfo; // +0x28
    UIColor * _cachedMainColor; // +0x30
}
+ (id)itemViewClassName;
- (id)init;
- (id)username;
- (id)headImgUrl;
- (id)title;
- (id)mainColor;
- (id)liveCoverUrl;
- (void)saveMainColor:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (id)nickName;
- (id)itemView;
- (void)setItemView:(id)arg1;
- (BOOL)hasClick;
- (void)setHasClick:(BOOL)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)liveInfo;
- (void)setLiveInfo:(id)arg1;
- (BOOL)isDefaultExpand;
- (void)setIsDefaultExpand:(BOOL)arg1;
- (BOOL)isExposedInLiveBar;
- (void)setIsExposedInLiveBar:(BOOL)arg1;
- (id)cachedMainColor;
- (void)setCachedMainColor:(id)arg1;
- (void).cxx_destruct;
@end

