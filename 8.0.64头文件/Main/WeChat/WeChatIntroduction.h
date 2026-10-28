@interface WeChatIntroduction : NSObject <YYModel>
{
    NSString * _title; // +0x8
    NSString * _cover; // +0x10
    NSString * _jumpUrl; // +0x18
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)cover;
- (void)setCover:(id)arg1;
- (id)jumpUrl;
- (void)setJumpUrl:(id)arg1;
- (void).cxx_destruct;
@end
