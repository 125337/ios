@interface MJImageComposingExportAssetDesc : NSObject
{
    NSString * _imageFilePath; // +0x8
    NSString * _videoFilePath; // +0x10
    OMJImageCropDesc * _cropDesc; // +0x18
    OMJImageScene * _scene; // +0x20
}
- (id)initWithImageFilePath:(id)arg1 scene:(id)arg2;
- (id)initWithImageFilePath:(id)arg1 videoFilePath:(id)arg2 scene:(id)arg3;
- (void)setupData;
- (BOOL)isLivePhoto;
- (id)description;
- (id)imageFilePath;
- (id)videoFilePath;
- (id)cropDesc;
- (id)scene;
- (void).cxx_destruct;
@end
