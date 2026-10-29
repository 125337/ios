@interface UDRSecondCutPromotionItem : NSObject
{
    NSString * _iconPath; // +0x8
    NSString * _text_zh_Hans; // +0x10
    NSString * _text_zh_Hant; // +0x18
    NSString * _text_en; // +0x20
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)initWithJSONString:(id)arg1;
- (id)text;
- (id)iconPath;
- (void)setIconPath:(id)arg1;
- (id)text_zh_Hans;
- (void)setText_zh_Hans:(id)arg1;
- (id)text_zh_Hant;
- (void)setText_zh_Hant:(id)arg1;
- (id)text_en;
- (void)setText_en:(id)arg1;
- (void).cxx_destruct;
@end

