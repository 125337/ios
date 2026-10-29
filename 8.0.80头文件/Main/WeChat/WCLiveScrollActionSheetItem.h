@interface WCLiveScrollActionSheetItem : MMScrollActionSheetItem
{
    long long _reportElementId; // +0x8
    NSString * _redDotPath; // +0x10
    UIColor * _subTitleColor; // +0x18
}
- (id)init;
- (long long)reportElementId;
- (void)setReportElementId:(long long)arg1;
- (id)redDotPath;
- (void)setRedDotPath:(id)arg1;
- (id)subTitleColor;
- (void)setSubTitleColor:(id)arg1;
- (void).cxx_destruct;
@end
