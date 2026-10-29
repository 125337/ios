@interface OVCImageFileCoverDesc : OVCCoverDesc
{
    NSString * _filePath; // +0x8
    CGRect _contentCropRegion; // +0x10
}
- (id)initWithFilePath:(id)arg1 duration:(struct)arg2;
- (id)initWithFilePath:(id)arg1 contentCropRegion:(CGRect)arg2 duration:(struct)arg3;
- (id)filePath;
- (CGRect)contentCropRegion;
- (void).cxx_destruct;
@end
