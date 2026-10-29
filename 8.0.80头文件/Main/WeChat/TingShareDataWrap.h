@interface TingShareDataWrap : NSObject
{
    FlutterStandardTypedData * _tingItemData; // +0x8
    FlutterStandardTypedData * _categoryItemData; // +0x10
    FlutterStandardTypedData * _commentInfoData; // +0x18
    TingVideoShareData * _video; // +0x20
}
+ (id)makeWithTingItemData:(id)arg1 categoryItemData:(id)arg2 commentInfoData:(id)arg3 video:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)tingItemData;
- (void)setTingItemData:(id)arg1;
- (id)categoryItemData;
- (void)setCategoryItemData:(id)arg1;
- (id)commentInfoData;
- (void)setCommentInfoData:(id)arg1;
- (id)video;
- (void)setVideo:(id)arg1;
- (void).cxx_destruct;
@end
