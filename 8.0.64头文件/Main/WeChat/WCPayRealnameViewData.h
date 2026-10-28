@interface WCPayRealnameViewData : NSObject
{
    BOOL _assignUserPay; // +0x8
    NSArray * _supportCredList; // +0x10
    NSArray * _professions; // +0x18
    NSArray * _unSupportNationList; // +0x20
    NSArray * _controlData; // +0x28
    SpecialFindPwdInfo * _specialFindPwdInfo; // +0x30
}
- (id)init;
- (BOOL)assignUserPay;
- (void)setAssignUserPay:(BOOL)arg1;
- (id)supportCredList;
- (void)setSupportCredList:(id)arg1;
- (id)professions;
- (void)setProfessions:(id)arg1;
- (id)unSupportNationList;
- (void)setUnSupportNationList:(id)arg1;
- (id)controlData;
- (void)setControlData:(id)arg1;
- (id)specialFindPwdInfo;
- (void)setSpecialFindPwdInfo:(id)arg1;
- (void).cxx_destruct;
@end
