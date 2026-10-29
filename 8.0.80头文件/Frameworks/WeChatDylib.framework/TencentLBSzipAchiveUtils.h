@interface TencentLBSzipAchiveUtils : NSObject <ZipArchiveDelegate>
{
    TencenLBSZipArchive * _zipAchive; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (BOOL)unzipFileAtPath:(id)arg1 toDestination:(id)arg2;
- (BOOL)zipDir:(id)arg1 tozipPath:(id)arg2;
- (void)ErrorMessage:(id)arg1;
- (id)zipAchive;
- (void)setZipAchive:(id)arg1;
- (void).cxx_destruct;
@end
