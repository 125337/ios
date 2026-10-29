@interface WCFinderECRedDotReportProtocolStruct : NSObject
{
    NSString * _redDotTipsUuid; // +0x8
    unsigned long long _redDotCtrlType; // +0x10
    NSString * _redDotShowInfoPath; // +0x18
    NSString * _redDotShowInfoParentPath; // +0x20
    unsigned long long _redDotShowInfoType; // +0x28
    unsigned long long _redDotShowInfoCountNum; // +0x30
    NSString * _redDotShowInfoTitle; // +0x38
    unsigned long long _redDotAction; // +0x40
    NSDate * _redDotActionTimestamp; // +0x48
    unsigned long long _receiveRedDotTimeStamp; // +0x50
    NSString * _redDotShowInfoIconUrl; // +0x58
    unsigned long long _innerVersion; // +0x60
    NSString * _reportExtInfo; // +0x68
}
- (id)reportParams;
- (id)toReportString;
- (id)redDotTipsUuid;
- (void)setRedDotTipsUuid:(id)arg1;
- (unsigned long long)redDotCtrlType;
- (void)setRedDotCtrlType:(unsigned long long)arg1;
- (id)redDotShowInfoPath;
- (void)setRedDotShowInfoPath:(id)arg1;
- (id)redDotShowInfoParentPath;
- (void)setRedDotShowInfoParentPath:(id)arg1;
- (unsigned long long)redDotShowInfoType;
- (void)setRedDotShowInfoType:(unsigned long long)arg1;
- (unsigned long long)redDotShowInfoCountNum;
- (void)setRedDotShowInfoCountNum:(unsigned long long)arg1;
- (id)redDotShowInfoTitle;
- (void)setRedDotShowInfoTitle:(id)arg1;
- (unsigned long long)redDotAction;
- (void)setRedDotAction:(unsigned long long)arg1;
- (id)redDotActionTimestamp;
- (void)setRedDotActionTimestamp:(id)arg1;
- (unsigned long long)receiveRedDotTimeStamp;
- (void)setReceiveRedDotTimeStamp:(unsigned long long)arg1;
- (id)redDotShowInfoIconUrl;
- (void)setRedDotShowInfoIconUrl:(id)arg1;
- (unsigned long long)innerVersion;
- (void)setInnerVersion:(unsigned long long)arg1;
- (id)reportExtInfo;
- (void)setReportExtInfo:(id)arg1;
- (void).cxx_destruct;
@end

