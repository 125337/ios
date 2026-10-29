@interface MMWebViewControllerShareData : NSObject
{
    NSString * _title; // +0x8
    NSString * _desc; // +0x10
    NSString * _imageUrl; // +0x18
    NSString * _link; // +0x20
    NSString * _appId; // +0x28
    NSDictionary * _reportExtInfo; // +0x30
    NSString * _fromScene; // +0x38
    NSString * _floatBallTitle; // +0x40
}
- (id)description;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)imageUrl;
- (void)setImageUrl:(id)arg1;
- (id)link;
- (void)setLink:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)reportExtInfo;
- (void)setReportExtInfo:(id)arg1;
- (id)fromScene;
- (void)setFromScene:(id)arg1;
- (id)floatBallTitle;
- (void)setFloatBallTitle:(id)arg1;
- (void).cxx_destruct;
@end
