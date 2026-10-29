@interface WCCollectedSubAdItem : NSObject <NSCoding>
{
    NSString * _aid; // +0x8
    NSString * _traceId; // +0x10
    NSString * _groupId; // +0x18
    NSString * _clickReportUrl; // +0x20
    NSString * _exposureReportUrl; // +0x28
    NSString * _uxinfo; // +0x30
    NSString * _adPosId; // +0x38
    NSString * _tid; // +0x40
    NSString * _reportExtraData; // +0x48
    NSString * _priceStr; // +0x50
    WCAdColorInfo * _bgColor; // +0x58
    WCAdColorInfo * _nameTextColor; // +0x60
    NSString * _nameText; // +0x68
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)aid;
- (void)setAid:(id)arg1;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (id)groupId;
- (void)setGroupId:(id)arg1;
- (id)clickReportUrl;
- (void)setClickReportUrl:(id)arg1;
- (id)exposureReportUrl;
- (void)setExposureReportUrl:(id)arg1;
- (id)uxinfo;
- (void)setUxinfo:(id)arg1;
- (id)adPosId;
- (void)setAdPosId:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)reportExtraData;
- (void)setReportExtraData:(id)arg1;
- (id)priceStr;
- (void)setPriceStr:(id)arg1;
- (id)bgColor;
- (void)setBgColor:(id)arg1;
- (id)nameTextColor;
- (void)setNameTextColor:(id)arg1;
- (id)nameText;
- (void)setNameText:(id)arg1;
- (void).cxx_destruct;
@end
