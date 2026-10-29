@interface Xp2pParams : NSObject
{
    unsigned int _p2pSwitch; // +0x8
    unsigned int _p2pUploadSwitch; // +0xc
    unsigned int _p2pDownloadMnSwitch; // +0x10
    unsigned int _p2pStatSwitch; // +0x14
    unsigned int _p2pDebugLogSwitch; // +0x18
    unsigned int _p2pMaxLoad; // +0x1c
    unsigned int _p2pMaxBufferSize; // +0x20
    unsigned int _p2pUploadDawangkaSwitch; // +0x24
    unsigned int _p2pUpdateVideoCache; // +0x28
    unsigned int _p2pVerifyStream; // +0x2c
    NSString * _p2pAppid; // +0x30
    NSString * _p2pKey; // +0x38
    NSString * _p2pSecret; // +0x40
    NSString * _cdnPlayUrl; // +0x48
    NSString * _p2pDomain; // +0x50
}
- (id)init;
- (id)description;
- (unsigned int)p2pSwitch;
- (void)setP2pSwitch:(unsigned int)arg1;
- (unsigned int)p2pUploadSwitch;
- (void)setP2pUploadSwitch:(unsigned int)arg1;
- (unsigned int)p2pDownloadMnSwitch;
- (void)setP2pDownloadMnSwitch:(unsigned int)arg1;
- (unsigned int)p2pStatSwitch;
- (void)setP2pStatSwitch:(unsigned int)arg1;
- (unsigned int)p2pDebugLogSwitch;
- (void)setP2pDebugLogSwitch:(unsigned int)arg1;
- (unsigned int)p2pMaxLoad;
- (void)setP2pMaxLoad:(unsigned int)arg1;
- (unsigned int)p2pMaxBufferSize;
- (void)setP2pMaxBufferSize:(unsigned int)arg1;
- (unsigned int)p2pUploadDawangkaSwitch;
- (void)setP2pUploadDawangkaSwitch:(unsigned int)arg1;
- (unsigned int)p2pUpdateVideoCache;
- (void)setP2pUpdateVideoCache:(unsigned int)arg1;
- (id)p2pAppid;
- (void)setP2pAppid:(id)arg1;
- (id)p2pKey;
- (void)setP2pKey:(id)arg1;
- (id)p2pSecret;
- (void)setP2pSecret:(id)arg1;
- (unsigned int)p2pVerifyStream;
- (void)setP2pVerifyStream:(unsigned int)arg1;
- (id)cdnPlayUrl;
- (void)setCdnPlayUrl:(id)arg1;
- (id)p2pDomain;
- (void)setP2pDomain:(id)arg1;
- (void).cxx_destruct;
@end
