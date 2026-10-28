@interface MigrationReportDataInfo : NSObject
{
    unsigned long long _transferedSize; // +0x8
    unsigned long long _estimatedSize; // +0x10
    unsigned long long _elapsedSecond; // +0x18
}
- (unsigned long long)transferedSize;
- (void)setTransferedSize:(unsigned long long)arg1;
- (unsigned long long)estimatedSize;
- (void)setEstimatedSize:(unsigned long long)arg1;
- (unsigned long long)elapsedSecond;
- (void)setElapsedSecond:(unsigned long long)arg1;
@end
