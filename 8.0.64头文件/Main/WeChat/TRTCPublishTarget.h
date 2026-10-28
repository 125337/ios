@interface TRTCPublishTarget : NSObject
{
    unsigned long long _mode; // +0x8
    NSArray * _cdnUrlList; // +0x10
    TRTCUser * _mixStreamIdentity; // +0x18
}
- (PublishTarget)convertToCppParams;
- (int)convertPublishMode:(unsigned long long)arg1;
- (id)init;
- (unsigned long long)mode;
- (void)setMode:(unsigned long long)arg1;
- (id)cdnUrlList;
- (void)setCdnUrlList:(id)arg1;
- (id)mixStreamIdentity;
- (void)setMixStreamIdentity:(id)arg1;
- (void).cxx_destruct;
@end
