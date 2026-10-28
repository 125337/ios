@interface BizMinimizeInfo : NSObject
{
    NSNumber * _localId; // +0x8
    NSNumber * _svrId; // +0x10
    NSString * _url; // +0x18
    NSString * _userName; // +0x20
    NSString * _nickName; // +0x28
    NSString * _title; // +0x30
    NSString * _coverUrl; // +0x38
    NSNumber * _itemShowType; // +0x40
    FlutterStandardTypedData * _coverImage; // +0x48
    FlutterStandardTypedData * _animatedImage; // +0x50
    BizRect * _animatedImageRect; // +0x58
}
+ (id)makeWithLocalId:(id)arg1 svrId:(id)arg2 url:(id)arg3 userName:(id)arg4 nickName:(id)arg5 title:(id)arg6 coverUrl:(id)arg7 itemShowType:(id)arg8 coverImage:(id)arg9 animatedImage:(id)arg10 animatedImageRect:(id)arg11;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)localId;
- (void)setLocalId:(id)arg1;
- (id)svrId;
- (void)setSvrId:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (id)itemShowType;
- (void)setItemShowType:(id)arg1;
- (id)coverImage;
- (void)setCoverImage:(id)arg1;
- (id)animatedImage;
- (void)setAnimatedImage:(id)arg1;
- (id)animatedImageRect;
- (void)setAnimatedImageRect:(id)arg1;
- (void).cxx_destruct;
@end
