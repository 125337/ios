@interface MSETransmitUrlData : MSETransmitData <PBCoding>
{
    NSString * title; // +0x18
    NSString * thumUrl; // +0x20
    NSString * contentUrl; // +0x28
    NSString * thumPath; // +0x30
    NSString * desc; // +0x38
}
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_thumUrl;
+ (void)PBArrayAdd_contentUrl;
+ (void)PBArrayAdd_thumPath;
+ (void)PBArrayAdd_desc;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)thumUrl;
- (void)setThumUrl:(id)arg1;
- (id)contentUrl;
- (void)setContentUrl:(id)arg1;
- (id)thumPath;
- (void)setThumPath:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (void).cxx_destruct;
@end

