@interface BizPublishArticleInfo : NSObject
{
    NSNumber * _msgId; // +0x8
    NSNumber * _openScene; // +0x10
    NSNumber * _subScene; // +0x18
    NSString * _url; // +0x20
    NSNumber * _itemShowType; // +0x28
    NSString * _userName; // +0x30
    NSString * _nickName; // +0x38
    NSString * _title; // +0x40
    NSString * _coverUrl; // +0x48
    NSNumber * _bizSessionId; // +0x50
    NSString * _jumpPaths; // +0x58
    NSNumber * _hideShareMenu; // +0x60
}
+ (id)makeWithMsgId:(id)arg1 openScene:(id)arg2 subScene:(id)arg3 url:(id)arg4 itemShowType:(id)arg5 userName:(id)arg6 nickName:(id)arg7 title:(id)arg8 coverUrl:(id)arg9 bizSessionId:(id)arg10 jumpPaths:(id)arg11 hideShareMenu:(id)arg12;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)msgId;
- (void)setMsgId:(id)arg1;
- (id)openScene;
- (void)setOpenScene:(id)arg1;
- (id)subScene;
- (void)setSubScene:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)itemShowType;
- (void)setItemShowType:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (id)bizSessionId;
- (void)setBizSessionId:(id)arg1;
- (id)jumpPaths;
- (void)setJumpPaths:(id)arg1;
- (id)hideShareMenu;
- (void)setHideShareMenu:(id)arg1;
- (void).cxx_destruct;
@end
