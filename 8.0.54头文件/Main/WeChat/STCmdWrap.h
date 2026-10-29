@interface STCmdWrap : NSObject
{
    stCmd * _pCmd; // +0x8
}
+ (id)createInstance:(stCmd)arg1;
- (void)dealloc;
- (stCmd *)pCmd;
- (void)setPCmd:(stCmd *)arg1;
@end

