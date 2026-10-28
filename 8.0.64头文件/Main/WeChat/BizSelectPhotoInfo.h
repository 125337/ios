@interface BizSelectPhotoInfo : NSObject
{
    NSString * _photoId; // +0x8
    NSString * _path; // +0x10
    NSNumber * _width; // +0x18
    NSNumber * _height; // +0x20
    BizPhotoExtInfo * _photoExtInfo; // +0x28
    NSString * _mimeType; // +0x30
}
+ (id)makeWithPhotoId:(id)arg1 path:(id)arg2 width:(id)arg3 height:(id)arg4 photoExtInfo:(id)arg5 mimeType:(id)arg6;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)photoId;
- (void)setPhotoId:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)width;
- (void)setWidth:(id)arg1;
- (id)height;
- (void)setHeight:(id)arg1;
- (id)photoExtInfo;
- (void)setPhotoExtInfo:(id)arg1;
- (id)mimeType;
- (void)setMimeType:(id)arg1;
- (void).cxx_destruct;
@end
