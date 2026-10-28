@interface TAVSourceExportConfiguration : NSObject
{
    BOOL _shouldOptimizeForNetworkUse; // +0x8
    NSString * _fileType; // +0x10
    NSURL * _outputURL; // +0x18
    NSArray * _metadata; // +0x20
    struct _timeRange; // +0x28
}
- (id)init;
- (id)temporaryExportURL;
- (id)fileType;
- (void)setFileType:(id)arg1;
- (id)outputURL;
- (void)setOutputURL:(id)arg1;
- (BOOL)shouldOptimizeForNetworkUse;
- (void)setShouldOptimizeForNetworkUse:(BOOL)arg1;
- (id)metadata;
- (void)setMetadata:(id)arg1;
- (struct)timeRange;
- (void)setTimeRange:(struct)arg1;
- (void).cxx_destruct;
@end
