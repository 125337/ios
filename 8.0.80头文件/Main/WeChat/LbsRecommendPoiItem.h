@interface LbsRecommendPoiItem : MMObject
{
    NSString * nsTitle; // +0x8
    NSString * nsSubTitle; // +0x10
    NSString * nsDesc; // +0x18
    NSString * nsIconUrl; // +0x20
    NSString * nsJumpUrl; // +0x28
    NSString * nsSignature; // +0x30
    NSMutableArray * aryADIconUrlList; // +0x38
}
- (id)nsTitle;
- (void)setNsTitle:(id)arg1;
- (id)nsSubTitle;
- (void)setNsSubTitle:(id)arg1;
- (id)nsIconUrl;
- (void)setNsIconUrl:(id)arg1;
- (id)nsDesc;
- (void)setNsDesc:(id)arg1;
- (id)nsJumpUrl;
- (void)setNsJumpUrl:(id)arg1;
- (id)nsSignature;
- (void)setNsSignature:(id)arg1;
- (id)aryADIconUrlList;
- (void)setAryADIconUrlList:(id)arg1;
- (void).cxx_destruct;
@end
