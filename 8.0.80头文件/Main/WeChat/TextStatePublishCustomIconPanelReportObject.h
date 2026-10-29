@interface TextStatePublishCustomIconPanelReportObject : NSObject
{
    long long _confirmButtonClickCount; // +0x8
    long long _cancelButtonClickCount; // +0x10
    long long _switchIconButtonClickCount; // +0x18
    NSMutableArray * _hadSelectIconIdArray; // +0x20
    NSMutableArray * _hadInputIconDescArray; // +0x28
}
- (id)init;
- (id)getCustomStatusOptCntJsonString;
- (id)getCustomStatusIconIdString;
- (id)getCustomStatusInputIconDescString;
- (id)makeReportJsonString:(id)arg1;
- (long long)confirmButtonClickCount;
- (void)setConfirmButtonClickCount:(long long)arg1;
- (long long)cancelButtonClickCount;
- (void)setCancelButtonClickCount:(long long)arg1;
- (long long)switchIconButtonClickCount;
- (void)setSwitchIconButtonClickCount:(long long)arg1;
- (id)hadSelectIconIdArray;
- (void)setHadSelectIconIdArray:(id)arg1;
- (id)hadInputIconDescArray;
- (void)setHadInputIconDescArray:(id)arg1;
- (void).cxx_destruct;
@end
