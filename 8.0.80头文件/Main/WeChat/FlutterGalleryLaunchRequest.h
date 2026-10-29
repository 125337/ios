@interface FlutterGalleryLaunchRequest : NSObject
{
    NSArray * _mediaItems; // +0x8
    long long _enterIndex; // +0x10
    FlutterGalleryMediaRect * _enterRect; // +0x18
    NSNumber * _disableAskXiaoWeiEntry; // +0x20
}
+ (id)makeWithMediaItems:(id)arg1 enterIndex:(long long)arg2 enterRect:(id)arg3 disableAskXiaoWeiEntry:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)mediaItems;
- (void)setMediaItems:(id)arg1;
- (long long)enterIndex;
- (void)setEnterIndex:(long long)arg1;
- (id)enterRect;
- (void)setEnterRect:(id)arg1;
- (id)disableAskXiaoWeiEntry;
- (void)setDisableAskXiaoWeiEntry:(id)arg1;
- (void).cxx_destruct;
@end
