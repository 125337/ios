@interface BSBusinessContactItem : NSObject
{
    NSString * _nickName; // +0x8
    BusinessDetailInfo * _detailInfo; // +0x10
    SearchOrRecommendItemNew * _contactItem; // +0x18
    BSBusinessServiceInfo * _serviceInfo; // +0x20
    CContact * _contact; // +0x28
    NSString * _jumpUrl; // +0x30
}
+ (id)fromServerObj:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)detailInfo;
- (void)setDetailInfo:(id)arg1;
- (id)contactItem;
- (void)setContactItem:(id)arg1;
- (id)serviceInfo;
- (void)setServiceInfo:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)jumpUrl;
- (void)setJumpUrl:(id)arg1;
- (void).cxx_destruct;
@end
