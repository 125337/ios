@interface MultiPOIArticleInfo : NSObject
{
    NSString * _url; // +0x8
    NSString * _userName; // +0x10
    NSNumber * _itemShowType; // +0x18
    NSNumber * _openScene; // +0x20
    NSNumber * _subScene; // +0x28
    NSNumber * _bizSessionId; // +0x30
    NSString * _jumpPaths; // +0x38
}
+ (id)makeWithUrl:(id)arg1 userName:(id)arg2 itemShowType:(id)arg3 openScene:(id)arg4 subScene:(id)arg5 bizSessionId:(id)arg6 jumpPaths:(id)arg7;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)itemShowType;
- (void)setItemShowType:(id)arg1;
- (id)openScene;
- (void)setOpenScene:(id)arg1;
- (id)subScene;
- (void)setSubScene:(id)arg1;
- (id)bizSessionId;
- (void)setBizSessionId:(id)arg1;
- (id)jumpPaths;
- (void)setJumpPaths:(id)arg1;
- (void).cxx_destruct;
@end
