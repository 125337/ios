@interface MMOpenVoiceNetworkMgr : NSObject <CNetworkStatusExt>
{
    id /* block */ networkCallStatusCallback; // +0x8
}
- (void)startListen:(id /* block */)arg1;
- (void)stopListen;
- (int)getCurrentNetType;
- (unsigned int)getNetworkType;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void).cxx_destruct;
@end

