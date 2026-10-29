@interface MBBizInfoObjC : NSObject
{
    BOOL _useScl; // +0x8
    BOOL _useAdps; // +0x9
    NSString * _bizName; // +0x10
    NSString * _udrProjectId; // +0x18
    NSString * _pkgPath; // +0x20
}
- (id)init;
- (id)bizName;
- (void)setBizName:(id)arg1;
- (BOOL)useScl;
- (void)setUseScl:(BOOL)arg1;
- (BOOL)useAdps;
- (void)setUseAdps:(BOOL)arg1;
- (id)udrProjectId;
- (void)setUdrProjectId:(id)arg1;
- (id)pkgPath;
- (void)setPkgPath:(id)arg1;
- (void).cxx_destruct;
@end
