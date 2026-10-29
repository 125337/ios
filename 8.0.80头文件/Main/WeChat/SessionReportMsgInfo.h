@interface SessionReportMsgInfo : NSObject <PBCoding>
{
    unsigned int _msgtime; // +0x8
    int _re_read; // +0xc
    long long _msgid; // +0x10
}
+ (void)PBArrayAdd_msgid;
+ (void)PBArrayAdd_msgtime;
+ (void)PBArrayAdd_re_read;
+ (void)initialize;
- (id)getPBPropertyTable;
- (long long)msgid;
- (void)setMsgid:(long long)arg1;
- (unsigned int)msgtime;
- (void)setMsgtime:(unsigned int)arg1;
- (int)re_read;
- (void)setRe_read:(int)arg1;
@end
