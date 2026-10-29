@interface WCAdvertiseMonitorReportInfo : NSObject
{
    int _subType; // +0x8
    int _subValue; // +0xc
    int _source; // +0x10
    NSString * _actionName; // +0x18
    NSString * _actionValue; // +0x20
    NSString * _extInfo; // +0x28
}
+ (id)genMonitorReportInfo:(id)arg1 actionValue:(id)arg2 subType:(int)arg3 subValue:(int)arg4 extInfo:(id)arg5;
- (id)toReportString;
- (id)actionName;
- (void)setActionName:(id)arg1;
- (id)actionValue;
- (void)setActionValue:(id)arg1;
- (int)subType;
- (void)setSubType:(int)arg1;
- (int)subValue;
- (void)setSubValue:(int)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (int)source;
- (void)setSource:(int)arg1;
- (void).cxx_destruct;
@end

