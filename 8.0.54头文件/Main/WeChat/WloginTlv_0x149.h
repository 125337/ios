@interface WloginTlv_0x149 : WloginTlv
{
    unsigned short wTipsType; // +0xa
    NSString * sTipsTitle; // +0x10
    NSString * sTipsContent; // +0x18
    NSString * sOtherInfo; // +0x20
}
- (int)decode:(char * *)arg1 andBuffLen:(int *)arg2;
- (void)dealloc;
- (unsigned short)wTipsType;
- (void)setWTipsType:(unsigned short)arg1;
- (id)sTipsTitle;
- (void)setSTipsTitle:(id)arg1;
- (id)sTipsContent;
- (void)setSTipsContent:(id)arg1;
- (id)sOtherInfo;
- (void)setSOtherInfo:(id)arg1;
@end

