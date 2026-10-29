@interface ConfigInfo : NSObject
{
    int _muteMicrophone; // +0x8
    int _muteEarphone; // +0xc
    int _handsFree; // +0x10
}
- (id)init;
- (int)muteMicrophone;
- (void)setMuteMicrophone:(int)arg1;
- (int)muteEarphone;
- (void)setMuteEarphone:(int)arg1;
- (int)handsFree;
- (void)setHandsFree:(int)arg1;
@end
