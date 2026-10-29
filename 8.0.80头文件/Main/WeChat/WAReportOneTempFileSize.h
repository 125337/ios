@interface WAReportOneTempFileSize : WAReportBaseItem
{
    unsigned long long _fileAllocSize; // +0x8
}
- (int)reportID;
- (id)reportString;
- (unsigned long long)fileAllocSize;
- (void)setFileAllocSize:(unsigned long long)arg1;
@end
