@interface MMDeleteFileModel : NSObject <PBCoding>
{
    BOOL _bUpload; // +0x8
    NSString * _rtxName; // +0x10
    NSString * _fileDescription; // +0x18
    NSArray * _filePaths; // +0x20
}
+ (void)PBArrayAdd_rtxName;
+ (void)PBArrayAdd_fileDescription;
+ (void)PBArrayAdd_filePaths;
+ (void)PBArrayAdd_bUpload;
+ (void)initialize;
+ (id)generateDeleteFileModelFromIPXX:(id)arg1;
+ (BOOL)checkDeleteFileModelValid:(id)arg1;
- (id)getPBPropertyTable;
- (id)rtxName;
- (void)setRtxName:(id)arg1;
- (id)fileDescription;
- (void)setFileDescription:(id)arg1;
- (id)filePaths;
- (void)setFilePaths:(id)arg1;
- (BOOL)bUpload;
- (void)setBUpload:(BOOL)arg1;
- (void).cxx_destruct;
@end

