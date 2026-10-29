@interface WAReportMainListExposeItem : WAReportBaseItem
{
    unsigned int _enterListTimeStamp; // +0x8
    unsigned int _leaveListTimeStamp; // +0xc
    unsigned int _leaveListType; // +0x10
    unsigned int _clickAppidIndex; // +0x14
    unsigned int _clickAppidIsStar; // +0x18
    NSString * _clickAppid; // +0x20
    NSString * _clickAppidName; // +0x28
    NSString * _appidFrom1And5; // +0x30
    NSString * _appidFrom6And10; // +0x38
    NSString * _appidFrom11And15; // +0x40
    NSString * _appidFrom16And20; // +0x48
    NSString * _openSession; // +0x50
}
- (int)reportID;
- (id)reportString;
- (unsigned int)enterListTimeStamp;
- (void)setEnterListTimeStamp:(unsigned int)arg1;
- (unsigned int)leaveListTimeStamp;
- (void)setLeaveListTimeStamp:(unsigned int)arg1;
- (unsigned int)leaveListType;
- (void)setLeaveListType:(unsigned int)arg1;
- (unsigned int)clickAppidIndex;
- (void)setClickAppidIndex:(unsigned int)arg1;
- (id)clickAppid;
- (void)setClickAppid:(id)arg1;
- (id)clickAppidName;
- (void)setClickAppidName:(id)arg1;
- (unsigned int)clickAppidIsStar;
- (void)setClickAppidIsStar:(unsigned int)arg1;
- (id)appidFrom1And5;
- (void)setAppidFrom1And5:(id)arg1;
- (id)appidFrom6And10;
- (void)setAppidFrom6And10:(id)arg1;
- (id)appidFrom11And15;
- (void)setAppidFrom11And15:(id)arg1;
- (id)appidFrom16And20;
- (void)setAppidFrom16And20:(id)arg1;
- (id)openSession;
- (void)setOpenSession:(id)arg1;
- (void).cxx_destruct;
@end
