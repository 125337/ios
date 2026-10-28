@interface QBIPListManager : NSObject
{
    BOOL _hasGetIPList; // +0x8
    BOOL _isDefaultUseProxy; // +0x9
    BOOL _hadGetIPList; // +0xa
    BOOL _hadFetchedIplist; // +0xb
    int _spdy_bProxy; // +0xc
    NSMutableDictionary * _ssidToIpTypeDicts; // +0x10
    long long _spdyEnableFlag; // +0x18
    NSString * _currentSSID; // +0x20
    NSString * _gettingIpListSSID; // +0x28
    NSTimer * _getIpListTimer; // +0x30
    NSTimer * _iplistFrequencyControlTimer; // +0x38
    long long _iplistFrequencyControlCount; // +0x40
    NSString * _spdyStartIp; // +0x48
}
+ (id)sharedInstance;
+ (id)allocWithZone:(_NSZone *)arg1;
- (id)init;
- (void)dealloc;
- (void)enableSpdy;
- (void)disableSpdy;
- (BOOL)spdyAvailable;
- (void)getIpListFromServer:(id)arg1;
- (BOOL)haveToGetIpList;
- (id)getMobileNetworkSSID;
- (void)getIPListWhenAPNChanged:(BOOL)arg1;
- (void)saveIpLists:(id)arg1 apnType:(id)arg2 ipType:(long long)arg3 totalPollNum:(long long)arg4 lifePeriod:(long long)arg5;
- (void)saveDataToFileAndClear;
- (void)statSpdyStartIp;
- (id)getCurrentIpOfType:(int)arg1;
- (void)clearFrequencyControlTimer;
- (void)getIpListFrequencyControl;
- (BOOL)failCurrentIpOfType:(int)arg1;
- (id)getSPDYServer;
- (id)getWupProxyServer;
- (void).cxx_destruct;
- (int)spdy_bProxy;
- (void)setSpdy_bProxy:(int)arg1;
- (BOOL)isDefaultUseProxy;
- (void)setIsDefaultUseProxy:(BOOL)arg1;
- (BOOL)hadGetIPList;
- (void)setHadGetIPList:(BOOL)arg1;
- (id)ssidToIpTypeDicts;
- (void)setSsidToIpTypeDicts:(id)arg1;
- (long long)spdyEnableFlag;
- (void)setSpdyEnableFlag:(long long)arg1;
- (id)currentSSID;
- (void)setCurrentSSID:(id)arg1;
- (id)gettingIpListSSID;
- (void)setGettingIpListSSID:(id)arg1;
- (id)getIpListTimer;
- (void)setGetIpListTimer:(id)arg1;
- (id)iplistFrequencyControlTimer;
- (void)setIplistFrequencyControlTimer:(id)arg1;
- (long long)iplistFrequencyControlCount;
- (void)setIplistFrequencyControlCount:(long long)arg1;
- (id)spdyStartIp;
- (void)setSpdyStartIp:(id)arg1;
- (BOOL)hadFetchedIplist;
- (void)setHadFetchedIplist:(BOOL)arg1;
@end
