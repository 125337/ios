@interface WAWxMaterialAppInfo : NSObject
{
    NSString * _mime; // +0x8
    NSString * _fileExt; // +0x10
    NSArray * _recentAppArr; // +0x18
    NSArray * _allAppArr; // +0x20
    double _reqTimeLast; // +0x28
}
- (id)mime;
- (void)setMime:(id)arg1;
- (id)fileExt;
- (void)setFileExt:(id)arg1;
- (id)recentAppArr;
- (void)setRecentAppArr:(id)arg1;
- (id)allAppArr;
- (void)setAllAppArr:(id)arg1;
- (double)reqTimeLast;
- (void)setReqTimeLast:(double)arg1;
- (void).cxx_destruct;
@end

