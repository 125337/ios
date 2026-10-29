@interface FLTNewLifeCardImgInfo : NSObject
{
    NSString * _thumbUrl; // +0x8
    NSString * _thumbUrlToken; // +0x10
    NSString * _thumbLocalPath; // +0x18
    NSString * _url; // +0x20
    NSString * _urlToken; // +0x28
    NSString * _localPath; // +0x30
    NSString * _decodeKey; // +0x38
    FLTPhotoCropInfo * _cropInfo; // +0x40
    FLTPictureCropInfo * _picCropInfo; // +0x48
    NSNumber * _width; // +0x50
    NSNumber * _height; // +0x58
}
+ (id)makeWithThumbUrl:(id)arg1 thumbUrlToken:(id)arg2 thumbLocalPath:(id)arg3 url:(id)arg4 urlToken:(id)arg5 localPath:(id)arg6 decodeKey:(id)arg7 cropInfo:(id)arg8 picCropInfo:(id)arg9 width:(id)arg10 height:(id)arg11;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)thumbUrlToken;
- (void)setThumbUrlToken:(id)arg1;
- (id)thumbLocalPath;
- (void)setThumbLocalPath:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)urlToken;
- (void)setUrlToken:(id)arg1;
- (id)localPath;
- (void)setLocalPath:(id)arg1;
- (id)decodeKey;
- (void)setDecodeKey:(id)arg1;
- (id)cropInfo;
- (void)setCropInfo:(id)arg1;
- (id)picCropInfo;
- (void)setPicCropInfo:(id)arg1;
- (id)width;
- (void)setWidth:(id)arg1;
- (id)height;
- (void)setHeight:(id)arg1;
- (void).cxx_destruct;
@end

