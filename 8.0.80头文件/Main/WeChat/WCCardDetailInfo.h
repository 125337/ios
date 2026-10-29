@interface WCCardDetailInfo : MMObject
{
    NSString * _detailTitle; // +0x8
    NSString * _detailDesc; // +0x10
    NSString * _detailUrl; // +0x18
    NSArray * _detailImgList; // +0x20
    NSString * _detailAdTitle; // +0x28
}
- (id)detailTitle;
- (void)setDetailTitle:(id)arg1;
- (id)detailDesc;
- (void)setDetailDesc:(id)arg1;
- (id)detailUrl;
- (void)setDetailUrl:(id)arg1;
- (id)detailImgList;
- (void)setDetailImgList:(id)arg1;
- (id)detailAdTitle;
- (void)setDetailAdTitle:(id)arg1;
- (void).cxx_destruct;
@end
