@interface WAReportSplitPluginCodeStatisItem : WAReportBaseItem
{
    NSString * _provider; // +0x8
    long long _version; // +0x10
    long long _stage; // +0x18
}
- (int)reportID;
- (void)makeSafeString;
- (id)reportString;
- (id)provider;
- (void)setProvider:(id)arg1;
- (long long)version;
- (void)setVersion:(long long)arg1;
- (long long)stage;
- (void)setStage:(long long)arg1;
- (void).cxx_destruct;
@end
