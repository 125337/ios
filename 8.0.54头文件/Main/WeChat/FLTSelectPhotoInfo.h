@interface FLTSelectPhotoInfo : NSObject
{
    NSString * _photoId; // +0x8
    NSString * _path; // +0x10
    long long _width; // +0x18
    long long _height; // +0x20
    FLTPhotoCropInfo * _cropInfo; // +0x28
}
+ (id)makeWithPhotoId:(id)arg1 path:(id)arg2 width:(long long)arg3 height:(long long)arg4 cropInfo:(id)arg5;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)photoId;
- (void)setPhotoId:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (long long)width;
- (void)setWidth:(long long)arg1;
- (long long)height;
- (void)setHeight:(long long)arg1;
- (id)cropInfo;
- (void)setCropInfo:(id)arg1;
- (void).cxx_destruct;
@end

