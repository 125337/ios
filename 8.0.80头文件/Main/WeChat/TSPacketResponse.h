@interface TSPacketResponse : NSObject
{
    int _errorCode; // +0x8
    NSMutableDictionary * _externals; // +0x10
}
- (id)init;
- (int)errorCode;
- (void)setErrorCode:(int)arg1;
- (id)externals;
- (void)setExternals:(id)arg1;
- (void).cxx_destruct;
@end
