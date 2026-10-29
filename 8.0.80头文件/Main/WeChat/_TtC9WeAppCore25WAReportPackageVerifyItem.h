@interface _TtC9WeAppCore25WAReportPackageVerifyItem : WAReportBaseItem
{
    long long fileSize; // +0x8
    long long costTime; // +0x10
    long long verifyType; // +0x18
}
- (long long)fileSize;
- (void)setFileSize:(long long)arg1;
- (long long)costTime;
- (void)setCostTime:(long long)arg1;
- (long long)verifyType;
- (void)setVerifyType:(long long)arg1;
- (int)reportID;
- (id)reportString;
- (id)init;
@end
