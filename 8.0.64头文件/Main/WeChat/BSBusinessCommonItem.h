@interface BSBusinessCommonItem : NSObject
{
    NSString * _title; // +0x8
    NSString * _desc; // +0x10
    NSString * _thumbUrl; // +0x18
    BusinessDetailInfo * _detailInfo; // +0x20
    BusinessExtendInfo * _extendInfo; // +0x28
    BusinessActionInfo * _actionInfo; // +0x30
}
+ (id)fromServerObj:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)detailInfo;
- (void)setDetailInfo:(id)arg1;
- (id)extendInfo;
- (void)setExtendInfo:(id)arg1;
- (id)actionInfo;
- (void)setActionInfo:(id)arg1;
- (void).cxx_destruct;
@end
