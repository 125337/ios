@interface WCMomentsMenuActionReportExtInfo : MMObject
{
    long long _bubPullType; // +0x8
    long long _txtSelectType; // +0x10
    NSString * _txtDesc; // +0x18
    long long _txtType; // +0x20
}
- (long long)bubPullType;
- (void)setBubPullType:(long long)arg1;
- (long long)txtSelectType;
- (void)setTxtSelectType:(long long)arg1;
- (id)txtDesc;
- (void)setTxtDesc:(id)arg1;
- (long long)txtType;
- (void)setTxtType:(long long)arg1;
- (void).cxx_destruct;
@end
