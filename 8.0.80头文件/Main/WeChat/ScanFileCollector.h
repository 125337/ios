@interface ScanFileCollector : NSObject
{
    NSMutableArray * _filePaths; // +0x8
    NSString * _source; // +0x10
}
+ (id)collectorFromDiskUsageScanData:(id)arg1;
+ (id)collectorFromUserFileScanDatabase:(id)arg1;
- (id)initWithSource:(id)arg1;
- (id)init;
- (unsigned long long)fileCount;
- (void)storeToFileIndexService;
- (id)description;
- (id)filePaths;
- (id)source;
- (void).cxx_destruct;
@end
