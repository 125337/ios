@interface BizXiaoweiAskItem : NSObject
{
    NSString * _url; // +0x8
    NSString * _title; // +0x10
    NSString * _desc; // +0x18
    NSString * _coverUrl; // +0x20
    NSString * _srcUsername; // +0x28
    NSString * _displayUsername; // +0x30
    NSNumber * _itemShowType; // +0x38
}
+ (id)makeWithUrl:(id)arg1 title:(id)arg2 desc:(id)arg3 coverUrl:(id)arg4 srcUsername:(id)arg5 displayUsername:(id)arg6 itemShowType:(id)arg7;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (id)srcUsername;
- (void)setSrcUsername:(id)arg1;
- (id)displayUsername;
- (void)setDisplayUsername:(id)arg1;
- (id)itemShowType;
- (void)setItemShowType:(id)arg1;
- (void).cxx_destruct;
@end
