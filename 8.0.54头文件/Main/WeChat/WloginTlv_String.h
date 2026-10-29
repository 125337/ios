@interface WloginTlv_String : WloginTlv
{
    NSString * sString; // +0x10
}
- (int)decode:(char * *)arg1 andBuffLen:(int *)arg2;
- (int)encode:(id)arg1;
- (void)dealloc;
- (id)sString;
- (void)setSString:(id)arg1;
@end

