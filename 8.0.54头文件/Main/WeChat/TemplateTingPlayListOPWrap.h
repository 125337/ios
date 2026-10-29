@interface TemplateTingPlayListOPWrap : NSObject <YYModel>
{
    unsigned int _type; // +0x8
    unsigned int _listType; // +0xc
    NSString * _categoryId; // +0x10
    NSString * _name; // +0x18
    NSString * _cover; // +0x20
    NSString * _subTitle; // +0x28
    NSString * _generalString; // +0x30
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)tingPlaylistOPWrapWithJSON:(id)arg1;
- (id)toCategoryItem;
- (id)categoryId;
- (void)setCategoryId:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (unsigned int)listType;
- (void)setListType:(unsigned int)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)cover;
- (void)setCover:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (id)generalString;
- (void)setGeneralString:(id)arg1;
- (void).cxx_destruct;
@end

