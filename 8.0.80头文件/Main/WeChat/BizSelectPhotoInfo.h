@interface BizSelectPhotoInfo : NSObject
{
    NSString * _photoId; // +0x8
    NSString * _path; // +0x10
    NSString * _originPath; // +0x18
    NSNumber * _width; // +0x20
    NSNumber * _height; // +0x28
    BizPhotoExtInfo * _photoExtInfo; // +0x30
    NSString * _mimeType; // +0x38
}
+ (id)makeWithPhotoId:(id)arg1 path:(id)arg2 originPath:(id)arg3 width:(id)arg4 height:(id)arg5 photoExtInfo:(id)arg6 mimeType:(id)arg7;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)photoId;
- (void)setPhotoId:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)originPath;
- (void)setOriginPath:(id)arg1;
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
