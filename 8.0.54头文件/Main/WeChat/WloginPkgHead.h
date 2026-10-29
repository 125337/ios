@interface WloginPkgHead : NSObject <WloginProtocolBuff>
{
    struct stClientPkgHead; // +0x8
    struct stServerPkgHead; // +0x21
}
- (id)initWithVer:(unsigned short)arg1 andPubNo:(unsigned int)arg2 andClientType:(unsigned int)arg3;
- (BOOL)resetHead;
- (int)decode:(char * *)arg1 andBuffLen:(int *)arg2;
- (int)encode:(id)arg1;
- (void)setPkgUin:(unsigned int)arg1;
- (unsigned int)pkgUin;
- (void)setPkgCmd:(unsigned short)arg1;
- (unsigned short)pkgCmd;
@end

