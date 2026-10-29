@interface BizAlbumUrlInfo : NSObject
{
    NSNumber * _openScene; // +0x8
    NSNumber * _subScene; // +0x10
    NSString * _url; // +0x18
    NSNumber * _itemShowType; // +0x20
}
+ (id)makeWithOpenScene:(id)arg1 subScene:(id)arg2 url:(id)arg3 itemShowType:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)openScene;
- (void)setOpenScene:(id)arg1;
- (id)subScene;
- (void)setSubScene:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)itemShowType;
- (void)setItemShowType:(id)arg1;
- (void).cxx_destruct;
@end
